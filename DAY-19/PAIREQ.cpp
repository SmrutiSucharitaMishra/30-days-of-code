#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	int max=0;
	for(int i=0;i<n;i++){
	    int count=0;
	    for(int j=i;j<n;j++){
	        if(a[i]==a[j])
	            count++;
	    }
	    if(max<count)
	    max=count;
	}
	cout<<(n-max)<<endl;
	}
	return 0;
}
