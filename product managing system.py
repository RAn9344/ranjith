from tkinter import *
from tkinter import messagebox as msg
import tkinter .font as f
from tkinter import ttk
import mysql.connector
db= mysql.connector.connect(
    host='localhost',
    user='root',
    password='',
    database='product'
    )
cursor=db.cursor()
a=Tk()
a.title('Product')
a.geometry('900x600')
a.configure(bg='white')
a.resizable(0,0)
f_h=f.Font(family='Times New Roman',size=30,weight='bold')
f_l=f.Font(family='Arial',size=20,weight='normal')
la_head=Label(a,text='Welcome To My Shop',bg='white',fg='#d627b6')
la_head.place(x=200,y=40)
la_head['font']=f_h
img1=PhotoImage(file='new1.png')
img2=PhotoImage(file='shop1.png')
img3=PhotoImage(file='view1.png')
img4=PhotoImage(file='upda1.png')
img5=PhotoImage(file='del1.png')
img6=PhotoImage(file='search1.png')
img7=PhotoImage(file='FG.png')
def clear():
    en.delete(0,END)
global product
def add():
    global product
    def clear1():
        en_no.delete(0,END)
        en_name.delete(0,END)
        en_price.delete(0,END)
        en_details.delete(0,END)
    b=Toplevel(a)
    b.geometry('600x400')
    b.config(bg='white')
    b.resizable(0,0)
    l_head=Label(b,text='ADD PRODUCTS',bg='white',font=('Arial',30)).pack()
    la_prno=Label(b,text='ProductNumber',bg='white',font=('Times New Roman',16)).place(x=20,y=90)
    la_prname=Label(b,text='productName',bg='white',font=('Times New Roman',16)).place(x=20,y=140)
    la_prprice=Label(b,text='ProductPrice',bg='White',font=('Times New Roman',16)).place(x=20,y=190)
    la_prdetails=Label(b,text='ProductDetails',bg='white',font=('Times New Roman',16)).place(x=20,y=240)
    en_no=Entry(b,width=15,font=('arial',16),bd=0)
    en_name=Entry(b,width=15,font=('arial',16),bd=0)
    en_price=Entry(b,width=15,font=('arial',16),bd=0)
    en_details=Entry(b,width=15,font=('arial',16),bd=0)
    en_no.place(x=200,y=90)
    en_name.place(x=200,y=140)
    en_price.place(x=200,y=190)
    en_details.place(x=200,y=240)
    Frame(b,width=180,height=2,bg='#141414').place(x=200,y=116)
    Frame(b,width=180,height=2,bg='#141414').place(x=200,y=166)
    Frame(b,width=180,height=2,bg='#141414').place(x=200,y=216)
    Frame(b,width=180,height=2,bg='#141414').place(x=200,y=266)
    product=[]
    def process():
        no=Entry.get(en_no)
        name=Entry.get(en_name)
        price=Entry.get(en_price)
        details=Entry.get(en_details)
        pr_total=[no,name,price,details]
        product.append(pr_total)
        sql='insert into add_product (number,name,price,details) values (%s,%s,%s,%s)'
        val=(no,name,price,details)
        cursor.execute(sql,val)
        db.commit()
        print(product)
        clear1()
    btn_sub=Button(b,text='Submit',bg='black',fg='white',font=('arial',16),activeforeground='black',activebackground='white',bd=0,command=process)
    btn_sub.place(x=150,y=300)
def view():
    global product
    c=Toplevel(a)
    cursor.execute('select * from add_product')
    val=cursor.fetchall()
    x=ttk.Treeview(c,selectmode='browse')
    x['columns']=('1','2','3','4')
    x['show']='headings'
    x.column('1',width=200,anchor='c')
    x.column('2',width=200,anchor='c')
    x.column('3',width=200,anchor='c')
    x.column('4',width=200,anchor='c')
    x.heading('1',text='Number')
    x.heading('2',text='Name')
    x.heading('3',text='Price')
    x.heading('4',text='Details')
    for dt in val:
        x.insert("",'end',values=(dt[0],dt[1],dt[2],dt[3]))
    x.pack()
def update():
    pass
def delete():
    global product
    en1=Entry.get(en)
    cursor.execute('delete from add_product where number = {}'.format(en1))
    db.commit()
    clear()
def search():
    en_1=Entry.get(en)
    cursor.execute('select * from add_product where number ={}'.format(en_1))
    v =cursor.fetchall()
    clear()
    for i in v:
        print(i)
        msg.showinfo('answer',i)
            
btn_new=Button(a,image=img1,bd=0,command=add)
btn_view=Button(a,image=img3,bd=0,command=view)
btn_upda=Button(a,image=img4 ,bd=0,command=update)
btn_del=Button(a,image=img5,bd=0,command=delete)
btn_search=Button(a,image=img6,bd=0,command=search)
btn_FG=Button(a,image=img7,bd=0,command=search)
btn_new.place(x=20,y=110)
btn_view.place(x=20,y=190)
btn_upda.place(x=20,y=270)
btn_del.place(x=25,y=350)
btn_search.place(x=25,y=430)
btn_FG.place(x=840,y=60)
    
en=Entry(a,width=15,font=('arial',16),highlightthickness=3,bd=0,highlightcolor='red')
en.config(highlightbackground='#d61313',highlightcolor='#d61313')
en.place(x=650,y=60)
main_pic=Label(a,image=img2)
main_pic.place(x=200,y=100)
a.mainloop()

