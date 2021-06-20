#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

double Function1(long double a, long double b, long double c, long double d, long double e)
{
    double rs=a*(pow(e,3))+b*(pow(e,2))+c*(e+d);

    return rs;
}

int main()
{
    double m,n,o,p,q,r;
    m=-0.000000000050598;
    n=0.000000038292;
    o=0.000074363;
    p=0.0088318;
    int c=1;
    r=0;
    cout<<"Enter Tolerance number --> ";
    cin>>q;
    cout<<endl<<endl;

    while(fabs(Function1(m,n,o,p,r))>q && c<=100)
    {
        c=c+1;

        if((3*pow(m,2)+2*n*(r+o))==0)
        {
            r=r+0.01;
            cout<<"The Temperature is "<<r<<"F"<<endl;


        }
        r=(r-Function1(m,n,o,p,r))/(3*m*pow(r,2)+2*n*(r+o));

        if(c<=100)
        {
            cout<<"The Temperature is "<<r<<"F"<<endl;
        }

        else
        {
            cout<<"Iteration Number crosses the limit."<<endl;
            cout<<"The Temperature is "<<r<<"F"<<endl;
        }
    }
}
