class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);

        auto *begin = &numbers[0];
        auto *end = &numbers[0] + numbers.size() - 1;
        while (begin < end){
            if (*begin + *end == target){
                result[0] = begin - &numbers[0] + 1;
                result[1] = end - &numbers[0] + 1;
                return result;
            }
            else if (*begin + *end < target){
                begin++;
            }
            else{
                end--;
            }
            
        }
        return result;
    }
};
