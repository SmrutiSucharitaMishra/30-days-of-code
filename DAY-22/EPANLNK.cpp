#include <bits/stdc++.h>
using namespace std;

int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     string str;
     cin>>str;

     int total = 0;
     for(int i =0 ; i<str.length() ; i++ ){
        total = (total*10+(str[i] - '0')) % 20;
     }
     std::cout << total << std::endl;

 }
 return 0;
}