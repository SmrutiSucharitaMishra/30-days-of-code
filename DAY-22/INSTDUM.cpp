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
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	    }
	     int count=0;
	     int sum=0;
	     
	    for(int i=1;i<=n;i++){
	        sum+=a[i];
	        if(sum==i){
	            count++;
	        }
	        
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
