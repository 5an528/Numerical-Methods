#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

long double X1(long double x, long double y)
{
    long double r = (7.85+0.1*x+0.2*y)/3;

    return r;
}

long double X2(long double a, long double b)
{
    long double s = (-19.3-0.1*a+0.3*b)/7;

    return s;
}

long double X3(long double m, long double n)
{
    long double t = (71.4-0.3*m+0.2*n)/10;

    return t;
}

long double Error(long double a, long double b)
{
    long double error =fabs(((a-b)/a)*100);

    return error;
}

int main()
{
    int iteration,n=1;
    long double x1,x2,x3,oldx1,oldx2,oldx3;

    cout<<"Please Enter the Value of x1 --> ";
    cin>>x1;
    cout<<endl;
    cout<<"Please Enter the Value of x2 --> ";
    cin>>x2;
    cout<<endl;
    cout<<"Please Enter the Value of x3 --> ";
    cin>>x3;
    cout<<endl;

    cout<<"Iteration  --> ";
    cin>>iteration;
    cout<<endl;

    while(iteration--)
    {
        cout<<"Iteration  --> "<<n++;
        cout<<endl;

        oldx1=x1;
        x1=X1(x2,x3);
        cout<<fixed<<"The value of X1 is "<<setprecision(7)<<x1<<endl;

        cout<<fixed<<"The Error is "<<setprecision(7)<<Error(x1,oldx1)<<"%"<<endl;
        cout<<endl;

        oldx2=x2;
        x2=X2(x1,x3);
        cout<<fixed<<"The value of X1 is "<<setprecision(7)<<x2<<endl;

        cout<<fixed<<"The Error is "<<setprecision(7)<<Error(x2,oldx2)<<"%"<<endl;
        cout<<endl;

        oldx3=x3;
        x3=X3(x1,x2);
        cout<<fixed<<"The value of X1 is "<<setprecision(7)<<x3<<endl;

        cout<<fixed<<"The Error is "<<setprecision(7)<<Error(x3,oldx3)<<"%"<<endl;
        cout<<endl;
    }

    return 0;
}
