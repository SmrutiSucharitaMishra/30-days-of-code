#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        if(i==0 || i== n-1)
	        {
	       cout<<1;
	        }
	        else
	        {
	        cout<<0;
	        }
	    }
	        cout<<endl;
	}
	return 0;
}