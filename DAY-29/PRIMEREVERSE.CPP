#include <algorithm>
#define ax long long

using namespace std;

int main(){
    ax t;
    cin>>t;
    for (ax i = 0; i < t; ++i) {
        int k;
        cin>>k;
        string s, d;
        cin>>s>>d;
        sort(s.begin(),s.end());
        sort(d.begin(),d.end());
        if (s==d) {
            cout<<"yes"<<endl;
        } else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}