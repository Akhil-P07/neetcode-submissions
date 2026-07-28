class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        unordered_map<int,int> hashbrown;
        for (int i = 0; i < nums.size(); i++){
            hashbrown[nums[i]] = i;
        }
        for (int i = 0; i<nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j){
                    int val1 = nums[i];
                    int val2 = nums[j];
                    if(hashbrown.count(-val1-val2) && hashbrown[-val1-val2] != i && hashbrown[-val1-val2] != j){
                        vector<int> temp = {val1, val2, -val1-val2};
                        sort(temp.begin(), temp.end());
                        result.insert(temp);
                        
                    }
                }


            }
            
        }
        vector<vector<int>> result1(result.begin(), result.end());
        return result1;
    }
};
