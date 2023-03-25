#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int r,o,c;
    cin>>r>>o>>c;
    int x=20-o;
    int y=(x*36);
    if((c+y)>r)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
	    
	
	return 0;
}
