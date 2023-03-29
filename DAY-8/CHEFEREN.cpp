#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n,a,b;
	    cin>>n>>a>>b;
	   
	   int z =0;
	    for(int i=1;i<=n;i++){

	    if(i%2==0)
	    {
	        z+=a;
        }
        else 
        {
      z+=b;
        }
    }
	  cout<<z<<endl;  
	    
	}
	return 0;
}
