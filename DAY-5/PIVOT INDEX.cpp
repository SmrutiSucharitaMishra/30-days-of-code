class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int  total_sum=0;
        for(int i=0;i< nums.size();i++){
            total_sum+=nums[i];
        }
        int left_sum=0;
        for(int i=0;i<nums.size();i++)
        {
        if(i!=0) 
        left_sum+=nums[i-1];
        if(total_sum - left_sum -nums[i]== left_sum)
        return i;
        }
     return -1;
    }
   
};