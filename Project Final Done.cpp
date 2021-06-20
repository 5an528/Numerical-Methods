#include<iostream>

#include<math.h>

using namespace std;

class Wheel
{
    private:
        int vertice;
    public:
        void getdata()
        {
            cout << "\nWheel Graph's Vertices List and Edge List Selected"<<endl;
            cout << "\nPlease Enter The Vertices Number --> ";
            cin >> vertice;
        }
        void showresult()
        {
            int edge;
            int x1,x2,x3;
            edge=2*(vertice-1);

            if(vertice>3)
            {
                cout<<"\nThe "<< vertice<<" Vertice and "<<edge<<" Edge Graph is given below."<<endl;
                for(int i=1;i<vertice;i++)
                {
                    for(int j=i;j<=i;j++)
                    {
                        x1=j+1;
                        x2=j-1;
                        x3=j+2;
                        if( x1<1 || x1>vertice )
                        {
                            x1=vertice;
                        }
                        else if( x2<1 || x2>vertice )
                        {
                            x2=vertice;
                        }
                        else if( x3 > vertice )
                        {
                            x3=vertice-1;
                            if( x3==i )
                            {
                                x3=1;
                            }
                        }

                        cout << "\n"<<i<<" "<<x1<<endl;
                        cout << "\n"<<i<<" "<<x2<<endl;
                        cout << "\n"<<i<<" "<<x3<<endl;

                    }
                }
                for(int i=vertice;i<=vertice;i++)
                    {
                        for(int j=1;j<vertice;j++)
                        {
                            cout << "\n"<<i<<" "<<j<<endl;
                        }
                    }
            }
            else
                cout <<"\n INVALID INPUT!!!! For Wheel Graph there must be 4 or more nodes."<<endl;
        }

};

class Cycle
{
    private:
        int vertice;
    public:
        void getdata()
        {
            cout << "\nCycle Graph's Vertices List and Edge List Selected"<<endl;
            cout << "\nPlease Enter The Vertices Number --> ";
            cin >> vertice;
        }
        void showresult()
        {
            int edge;
            int x1,x2;
            edge=vertice;

            if(vertice>2)
            {
                cout<<"\nThe "<< vertice<<" Vertice and "<<edge<<" Edge Graph is given below."<<endl;
                for(int i=1;i<=vertice;i++)
                {
                    for(int j=i;j<=i;j++)
                    {
                        x1=j+1;
                        x2=j-1;
                        if( x1<1 || x1>vertice )
                        {
                            x1=vertice;
                            if( x1==i )
                            {
                                x1=1;
                            }
                        }
                        else if( x2<1 || x2>vertice )
                        {
                            x2=vertice;
                            if( x2==i )
                            {
                                x2=1;
                            }
                        }

                        cout << "\n"<<i<<" "<<x1<<endl;
                        cout << "\n"<<i<<" "<<x2<<endl;

                    }
                }
            }
            else
                cout <<"\nINVALID INPUT!!!! For Cycle Graph there must be 3 or more nodes."<<endl;
        }

};

class Complete
{
    private:
        int vertice;
    public:
        void getdata()
        {
            cout << "\nComplete Graph's Vertices List and Edge List Selected"<<endl;
            cout << "\nPlease Enter The Vertices Number --> ";
            cin >> vertice;
        }
        void showresult()
        {
            int edge;
            int x1;
            edge=(vertice*(vertice-1))/2;

            if(vertice>1)
            {
                cout<<"\nThe "<< vertice<<" Vertice and "<<edge<<" Edge Graph is given below."<<endl;
                for(int i=1;i<=vertice;i++)
                {
                    for(int j=i;j<=i;j++)
                    {
                        x1=j+1;
                        if( x1>vertice)
                            {
                                x1=1;
                            }
                      cout << "\n"<<i<<" "<<x1<<endl;

                    }
                }
            }
            else
                cout <<"\nINVALID INPUT!!!! For Complete Graph there must be 2 or more nodes."<<endl;
        }

};

class CompleteBipartite
{
    private:
        int v1,v2;
    public:
        void getdata()
        {
            cout << "\nComplete Bipartite Graph's Vertices List and Edge List Selected"<<endl;
            cout << "\nPlease Enter The First Vertices Number  --> ";
            cin >> v1;
            cout << "\nPlease Enter The Second Vertices Number  --> ";
            cin >> v2;
        }
        void showresult()
        {
            int edge,var;
            edge=v1*v2;

            if(v1<11 && v2<11)
            {
                cout<<"\nThe "<< v1+v2<<" Vertice and "<<edge<<" Edge Graph is given below."<<endl;
                for(int i=1;i<=v1;i++)
                {
                    for(int j=0;j<v2;j++)
                    {
                        var=65+j;
                      cout << "\n"<<i<<" "<<(char)var<<endl;

                    }
                }
            }
            else
                cout <<"\nINVALID INPUT!!!! For Complete Bipartite Graph there must be up to 10 nodes."<<endl;
        }

};

class Cube
{
    private:
        int v1;
    public:
        void getdata()
        {
            cout << "\nCube Graph's Vertices List and Edge List Selected"<<endl;
            cout << "\nPlease Enter The Vertices Number  --> ";
            cin >> v1;
        }
        void showresult()
        {
            int edge,vertice,x1,i,var1,var2;
            var1=65;
            var2=66;
            vertice=pow(2,v1);
            edge=pow(2,(v1-1))*v1;
            if(v1<6)
            {
                cout<<"\nThe "<< vertice<<" Vertice and "<<edge<<" Edge Graph is given below."<<endl;
                if(v1<=2)
                {
                    for (int i=1;i<=vertice;i++)
                    {
                        for(int j=i;j<=i;j++)
                        {
                            x1=j+1;
                            if(x1>vertice)
                            {
                                x1=1;
                            }
                            cout << "\n"<<i<<" "<<x1<<endl;
                        }

                    }
                }

                else if(v1==3)
                {
                    for (int i=1;i<=4;i++)
                    {
                        for(int j=i;j<=i;j++)
                        {
                            x1=j+1;
                            if(x1>4)
                            {
                                x1=1;
                            }
                            cout << "\n"<<i<<" "<<x1<<endl;
                        }

                    }
                    for (int i=1;i<=4;i++)
                    {
                        for(int j=i;j<=i;j++)
                        {

                            if(var2>68)
                            {
                                var2='A';
                            }
                            cout << "\n"<<(char)var1<<" "<<(char)var2<<endl;
                            var1++;
                            var2++;
                        }

                    }
                    var1=65;
                    for(int i=0; i<4;i++)
                    {
                        for(int j=i;j<=i;j++)
                        {
                            cout << "\n"<<i+1<<" "<<(char)var1<<endl;
                            var1++;
                        }
                    }
                }
                else
                    cout << "\nINVALID INPUT !!!! Input must be from 1 to 3."<<endl;

            }
            else
                cout <<"\nINVALID INPUT!!!! For Cube Graph there must be up to 5 nodes."<<endl;
        }


};

int main()
{
    int n,k;
    cout<<"\t\t\t\t*********************************************************"<<endl;
    cout<<"\t\t\t\t*\t\t\t\t\t\t\t*"<<endl;
    cout<<"\t\t\t\t*\t\t\t\t\t\t\t*"<<endl;
    cout<<"\t\t\t\t*\t\tWELCOME TO DRAW GRAPH\t\t\t*"<<endl;
    cout<<"\t\t\t\t*\t\t\t\t\t\t\t*"<<endl;
    cout<<"\t\t\t\t*\t\t\t\t\t\t\t*"<<endl;
    cout<<"\t\t\t\t*********************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"You Can Draw The Following Graphs."<<endl;
    cout<<"1. Wheel Graph"<<endl;
    cout<<"2. Cycle Graph"<<endl;
    cout<<"3. Complete Graph"<<endl;
    cout<<"4. Complete Bipartite Graph"<<endl;
    cout<<"5. Cube Graph"<<endl;
    cout<<"\nHow many times you want to Draw Graph --> ";
    cin>>k;
    while(k--)
    {
        cout<<"\nPlease Enter Which Graph --> ";
    cin>>n;
        if(n==1)
            {
                Wheel result1;

                result1.getdata();
                result1.showresult();

            }
        else if(n==2)
            {
                Cycle result1;

                result1.getdata();
                result1.showresult();

            }
        else if(n==3)
            {
                Complete result1;

                result1.getdata();
                result1.showresult();

            }
        else if(n==4)
            {
                CompleteBipartite result1;

                result1.getdata();
                result1.showresult();

            }
        else if(n==5)
            {
                Cube result1;

                result1.getdata();
                result1.showresult();

            }
        else
            cout<<"\nERROR !!! INVALID INPUT"<<endl;

    }

    cout<<"\n\t\t\t\t\t\tThanks For Using Our Program"<<endl;


    return 0;
}
