#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
	while(a--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int index=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<x)
	        index=i+1;
	    }
	    cout<<index<<endl;
	}
	return 0;
}
