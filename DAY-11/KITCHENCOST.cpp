#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--)
	{
	    int n,x,i,cost=0;
	    cin>>n>>x;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=x)
	        cost+=b[i];
	    }
	    cout<<cost<<endl;
	}
	return 0;
}
