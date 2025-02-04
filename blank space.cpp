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
        int o;
      for(int x=0;x<5;x++)
      {
        cin>>a[i];
        if(a[i]=='0')
        {
           o++;
        }

      }
      cout<<o<<endl;
    }
}