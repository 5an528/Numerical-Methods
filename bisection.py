import math
def f(x):
    return x*x*x-2.000*x+1.000
a=input("lower\n")
b=input("higher\n")
c=((a+b)/2)
t=input("tolerance")
e=abs(a-b)
#if (f(a)*f(c)==0):
    #print("the root is:%4f",c)
#else:
while(e>t):
    c=((a+b)/2)
    print str(c)+"\n"
    if(f(a)*f(c)<0):
        b=c
    else:
        a=c
    e=abs(a-b)
print("the root is:",c)