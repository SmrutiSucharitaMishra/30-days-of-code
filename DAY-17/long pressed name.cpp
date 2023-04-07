class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=0;
        for (int t=0;t<typed.size();t++) 
        {
            if (name[n]==typed[t]) 
            {
                n++;continue;
            } 
            if (t==0) 
            {
                return false;
            } 
            if (typed[t] == typed[t-1]) 
            {
                continue;
            } 
            return false;
        }
        return n==name.size(); 
    }
};