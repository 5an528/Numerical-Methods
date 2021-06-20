#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

long double Funcction1(long double x)
{
    long double r = x*x*x-0.165*x*x+0.0003993;

    return r;
}



long double Error(long double a, long double b)
{
    long double error =fabs(((a-b)/a)*100);

    return error;
}

int main()
{
    int tolerance;
    long double x0,x1,xnew,old;

    cout<<"Please Enter the Value of Xo --> ";
    cin>>x0;
    cout<<"Please Enter the Value of Xi --> ";
    cin>>x1;
    cout<<endl;

    cout<<"Please Enter the Tolerance Number --> ";
    cin>>tolerance;
    cout<<endl;

    while(tolerance--)
    {
        old=x0;

        cout<<fixed<<"The value of f(Xo) is "<<setprecision(5)<<Funcction1(x0)<<endl;

        cout<<fixed<<"The value of f(Xi) is "<<setprecision(5)<<Funcction1(x1)<<endl;

        xnew = x0 - ((Funcction1(x0)*(x0-x1)/(Funcction1(x0)-Funcction1(x1))));

        cout<<fixed<<"New value of x is "<<setprecision(5)<<xnew<<endl;

        cout<<fixed<<"The value of f(Xi) is "<<setprecision(5)<<Funcction1(xnew)<<endl;

        cout<<fixed<<"The Error is "<<setprecision(6)<<Error(xnew,old)<<"%"<<endl;

        x1=x0;
        x0=xnew;



    }

    return 0;
}
