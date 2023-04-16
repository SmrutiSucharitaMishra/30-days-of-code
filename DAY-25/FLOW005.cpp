#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
while(a--)
	{
	    int n,count=0;
	    cin>>n;
	    int note[]={100,50,10,5,2,1};
	    for(int i=0;i<6;i++){
	        while(n>=note[i]){
	            n=n-note[i];
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
