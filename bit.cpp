#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int X;
    X=0;
    for(int i=n;i>0;i--)
    {
        string str;
        cin>>str;
        if(str=="++X")
        {
          X++;
        }
        else if(str=="X++")
        {
            X++;
        }
        else if(str=="--X")
        {
            X--;
        }
         else if(str=="X--")
        {
            X--;
        }
    }
     cout<<X<<endl;
}