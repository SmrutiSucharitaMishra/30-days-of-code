#include <iostream>
using namespace std;

int main() {
    long n;
    cin>>n;
    n=n%6;
    if(n==0|| n==1|| n==3) 
    cout<<"yes";
    else 
    cout<<"no";
	return 0;
}
