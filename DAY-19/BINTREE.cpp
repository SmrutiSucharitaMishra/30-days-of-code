#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int i,j;
	    cin>>i>>j;
	    int count=0;
	while(i!=j){
	    if(i>j){
	        i=i/2;
	        count++;
	    }
	    else if(j>i){
	        j=j/2;
	        count++;
	    }
	}
	cout<<count<<endl;

	}
	
	
	return 0;
}