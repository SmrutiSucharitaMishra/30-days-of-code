#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    cout<<((k*x)+((n-k)*(min(x,y))))<<endl;
	}
	return 0;
}
