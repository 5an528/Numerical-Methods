import math
def f1(y,z):
	return ((10-y-z)/9.0)
def f2(x,z):
	return ((19-2*x-3*z)/10.0)
def f3(x,y):
	return ((-3*x-4*y)/11.00)
def jacobi(it,x,y,z):
	while(it>0):
		x1=f1(y,z)
		y1=f2(x,z)
		z1=f3(x,y)
		print("X1:",x1)
		print("Y1:",y1)
		print("Z1:",z1)
		ex=abs(x1-x)
		ey=abs(y1-y)
		ez=abs(z1-z)
		print(max(ex,ey,ez))
		print("ex1:",ex)
		print("ey1:",ey)
		print("ez1:",ez)
		x=x1
		y=y1
		z=z1
		it=it-1
jacobi(3,0,0,0)
	
