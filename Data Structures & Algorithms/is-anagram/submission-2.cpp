class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> seen;
        if (s.size() != t.size()){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            if (seen.find(s[i]) != seen.end()){
                seen[s[i]] ++;
            }
            else{
                seen[s[i]] = 1;
            }
        }
        for (int i = 0; i < t.size(); i++){
            if (seen.find(t[i]) == seen.end()){
                return false;
            }
            else{
                if (count(t.begin(), t.end(), t[i]) != seen[t[i]]){
                    return false;
                }
            }


        }
        return true;
    }
};
