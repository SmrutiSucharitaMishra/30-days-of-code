class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int i = 0 , j = 1;
        int maxprofit = 0;
        int profit = 0;
        while (j < prices.size()){
            if(prices[i] < prices[j]){
                profit = prices[j] - prices[i];
                maxprofit = max(maxprofit,profit);
            }
            else{
                i = j;
            }
            j++;
        }
        return maxprofit;
   
    }
 
};