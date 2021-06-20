import sys
import math

def f(x):
	return math.exp(-x)
def fix(a,tolerance):
	e=0
	i=0
	while(e<tolerance):
			xinew=f(a)
			print "X ",i+1," : ",xinew
			res=((xinew - a)/xinew)
			ea=abs(res)
			print "iteration ",i+1,",  error is ",ea
			i+=1
			a= xinew
			e+=1

			

a=input("Enter the initial point ")
tolerance=input("Enter the number of interartion ")
fix(a,tolerance)
