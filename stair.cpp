#include<iostream>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    cin>>t;
    for(int i=t;i>0;i--)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a<b&&b<c)
        {
        cout<<"STAIR"<<endl;
        }

        else if(a<b&&c<b)
        {
            cout<<"PEAK"<<endl;
        }
        else
        {
            cout<<"NONE"<<endl;
        }

    }
}