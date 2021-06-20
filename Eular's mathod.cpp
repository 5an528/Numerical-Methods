#include<iostream>
#include<math.h>
using namespace std;

double Function(double x)
{
    double r=(-2.2067*pow(10,-12))*(pow(x,4)-81*pow(10,8));

    return r;
}

double Error(double a,double b)
{
    double er = ((a-b)/a)*100;

    return fabs(er);
}

int main()
{
    double in,h,o,t,newo,newt,oldo;

    cout<<"Enter the Temperature in kelvin -->"<<endl<<endl;
    cin>>o;

    cout<<"Enter the Initial Time in sec -->"<<endl<<endl;
    cin>>in;

    cout<<"Enter the Step Size in sec -->"<<endl<<endl;
    cin>>h;

    cout<<"Enter the Finding Temperature Time in sec -->"<<endl<<endl;
    cin>>t;

    for(int i=0;;i++)
    {
        oldo=o;
        if(in==t)
        {
            break;
        }

        newo=o+Function(o)*h;
        newt=in+h;
        in=newt;
        o=newo;
        cout<<"New Temperature at "<<newt<<"s is "<<newo<<"k"<<endl<<endl;

        cout<<"Approximate Error is "<<Error(newo,oldo)<<"%"<<endl<<endl;

    }


    return 0;

}
