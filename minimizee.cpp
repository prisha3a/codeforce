#include<iostream>
using namespace std;

    int minimize(int a,int b,int c)
    {
        int z;
        while(a<=b)
        {
          z=((c-a)+(b-c));
          return z; 
        }
        cout<<"a greater than b";
    }

    int main()
    {
       int a,b,c;
       cin>>a;
       cin>>b;
       cin>>c;
       cout<<"the output";
       cout<<minimize(a,b,c);

    }
