#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

long double Funcction1(long double x)
{
    long double r = (x*x*x)+3*(x*x)+12*x+8;

    return r;
}

long double Function2(long double y)
{
    long double s = 3*(y*y)+6*y+12;

    return s;
}

long double Error(long double a, long double b)
{
    long double error = ((a-b)/a)*100;

    return error;
}

int main()
{
    int tolerance,n=1;

    long double xold,xnew,old;

    cout<<"Please Enter the Value of x --> ";
    cin>>xold;
    cout<<endl;

    cout<<"Enter The Tolerance Number --> ";
    cin>>tolerance;
    cout<<endl;



    while(tolerance--)
    {
        cout<<"Tolerance : "<<n++;
        cout<<endl;

        old=xold;

        cout<<fixed<<"The value of f(x) is "<<setprecision(7)<<Funcction1(xold)<<endl;

        cout<<fixed<<"The value of f'(x) is "<<setprecision(7)<<Function2(xold)<<endl;

        xnew = xold - (Funcction1(xold)/Function2(xold));

        cout<<fixed<<"The value of x is "<<setprecision(7)<<xnew<<endl;

        cout<<fixed<<"Error is "<<setprecision(7)<<fabs(Error(xnew,old))<<"%"<<endl;

        xold=xnew;


    }

    return 0;
}
