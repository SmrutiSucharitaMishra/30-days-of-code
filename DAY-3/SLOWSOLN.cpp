#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    long long ans=0;
	    while(x && z){
	        int n= min(y,z);
	        ans+=n*n;
	        z-=n;
	        x--;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}