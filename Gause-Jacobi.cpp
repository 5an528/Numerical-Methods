#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

long double X1(long double x, long double y)
{
    long double r = (7-2*x+y)/10;

    return r;
}

long double X2(long double a, long double b)
{
    long double s = (-4-a-3*b)/8;

    return s;
}

long double X3(long double m, long double n)
{
    long double t = (9+2*m+n)/10;

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
    long double x1,x2,x3,oldx1,oldx2,oldx3,e1,e2,e3;

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
    oldx1=x1;
    oldx2=x2;
    oldx3=x3;

    while(iteration--)
    {
        oldx1=x1;
        oldx2=x2;
        oldx3=x3;
        x1=X1(oldx2,oldx3);
        x2=X2(oldx1,oldx3);
        x3=X3(oldx1,oldx2);
        cout<<"Iteration  --> "<<n++;
        cout<<endl;

        cout<<fixed<<"The value of X1 is "<<setprecision(7)<<x1<<endl;

        cout<<endl;

        cout<<fixed<<"The value of X1 is "<<setprecision(7)<<x2<<endl;

        cout<<endl;

        cout<<fixed<<"The value of X1 is "<<setprecision(7)<<x3<<endl;

        cout<<endl;

        e1= Error(x1,oldx1);
        e2= Error(x2,oldx2);
        e3= Error(x3,oldx3);

        if (e1 > e2)
        {
            if (e1 > e3)
                cout<<fixed<<"The Maximum Error is "<<setprecision(7)<<e1<<"%"<<endl;
        }

        else if (e2 > e1)
        {
            if (e2 > e3)
                cout<<fixed<<"The Maximum Error is "<<setprecision(7)<<e2<<"%"<<endl;
        }

        else if (e3 > e1)
        {
            if (e3 > e2)
                cout<<fixed<<"The Maximum Error of Iteration is "<<setprecision(7)<<e3<<"%"<<endl;
        }
        else
            cout<<fixed<<"The Maximum Error of Iteration is 100%"<<endl;
        cout<<endl;
    }

    return 0;
}
