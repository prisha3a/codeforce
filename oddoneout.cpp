#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=t;i>0;i--)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==b)
        {
            cout<<c<<endl;

        }
        else if(b==c)
        {
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
}