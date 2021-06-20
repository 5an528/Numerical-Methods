#include<iostream>

using namespace std;

int main()
{
    int n,i,j;
    double mult,sum=0,x[10],f[10],a;

    cout<<"Enter no. of terms --> ";
    cin>>n;
    cout<<"Enter the values of x and y -->"<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i]>>f[i];

    cout<<"\nEnter the value of t --> ";
    cin>>a;

    for(int i=0;i<=n-1;i++)
    {
    mult=1;
        for(int j=0;j<=n-1;j++)
        {
            if(j!=i)
            mult*=(a-x[j])/(x[i]-x[j]);
        }
        sum+=mult*f[i];
    }
    cout<<"\nThe estimated value of f(x) = "<<sum;

    return 0;
}
