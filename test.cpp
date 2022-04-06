#include<iostream>
using namespace std;

void punching(int *,int *);
int main()
{
    int a,b,c;
    cin>>a;
    int z=a*2;
    int t[200];
    int *e;
    int *o;
    e=t;
    o=t+1;
    for(int k=0;k<z;k++)
    {
    cin>>b;
    cin>>c;
    t[k]=b*2+1;
    t[k+1]=c;
    k++;
    }
    int p=a;
    int count=1;
   while(p)
   {
    printf("Case #%d:\n",count);
       punching(e,o);
       e=e+2;
       o=o+2;
       p--;
       count++;
   }
   return 0;
}

void punching(int *t,int *u)
{
    int b=*t;
    int c=*u;
        for(int i=0;i<b;i++)
        {
            if(i%2==0)
            {
                if(i==0)
                {
                    cout<<"..";
                    for(int j=0;j<c-1;j++)
                      {
                         cout<<"+-";
                      }
                      cout<<"+";
                    cout<<endl;
                }
        else{
            for(int j=0;j<c;j++)
            {cout<<"+-";}
            cout<<"+";
            cout<<endl;
            }
                
            }
            else{
                if(i==1)
                {
                    cout<<"..";
                    for(int j=0;j<c-1;j++)
                    {
                         cout<<"|.";
                    }
                    cout<<"|";
                    cout<<endl;
                }
                else{
                for(int j=0;j<c;j++)
                {
                    cout<<"|.";
                }
                cout<<"|";
                cout<<endl;
                }
            }
        }
}