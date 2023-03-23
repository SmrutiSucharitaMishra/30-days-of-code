#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n,k;
	      cin>>n>>k;
	    int A[n];
	    
	    for (int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        if (k>=A[i])
	       {
	           cout<<"1";
	           k=k-A[i];
	           
	       }
	       else
	       cout<<"0";
	    }
	    cout<<endl;
	}
	return 0;
}
