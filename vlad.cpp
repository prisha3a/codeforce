#include<iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=t;i>0;i--)
    {
        cin>>s;
        int a=0,b=0;
        for(int x=0;x<s.length();x++)
        {
            if(s[x]=='A')
            {
            a++;
            }
            else
            {
            b++;
            }
        }
        if(a>b)
        {
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
}