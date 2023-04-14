#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int a;
cin>>a;
while(a--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[(n+k)/2]<<endl;
}
	return 0;
}