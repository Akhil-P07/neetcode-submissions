class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);
        for(int i = 0; i< numbers.size(); i++){
            result[0] = i + 1;
            auto it = find(numbers.begin(), numbers.end(), target - numbers[i]);
            if (it != numbers.end()){
                result[1] = distance(numbers.begin(), it) + 1;
                return result;
            }
        }
        
    }
};
