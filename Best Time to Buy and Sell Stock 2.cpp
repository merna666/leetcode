class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max =0;
        for(unsigned int i = 1 ;i< prices.size(); i++){
     if(prices[i]>prices[i-1])
            max+= prices[i]-prices[i-1];
            }
        return max;
    }
};