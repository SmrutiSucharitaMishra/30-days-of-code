class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort (strs.begin(),strs.end());
        int a=strs.size();
        string m=strs[0];
        string n=strs[a-1];
        string ans="";
        for(int i=0;i<m.size();i++){
            if(m[i]==n[i])
            ans+=m[i];
            else break;
            
        }

        return ans;
    }
};