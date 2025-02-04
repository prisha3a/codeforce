#include<iostream>
using namespace std;
int main()
{
    int t;
    int a[100];
    int n;
    cin>>t;
    for(int i=t;t>0;t--)
    {
        int o=0,ans=0;
        cin>>n;
      for(int x=0;x<n;x++)
      {
        cin>>a[x];
        if(a[x]==0)
        {
           o++;
        }
        else
        {
            
            ans=max(ans,o);
            o=0;
            continue;
        }
      }
      cout<<max(ans,o)<<endl;
    }
}