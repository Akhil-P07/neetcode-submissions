class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> return_list;
        for (int i = 0; i < nums.size(); i++){
            auto it = find(nums.begin(), nums.end(),target - nums[i]);
            int it_index = distance(nums.begin(), it);
            if ( it != nums.end() && it_index != i){
                return_list.push_back(i);
                return_list.push_back(it_index);
                sort(return_list.begin(), return_list.end());
                return return_list;
            }
        }
    }
};
