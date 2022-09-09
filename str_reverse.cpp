#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string t=s;
	    reverse(s.begin(), s.end());
	    if(s==t)
	    {
	        cout<<"wins";
	    }
	    else
	    {
	        cout<<"loses";
	    }
	    cout<<endl;
	}
	return 0;
}
