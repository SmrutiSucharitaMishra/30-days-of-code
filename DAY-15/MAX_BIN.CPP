#include <iostream>
using namespace std;

void solve (){
	// your code goes here

	    int n,k;
	    string s;
	    cin>>n>>k>>s;
	    if(s[0]=='0'){
	        k--;
	        s[0]='1';
	        
	    }
	    while(k--) s+='0';
	    cout<<s<<endl;
}
	int main(){
	    int t,n;
	    cin >>t;
	    while(t--)
	    solve();
	return 0;
}
