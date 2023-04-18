#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	    int a[n];
	    {for(int i=0;i<n;i++)
	        cin>>a[i];
	    }
	    int sum=0,k=0;
	    
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	    if(a[i]> i+1)
	    k= -1;
	    else
	    sum=sum+i+1-a[i];
	    }
	    if(k==-1)
	    cout<<-1;
	    else
	    cout<<sum;
	    cout<<endl;
	}
	return 0;
}
