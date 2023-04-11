class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> st ; 
        int cnt = 0 ; 
        for (int i = 0 ; i < s.length() ; i ++)
        {
            st.push(s[i]) ; 
        }
        while (st.top() == ' ')
        {
            st.pop() ; 
        }
        while (!st.empty() && st.top() != ' ')
        {
            cnt ++ ; 
            st.pop() ; 
        }
        return cnt ; 
    }
};