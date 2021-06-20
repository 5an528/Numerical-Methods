#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    long double n;
    long double x[1000],y[1000],sum1=0.00,sum2=0.00,sum3=0.00,sum4=0.00,avrg1,avrg2,a0,a1;
    cout<<"Please Enter the Value of n --> ";
    cin>>n;
    cout<<endl;



    cout<<"Please Enter the Value of Xi and Yi --> ";
    cout<<endl;

    for (int i=0;i<n;i++)
    {
      cin>>x[i];

      sum1=sum1+x[i];

      cin>>y[i];
      sum2=sum2+y[i];
      cout<<endl;
      sum3=sum3+x[i]*y[i];
      sum4=sum4+x[i]*x[i];

    }
    cout<<"Xi       Yi      XiYi       Xi*Xi"<<endl;
    cout<<endl;
    for (int i=0;i<n;i++)
    {
      cout<<x[i]<<"       "<<y[i]<<"       "<<x[i]*y[i]<<"       "<<x[i]*x[i]<<endl;
      cout<<endl;
    }

    cout<<fixed<<"The Sum of Xi and Yi is "<<setprecision(7)<<sum1<<" & "<<sum2<<endl;
    cout<<endl;
    cout<<fixed<<"The Sum of XiYi is "<<setprecision(7)<<sum3<<endl;
    cout<<endl;
    cout<<fixed<<"The Sum of XiXi is "<<setprecision(7)<<sum4<<endl;
    cout<<endl;

    avrg1=sum1/n;
    avrg2=sum2/n;
    cout<<fixed<<"The Average of Xi and Yi is "<<setprecision(7)<<avrg1<<" & "<<avrg2<<endl;
    cout<<endl;


    a1=(n*sum3-sum1*sum2)/(n*sum4-sum1*sum1);
    a0=avrg2-a1*avrg1;

    cout<<fixed<<"The Equation is y"<<setprecision(7)<<a0<<" + "<<a1<<"x"<<endl;


    return 0;
}
