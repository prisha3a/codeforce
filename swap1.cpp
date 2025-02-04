#include<iostream>
using namespace std;
int main()
{
    int t;
    int x,y;
    cin>>t;
    for(int i=t;i>0;i--)
    {
        cin>>x;
        cin>>y;
        
        if(x>y)
        {
            t=x;
            x=y;
            y=t;
        cout<<x<<" "<<y<<" ";
        }
        else
    {
        cout<<x<<" "<<y<<" ";

        }
    }
}