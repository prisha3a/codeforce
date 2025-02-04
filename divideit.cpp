#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    long long n;
    for(int i=q;i>0;i--)
    {
        cin>>n;
        int ans=0;
        while(n>1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%3==0)
            {
                n=n/3;
                ++ans;
            }
            else if(n%5==0)
            {
                n=n/5;
                ans+=2;
            }
            else
            {
                ans=-1;
                break;
            }
            ++ans;
        }
            cout<<ans<<endl;
       

    }
}