class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashbrown;
        
        for (int i = 0; i < nums.size(); i++){
            hashbrown[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++){
           int difference = target - nums[i];
           if (hashbrown.count(difference) > 0 && i != hashbrown[difference]){
                vector<int> result = {i, hashbrown[difference]};
                return result;
           }
        }
    }
};
