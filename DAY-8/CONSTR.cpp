#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int x=1;
        char y=s[0];
        string ans="";
        for(int i=1;i<n;i++){
             
             if(y==s[i])
            { 
                x++;
            }
            else{
                if(x%2==0)
                {
                    ans+=y;
                    ans+=y;
                    
                }
                else
                {
                    ans+=y;
                    
                }
            
            y=s[i];
            x=1;
            }
       
        }
        if(x%2==0)
               { 
                   ans+=y;
                   ans+=y;
                   
               }
            else
            {
                ans+=y;
                
            }
    
    cout<<ans<<endl;
        }
            return 0;
    }