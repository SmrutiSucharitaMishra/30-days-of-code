class Solution {
public:
    bool isPalindrome(int x) {
        
    int num=x;
    int temp=0;
    while(x>0)
    {
        if(temp<INT_MAX/10)
            temp=temp*10+x%10;
        x=x/10;
    }
    if(temp==num)
        return true;
    return false;

    }
};