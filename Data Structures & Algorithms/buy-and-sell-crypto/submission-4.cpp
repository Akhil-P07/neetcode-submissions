class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_val = 0;
        int prev = 0;
        int next = 0;
        
        while (prev <= next && next < prices.size() - 1){
            if (prices[prev] <= prices[next]){
                next++;
            }else{
                prev++;
            }
            max_val = max(max_val, prices[next] - prices[prev]);
        }
        return max_val;
    }
};
