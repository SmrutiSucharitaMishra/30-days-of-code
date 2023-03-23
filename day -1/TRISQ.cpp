#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int b;
	    cin>>b;
	    int x=(b/2)*(b/2);
	    int y= (x-(b/2))/2;
	    cout<<y<<endl;
	}
	return 0;
}
