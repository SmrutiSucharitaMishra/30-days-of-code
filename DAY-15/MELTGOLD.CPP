#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a; 
	while(a--){
	    int x,y;
	    cin>>x>>y;
	    int ans=0;
	    int sum =y;
	    int i=1;
	    for(i;i<x;i++){
	        if(sum<x)
	        sum+=i;
	        if(sum>=x){
	            break;
	        }
	    }