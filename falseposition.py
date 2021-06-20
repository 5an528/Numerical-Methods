import math
def f(x):
	return ((x*x*x*x*x*x*x*x*x*x)-1)

def false_position(xl,xu,tol):
	ea = 1000000000
	i = 0;
	xm_old = 0;
	xm = 0
	if f(xu)*f(xl) < 0:
		while (ea > tol):
			xm_old = xm
			xm = (((xu*f(xl))-(xl*f(xu)))/(f(xl)-f(xu)))
			xm = 1.0*xm 
			print xm
			if f(xl)*f(xm) < 0:
				xu = xm
			elif f(xl)*f(xm) > 0:
				xl =xm
			else:
				break
			if (i > 0):
				ea = (xm-xm_old)/xm
				ea = 1.0*ea
				ea = abs(ea)*100
				print ea
			i = i+1
		else:
			print ('incorrect boundary')
		return xm
def main():
	a = input ("Enter value of xl :")
	b = input ("Enter value of xu :")
	c = input ("Enter value of tol :")
	x = false_position(a,b,c)
if __name__ =="__main__":
	main()
