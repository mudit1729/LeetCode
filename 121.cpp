class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minNum=INT_MAX;
        int maxDiff=INT_MIN;
        if(prices.size() == 0) return 0;
        for (auto i =0 ;i < prices.size(); i++) {
            minNum = min(minNum, prices[i]);
            maxDiff = max(maxDiff, prices[i] - minNum);
        }
        return maxDiff;
    }
};