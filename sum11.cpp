#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    for(int i=t;i>0;i--)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==(b+c)||b==(a+c)||c==(a+b))
        {
            cout<<"YES"<<endl;
        }
            else 
        {
            cout<<"NO"<<endl;
        }
    }
}