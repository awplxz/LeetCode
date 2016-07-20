class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0 || n == 1)
            return 0;
        int maxLen = 0;
        int minPrice = INT_MAX;
        for(int i = 0;i<n;i++){
            minPrice = min(minPrice,prices[i]);
            maxLen = max(maxLen,prices[i]-minPrice);
        }
        return maxLen;
    }
};