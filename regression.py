import math
xi[]=input("xi:")
yi[]=input("yi:")
xiyi=[0,0,0,0,0,0]
sqr_xi=[0,0,0,0,0,0]
i=0
p=0
m=input("number of elements:")
n=len(xi)
#while(i<=m):
#	xi[i]=input("xi:")
#	yi[i]=input("yi:")
	#p=p+1
#	i=i+1	
	
while(p<0):
	xiyi[i]=xi[i]*y[i]
	sqr_xi=xi[i]*xi[i]
	p=p+1
	i=i+1
s_xiyi=sum(xiyi)
s_xi=sum(xi)
s_yi=sum(yi)
ssqr_xi=sum(sqr_xi)
bx=(s_xi/n)
by=(s_yi/n)
a1=(((n*s_xiyi)-(s_xi*s_yi))/((n*ssqr_xi)-pow(s_xi,2)))
a=by-a1*bx
print "a0: ",a
print "a1: ",a1
