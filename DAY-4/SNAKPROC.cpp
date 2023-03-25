#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    
	    int n;
	    cin>>n;
	    string x;
	    cin>>x;
	    string y;
	    for(int i=0;i<n;i++)
	    {
	        if(x[i]!='.')
	        {
	            y+=x[i];
	        }
	    }
	    bool ans = true;
	    if(y.length() %2!=0){
	      ans = false;
	    }
	     else{
	         for(int i=0; i<y.length(); i++)
	         {
	            if(i%2==0)
	            {
	                if(y[i]=='T')
	                  ans=false;
	            }
	            else
	            {
	                if(y[i]=='H')
	                 ans=false;
	            }
	         }
	     }
	     if(ans)
	       cout<<"Valid"<<endl;
	      else
	        cout<<"Invalid"<<endl;
	      
	    
	}
	return 0;
}