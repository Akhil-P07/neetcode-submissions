class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> groups;
        vector<vector<string>> return_vector;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            groups[s].push_back(strs[i]);
        }
        for (auto row: groups){
            return_vector.push_back(row.second);
        }
        return return_vector;
    }
};
