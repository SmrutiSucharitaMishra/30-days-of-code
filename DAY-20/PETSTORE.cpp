#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; 
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count = 0;
        for(int i=0;i<n;i=i+2){
            if(a[i] != a[i+1]){
                count = 1;
                break;
            }
        }
        if(count)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
	
	return 0;
}