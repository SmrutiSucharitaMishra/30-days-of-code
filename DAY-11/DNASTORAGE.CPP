#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a-){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a;
	    for(int i=1;i<=n;i+=2){
	        if(a[i-1]=='0' && a[i]=='0'){
	            b=b+"A";
	        }else if(a[i-1]=='0' && a[i]=='1'){
	            b=b+"T";
	        }else if(a[i-1]=='1' && a[i]=='0'){
	            b=b+"C";
	        }else if(a[i-1]=='1' && a[i]=='1'){
	            b=b+"G";
	       
	        }
	         
	    }cout<<b<<endl;
	}
	return 0;
}