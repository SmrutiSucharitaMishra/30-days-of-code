#include <iostream>
using namespace std;


int main() {
	int a;
	cin>>a;
	while(a--){
	    int n,count=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        count=count+a[i];
	    }
	    if(count%2!=0){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}