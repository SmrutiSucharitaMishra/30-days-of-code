#include <iostream>
using namespace std;

int solve() {
	// your code goes here

	    int x,n;
	    int count=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        if(a[i]>=x)
	        count++;
 
	    }
	    return count;
	}
	
	int main(){
	    int a;
	    cin>>a;
	    while(a--){
	        cout<<solve()<<endl;
	    }
	
	
	return 0;
}