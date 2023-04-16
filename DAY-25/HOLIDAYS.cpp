#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int count=0;
	    int sum=0;
	    int n,w;
	    cin>>n>>w;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=(n-1);i>-1;i--){
	        sum=sum+a[i];
	        count++;
	        if(sum>=w){
	            break;
	        }
	    }
	    cout<<(n-count)<<endl;
	}
	return 0;
}
