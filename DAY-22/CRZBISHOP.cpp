#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      if(n<=2)
      {
          cout<<0;
      }
      else
      {
          if(n%2==1)
          {
              cout<<(3*(n/2))-1;

          }
          else
          {
              cout<<(3*(n/2))-3;

          }
      }
      cout<<endl;
  }
  return 0;
}