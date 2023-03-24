#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
	    cin>>n;
	    string s;
	    int sum1=0,sum2=0;
	    while(n--){
	        cin>>s;
	        if(s[0]=='S')
	        sum1+=1;
	        else
	        sum2+=1;
	    }
	     cout<<sum1<<" "<<sum2<<endl;

	}
	return 0;
}