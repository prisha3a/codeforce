#include<iostream>
using namespace std;
int main()
{
    int t;
    int a,b,c,d;
    cin>>t;
    for(int i=t;i>0;i--)
    {
        int e=0;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        if(b>a)
        {
            e++;
        }
         if(c>a)
        {
            e++;
        }
         if(d>a)
        {
            e++;
        }
        cout<<e<<endl;

    }
    
}