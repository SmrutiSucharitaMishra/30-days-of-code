#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int x,y;
	    cin>>x>>y;
	    if(x*15 >= 2*y)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
