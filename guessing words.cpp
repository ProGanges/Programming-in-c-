#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string a,b;
      cin>>a>>b;
        for(int i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                cout<<"G";
            }
            else
            {
                cout<<"B";
            }
        }
        cout<<endl;
    }

}
