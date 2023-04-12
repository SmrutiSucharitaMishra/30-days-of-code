#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int x,y;
	    cin>>x>>y;
	    if(y>=x)
	    cout<<"0"<<endl;
	    else 
	    cout<<x-y<<endl;
	    }
	return 0;
}
