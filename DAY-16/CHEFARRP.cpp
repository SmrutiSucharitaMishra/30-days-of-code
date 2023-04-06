#include <iostream>
using namespace std;

int main() {

	int a;
	cin>>a;
	while(a--){
	    int n,cnt=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }

	    for(int i=0;i<n;i++){
	       	    int sum=0,pro=1;
	       for(int j=i;j<n;j++){
	            sum+=a[j];
	             pro*=a[j];
	                if(sum==pro)
	                    cnt++;
	       }
	    }
	      cout<<cnt<<endl;
	}
	return 0;
}