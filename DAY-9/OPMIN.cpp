#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	vector<int>a(n) ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0;
	    sort(a.begin(),a.end());
	    for(int i=0;i<n;i++){
	        if(a[i]!=a[0])
	        count+=1;
	        
	        
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
