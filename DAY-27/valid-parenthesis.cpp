class Solution {
public:

    bool isRightComb(char a, char b){
        if(a=='(') return b==')';
            
        else if(a=='{') return b=='}';

        else if(a=='[') return b==']';

        return false;
    }


    bool isValid(string s) {
        stack<char> stk1;

        for(int i=0;i<s.size();i++){
            if(!stk1.empty() && isRightComb(stk1.top(),s[i])){
                stk1.pop();
            }else
                stk1.push(s[i]);
        }

        return stk1.empty();
    }
};