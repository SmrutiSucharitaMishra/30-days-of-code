#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int a;
    cin>>a;
    while(a--){
        int n,k,count=0;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]>k)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}