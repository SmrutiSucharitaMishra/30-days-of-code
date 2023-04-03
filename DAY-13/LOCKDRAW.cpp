#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x==y+z || y==x+z || z==x+y)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
