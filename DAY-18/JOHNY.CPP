#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int k;
	    cin>>k;
	    int val=a[k-1];
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(a[i]==val){
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}