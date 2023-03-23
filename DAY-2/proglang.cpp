#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int a,b,c,d,x,y;
	    cin>>a>>b>>c>>d>>x>>y;
	    if(c==a && d==b || c==b&& d==a)
	    cout<<"1"<<endl;
	    else if(x==a && y==b || x==b && y==a)
	    cout<<"2"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
