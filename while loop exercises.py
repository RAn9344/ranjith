i=0
n=int(input('enter the number:'))
while(i<n):
    T=int(input('enter the T mark..:'))
    E=int(input('enter the E mark..:'))
    M=int(input('enter the M mark..:'))
    S=int(input('enter the S mark..:'))
    SS=int(input('enter the SS mark..:'))
    sum=T+E+M+S+SS
    i=i+1
print('sum',sum)
avg=sum/5
print('avg',avg)

sum=0
n=int(input('enter the n no:'))
i=0
while i<(n+1):
    d=i**2
    sum=sum+d
    i=i+1
print(sum)



