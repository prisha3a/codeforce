#include<iostream>
using namespace std;
int main()
{
    int n,t;
    
    cin>>t;
    for(int i=t;i>0;i--)
    {
        int s=0;
        cin>>n;
        while(n!=0)
        {
        s=s+(n%10);
        n=n/10;
        }
        cout<<s<<" ";

    
    }
}