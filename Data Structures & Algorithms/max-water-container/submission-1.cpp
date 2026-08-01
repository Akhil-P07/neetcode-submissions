class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int best = -1;
        int height = -1;
        int tower1, tower2;
        while (left < right){
            height = min(heights[left], heights[right]);
            best = max(best, height * (right - left));
            if (heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return best;
    } 
};
