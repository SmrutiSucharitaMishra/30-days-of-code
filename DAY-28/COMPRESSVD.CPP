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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0;
	   for(int i=0;i<n;i++){
	       if(a[i]==a[i+1])
	       count++;
	   }
	   cout<<n-count<<endl;
	}
	return 0;
}
