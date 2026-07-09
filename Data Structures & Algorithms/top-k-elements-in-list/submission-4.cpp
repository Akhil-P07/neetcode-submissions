class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> counter;
        vector<int> return_list;
        for(auto t = nums.begin(); t != nums.end(); t++){
            counter[*t]++;
        }

        for(int i = 0; i < k; i++){
            auto it = max_element(counter.begin(), counter.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.second < b.second;
            });
            return_list.push_back(it -> first);
            counter.erase(it);
            
        }
        return return_list;
    }
};
