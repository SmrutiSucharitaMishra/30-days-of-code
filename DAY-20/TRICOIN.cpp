#include <iostream>
using namespace std;

int main() {
	
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	    int sum=0,count=0,i=0;
	    while(n>sum){
	        i++;
	        sum+=i;
	        count++;
	    }
	    if(sum==n){
	        cout<<count<<endl;
	    }else{
	        cout<<count-1<<endl;
	    }
	}
	return 0;
}