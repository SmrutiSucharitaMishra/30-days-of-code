#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
        cin >> n;
  
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            ans ^= t;
        }
        cout << ans << endl;
	}
	return 0;
}
