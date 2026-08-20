class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if (it != nums.end()){
            int idx = distance(nums.begin(), it);
            return idx;
        }else{
            return -1;
        }

    }
};
