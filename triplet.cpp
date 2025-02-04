#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    
    
    for(int i=t;i>0;i--)
    {
        cin>>n;
        int found=-1;
        int count[200001]={0};
        int a[200001];
        
        
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            count[a[j]]++;
            
        
        if(count[a[j]]==3)
        found=a[j];
        }
        
        cout<<found<<endl;

        
    }
}