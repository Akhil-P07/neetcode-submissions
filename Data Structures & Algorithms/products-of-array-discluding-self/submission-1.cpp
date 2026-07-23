class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> return_vector(nums);   
        vector<int> left(nums.size(), 1);
        vector<int> right(nums.size(), 1);
        int product = 1;
       for (int i = 1; i < nums.size(); i++){
            product *= nums[i - 1];
            left[i] *= product;
       } 
       product = 1;
       for (int i = nums.size() - 2; i >= 0; i--){
            product *= nums[i + 1];
            right[i] = product;  
       }
       for (int i = 0; i < nums.size(); i++){
            return_vector[i] = right[i] * left[i];
       }
        return return_vector;
    }
};
