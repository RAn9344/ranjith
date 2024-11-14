# import the flask module 
from flask import Flask, render_template,request,make_response
from flask_mysqldb import MySQL,MySQLdb
import os,pdfkit

# from flaskext.mysql import MySQL

app = Flask(__name__)
# app.secret_key = "secret key"


# Add MySQL configurations
app.config['MYSQL_HOST'] = 'localhost'
app.config['MYSQL_USER'] = 'root'
app.config['MYSQL_PASSWORD'] = ''
app.config['MYSQL_DB'] = 'studdb'
path = os.getenv("PATH")


mysql = MySQL(app)
# mysql.init_app(app)

# Mention the default route 
@app.route("/")
def test():
    return render_template('index.html')

# Mention the default route 
@app.route("/genpdf",methods=['GET','POST'])
def pdf_template():
# View GPA
    if request.method=='GET':
        regno = request.args['regno']
        semester = request.args['semester']
        print(regno)
        
        totres=[]
        try:
            print("Enterd calc")
            sqlstr = "select * from internal_marks_master where regno   = (%s) and semester = (%s)" 
            print(sqlstr)   
            mycursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
            print("REGNO AND SEMESTER:",regno,semester)
            
            mycursor.execute(sqlstr,(regno,semester,))

            print('After Execute')
            subdata = mycursor.fetchall()
            # mysql.connection.commit()
            
            drow = mycursor.rowcount
            mycursor.close()
            print('Rows:',drow)
            print('Data Calc',subdata)

        except Exception as ex:
            print (ex) 

        rendered = render_template('viewallgpa1.html', data=subdata)
        pdf = pdfkit.from_string(rendered,False)
        
        response = make_response(pdf)
        response.headers['content-type']='application/pdf'
        response.headers['content-Disposition']='inline;filename=output.pdf'
        return response 
            

# Admin Login 
@app.route("/admin",methods=['GET','POST'])
def adminlog():
    if request.method=='GET':
        return render_template('adminlog.html')

    if request.method=='POST':
        user=request.form['user']
        pwd=request.form['pwd']

        if(user=="admin" and pwd=="admin"):
            print("Login Success !!! ")
            return render_template('adminmenu.html')
        else:
            return render_template('adminlog.html')    

@app.route("/adminstuff",methods=['GET','POST'])
def adminstuff1():
    return render_template('adminmenu.html')       

# Admin Login 
@app.route("/studlogin",methods=['GET','POST'])
def studlog():
    if request.method=='GET':
        return render_template('studlog.html')

    if request.method=='POST':
        user=request.form['user']
        pwd=request.form['pwd']

        print(user , ' : ' , pwd)

        try :
            sqlstr = '''select *from student_master where RegNo=%s and Emailid=%s'''
            print(sqlstr)   
            # mysql = MySQL(app)
            cursor = mysql.connection.cursor()
            cursor.execute(sqlstr,(user,pwd))
            
            cursor.close()
            msg = ""
            if cursor.rowcount == 0 :
                msg = 0 
            else :
                msg = 1  
        
        except Exception as ex:
            print (ex)
        if msg==1:
            return render_template('studmenu.html',studreg=user)
        else:
            return " <h2> Invalid User Id or Password </h2>  "

# View Student Profile
@app.route("/studprofile")
def viewstudprofile():
    if request.method=='GET':
        regno=request.args.get("regno")
        print(regno)
        try :
            query_string = """select * from student_master where RegNo = %s"""

            print(query_string)   
            cursor = mysql.connection.cursor()
            # cursor = mysql.connection.cursor()

            cursor.execute(query_string,(str(regno),))
            subdata = cursor.fetchone()
            # mysql.connection.commit()
            cursor.close()
            
        except Exception as ex:
            print (ex)
        
        return render_template('viewstudprofile.html',studdata=subdata)

# View Student Marks
@app.route("/studmarks")
def viewstudmarks():
    print(' data : ' , request.get_data())
    if request.method=='GET':
        regno=request.args.get("regno")
        sem=request.args.get("sem")
        print(regno,  ' semester : ' , sem )
        try :
            query_string = """select * from internal_marks_master where RegNo = %s and Semester = %s"""

            print(query_string)   
            cursor = mysql.connection.cursor()
            # cursor = mysql.connection.cursor()

            cursor.execute(query_string,(str(regno),str(sem),))
            subdata = cursor.fetchall()
            # mysql.connection.commit()
            cursor.close()
            print(subdata)
        except Exception as ex:
            print (ex)
        
        return render_template('viewstudmarks.html',data=subdata,regno=regno,semester=sem)

# Student Registration 
@app.route("/studreg")
def sturegister():
    if request.method=='GET':
        return render_template('studreg.html')

# Subject Entry Form 
@app.route("/subreg")
def subjectregister():
    if request.method=='GET':
        return render_template('subreg.html')

# Subject Mark Insert 
@app.route("/subregsuc",methods=['POST'] )
def subinsertsuc():
    print("Entered Subject Insert Part !!!")
    if request.method=='POST':
        papercode = request.form['papercode']
        papername = request.form['papername']
        semester = request.form['semester']

        # print(regno, " " , name1 , " " , fname, " " ,city ," " ,city , " " ,phone ," " ,emailid  )
        
        try :

            sqlstr = '''insert into paper_master(paper_code,paper_name,semester) values(%s,%s,%s)'''
            print(sqlstr)   
            # mysql = MySQL(app)
            cursor = mysql.connection.cursor()
            cursor.execute(sqlstr,(papercode,papername,semester))
            mysql.connection.commit()
            paperid = cursor.lastrowid
            print(paperid)
            cursor.close()
            
        except Exception as ex:
            print (ex)
        return render_template('subregsuc.html',paperid=paperid)


# Student Mark Entry 
@app.route("/markreg")
def stumarkregister():
    if request.method=='GET':
        try :
            sqlstr = "select * from paper_master"
            print(sqlstr)   
            cursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
            # cursor = mysql.connection.cursor()

            cursor.execute(sqlstr)
            subdata = cursor.fetchall()
            mysql.connection.commit()
            cursor.close()
            # print(" Records Count : " , cursor.rowcount)
            # print(subdata)
        except Exception as ex:
            print (ex)
        
        return render_template('markreg.html',subdata=subdata)

# Check if the student exists  
def checkstudent(regno):
    try :
        sqlstr = "select * from student_master where regno=%s"
        print(sqlstr)   
        cursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
        # cursor = mysql.connection.cursor()

        cursor.execute(sqlstr,(regno,))
        subdata = cursor.fetchall()
        mysql.connection.commit()
        cursor.close()
        print("STUDENT AVAIL", cursor.rowcount )
        if cursor.rowcount == 0 :
            return 0
        else :
            return 1 
    
    except Exception as ex:
        print (ex)

# Check whether the subject code grade is already present for the regno and return
def checkifpresent(regno="",paper_code=""):
    print(regno , " : : ",paper_code )
    try :
        # sqlstr=""
        # sqlstr = "select * from marks_master where RegNo = '" + str(regno) + "' and Subcode = '" + str(subcode) + "'"
        query_string = """select * from internal_marks_master where RegNo = %s and paper_code = %s"""

        print(query_string)   
        cursor = mysql.connection.cursor()
        # cursor = mysql.connection.cursor()

        cursor.execute(query_string,(str(regno),str(paper_code),))
        subdata = cursor.fetchone()
        mysql.connection.commit()
        cursor.close()
        # print(subdata)
        if cursor.rowcount == 0 :
            return 0
        else :
            return subdata[0] 
    
    except Exception as ex:
        print (ex)
    


# Get credit by passing subject code         
def getcredit(subcode):
    try :
        sqlstr = "select * from subject_master where subcode  like '" + subcode + "'"
        print(sqlstr)   
        cursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
        # cursor = mysql.connection.cursor()

        cursor.execute(sqlstr)
        subdata = cursor.fetchall()
        mysql.connection.commit()
        cursor.close()
        print(subdata)
        if cursor.rowcount == 0 :
            return 0
        else :
            return subdata
    
    except Exception as ex:
        print (ex)

# def viewres():

# GPA calculation for each semester         
def calcgpa(regno,semester):
    try :
        sqlstr = "select * from marks_master where regno  = %s and semester = %s " 
        print(sqlstr)   
        cursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
        # cursor = mysql.connection.cursor()

        cursor.execute(sqlstr,(regno,semester,))
        subdata = cursor.fetchall()
        mysql.connection.commit()
        cursor.close()
        print(subdata)
        if cursor.rowcount == 0 :
            return 0
        else :
            # Iterate and calculate the GPA 
            credit_sum = 0 
            mul_gpa = 0
            for data in subdata:
                print ( data['Credit'] , " : " , data['Grade'], " : ", data['GradePoint'])
                if data['Grade'] != "RA":
                    mul_gpa += ( int(data['Credit']) * int(data['GradePoint']) )
                    credit_sum += int(data['Credit'])
            
            print(credit_sum)
            print(mul_gpa)
            gpa = round(mul_gpa/credit_sum,2)
            result = {"semester":semester,"gpa":gpa, "credit_sum": credit_sum } 
            return result
    
    except Exception as ex:
        print (ex)


# Student View GPA
@app.route("/studcalcugpa",methods=['GET','POST'])
def viewstudgpa():
    if request.method=='GET':
        regno = request.args.get('regno')
        print(regno)
        semester=1
        totres=[]
        for i in range(1,9):
            semester = i
            res = calcgpa(regno,semester)
            if res :
                totres.append(res)
        print(totres)
        # Calculate CGPA
        semgpa=0
        sumofcredit=0
        for d in totres:
            print (d['credit_sum'])
            semgpa += d['gpa'] * d['credit_sum']
            sumofcredit += d['credit_sum']
        cgpa = round(semgpa/sumofcredit , 2)
        
        cgpares={"cgpa",cgpa}
        totres.append(cgpares)
        print("CGPA",cgpa)
        print(totres)
        return render_template('viewstudgpa.html',res=totres,cgpa=cgpa,regno=regno)

# View GPA
@app.route("/calcugpa",methods=['GET','POST'])
def viewgpa():
    if request.method=='GET':
        return render_template('viewgpa.html',res=0)
    if request.method=='POST':
        regno = request.form['regno']
        semester = request.form['semester']
        # print(regno)
        # semester=1
        totres=[]
        try:
            print("Enterd calc")
            sqlstr = "select * from internal_marks_master where regno   = (%s) and semester = (%s)" 
            print(sqlstr)   
            mycursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
            print("REGNO AND SEMESTER:",regno,semester)
            
            mycursor.execute(sqlstr,(regno,semester,))

            print('After Execute')
            subdata = mycursor.fetchall()
            # mysql.connection.commit()
            
            drow = mycursor.rowcount
            mycursor.close()
            print('Rows:',drow)
            print('Data Calc',subdata)

        except Exception as ex:
            print (ex) 

        return render_template('viewallgpa.html', data=subdata,regno=regno,semester=semester)
 

# Student Mark Insert 
@app.route("/markinsertsuc",methods=['POST'] )
def markregistersuc():
    print("Entered Mark Insert Part !!!")
    if request.method=='POST':
        
        regno = request.form['regno']
        papercode = request.form['papercode']
        
        test1 = request.form['test1']
        test2 = request.form['test2']
        modelex = request.form['modelex']
        assmark = request.form['assmark']
        semmark = request.form['semmark']

        # Check if student is available or not 
        stud_avail = checkstudent(regno)
        print("CHECKSTUDENT" ,stud_avail)
        if stud_avail == 0 :
            return "<h1> No Such Student </h1>"
        else :
            # return "<h1> Student Available </h1>"
            # print(regno, " " , name1 , " " , fname, " " ,city ," " ,city , " " ,phone ," " ,emailid  )

            # Add The Calculate Function Here  

            pcode = papercode.split('---', 2)

            print(pcode[0])
            print(pcode[1])
            print(pcode[2])

            # return "1" 
            # Check if the record is already present for the regno and papercode 
            alreadyavail = checkifpresent(regno,pcode[0])
            print("Already Avail :" ,alreadyavail)
        try :
            if alreadyavail == 0 :
                sqlstr = '''insert into internal_marks_master(regno,semester,paper_code,paper_name,test1_mark,test2_mark,model_exam_mark,assgn_mark,seminar_mark) values(%s,%s,%s,%s,%s,%s,%s,%s,%s)'''
                print(sqlstr)
                cursor = mysql.connection.cursor()
                cursor.execute(sqlstr,(regno,pcode[2],pcode[0],pcode[1],test1,test2,modelex,assmark,semmark))
                mysql.connection.commit()
                # markid = cursor.lastrowid
                # print(markid)
                j = cursor.lastrowid

                cursor.close()
                print("Record : ", j )
                internal_mark=docalcfun(j)         
            
            else:
                print(str(test1),str(test2),str(modelex),str(assmark),str(semmark),str(alreadyavail))
                # update internal_marks_master set test1_mark=42,test2_mark=35,model_exam_mark=65,assgn_mark=4,seminar_mark=3 where markId= 1;
                print(test1,test2,modelex,assmark,semmark,str(alreadyavail))
                sqlstr = '''update internal_marks_master set test1_mark= %s,test2_mark=%s,model_exam_mark=%s,assgn_mark=%s,seminar_mark=%s where markId= %s '''
                cursor = mysql.connection.cursor()
                cursor.execute(sqlstr,(str(test1),str(test2),str(modelex),str(assmark),str(semmark),str(alreadyavail)))
                print(sqlstr)   
                # mysql = MySQL(app)
            
                mysql.connection.commit()
                # markid = cursor.lastrowid
                # print(markid)
                cursor.close()

                internal_mark=docalcfun(alreadyavail)         
            
            
            # print(internal_mark)
        except Exception as ex:
            print (ex)
        return render_template('markregsuc.html',markid=1)

# Do the Internal Exam mark Calculation here
# @app.route("/docalcfun",methods=['POST'] )
def docalcfun( markidcalc=""):
    try :
        print("Enterd calc")
        sqlstr = "select * from internal_marks_master where markid   = (%s)" 
        print(sqlstr)   
        mycursor = mysql.connection.cursor(MySQLdb.cursors.DictCursor)
        print("MARKID:",str(markidcalc))
        
        mycursor.execute(sqlstr,(markidcalc,))
        print('After Execute')
        subdata = mycursor.fetchone()
        # mysql.connection.commit()
        drow = mycursor.rowcount
        mycursor.close()
        print('Rows:',drow)
        print('Data Calc',subdata)
        
        if  drow == 0 :
            return 0
        else :
 
            # Iterate and calculate the Internal Marks 
            # credit_sum = 0 
 
            t1mark= float(round((float(subdata['test1_mark'])  ),2))
 
            t2mark=float(round((int(subdata['test2_mark'])  ),2))

            mexmark=float(round((int(subdata['model_exam_mark'])  ),2))

            print(t1mark , " t1 t2 " , t2mark , " t3 " , mexmark)

            # Eliminate the smallest and do calculation for the other two 
            if( (t1mark < t2mark ) and (t1mark < mexmark) ):
                print(t1mark)   

                toptwomark =round( ((t2mark + mexmark)/125 * 100 * 0.15),2)
            
            elif (t2mark<mexmark):
                print(t2mark)

                
                toptwomark =round( ((t1mark + mexmark)/125 * 100 * 0.15),2)

            else:
                
                toptwomark =round( ((t2mark + t1mark)/100 * 100 * 0.15),2)
                print(mexmark)
            
            print(toptwomark)

            # Add all the marks for the internal marks
            internal_result = toptwomark + float(subdata['assgn_mark']) + float(subdata['seminar_mark'])


            # Store the marks by updating the table
            sqlstr = '''update internal_marks_master set best_two_calc= %s,Internal_mark =%s where markId= %s '''
            cursor = mysql.connection.cursor()
            cursor.execute(sqlstr,(str(toptwomark),str(internal_result),str(markidcalc),))
            print(sqlstr)   
            mysql.connection.commit()
            cursor.close()

            return str(internal_result)
        
    except Exception as ex:
        print (ex)


# Student Registration Insert 
@app.route("/studregsuc",methods=['POST'] )
def sturegistersuc():
    print("Entered Insert Part !!!")
    if request.method=='POST':
        regno = request.form['regno']
        name1= request.form['name1']
        course= request.form['course']
        fname= request.form['fname']
        city = request.form['city']
        phone = request.form['phone']
        emailid = request.form['emailid']

        print(regno, " " , name1 , " " , fname, " " ,city ," " ,city , " " ,phone ," " ,emailid  )
        
        try :

            sqlstr = '''insert into student_master(RegNo,StudentName,Course,FatherName,City,Phone,EmailId) values(%s,%s,%s,%s,%s,%s,%s)'''
            print(sqlstr)   
            # mysql = MySQL(app)
            cursor = mysql.connection.cursor()
            cursor.execute(sqlstr,(regno,name1,course,fname,city,phone,emailid))
            mysql.connection.commit()
            studid = cursor.lastrowid
            print(studid)
            cursor.close()
            
        except Exception as ex:
            print (ex)
        return render_template('studregsuc.html',studid=studid)

# View All Subjects  
@app.route("/viewallsubs")
def viewallsubs():

    try :

        sqlstr = "select * from subject_master"
        print(sqlstr)   
        cursor = mysql.connection.cursor()
        # cursor = mysql.connection.cursor()tu

        cursor.execute(sqlstr)
        studdata = cursor.fetchall()
        mysql.connection.commit()
        cursor.close()
        print(" Records Count : " , cursor.rowcount)
        print(studdata)
    except Exception as ex:
        print (ex)

    return render_template('viewallsubs.html',mydata=studdata)

# View All Students  
@app.route("/viewallstuds")
def viewallstuds():
    try :
        sqlstr = "select * from student_master"
        print(sqlstr)   
        cursor = mysql.connection.cursor()
        # cursor = mysql.connection.cursor()

        cursor.execute(sqlstr)
        studdata = cursor.fetchall()
        mysql.connection.commit()
        cursor.close()
        print(" Records Count : " , cursor.rowcount)
        print(studdata)
    except Exception as ex:
        print (ex)

    return render_template('viewallstuds.html',mydata=studdata)
  
@app.route("/home")
def myhome():
    return render_template('homepage.html')

@app.route("/products")
def prod():
    return "<h2> ALL PRODUCTS </h2>"

@app.route("/contact")
def contact():
    return "<h2> CONTACTS </h2>"

@app.route("/listall")
def listall():
    return "<h2> LIST ALL PRODS </h2>"


if __name__ == "__main__":
    app.run(debug=True)    
