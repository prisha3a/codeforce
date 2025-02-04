#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i=k;i>0;i--)
    {
    int a;
    a=n%10;
    if(a!=0)
    {
        n=n-1;
    }
    else 
    {
        n=n/10;
    }
    }
    
    cout<<n<<endl;
    
}