class Solution {
public:
    bool isValid(string s) {
        map<char,char> pairs = {{'(',')'}, {'{','}'}, {'[',']'}};
        stack<char> chars;
        if (s.size() % 2 != 0){
            return false;
        }
        
        for(int i = 0; i < s.size(); i++){
            if (!chars.empty()){
                if (pairs[chars.top()] == s[i]){
                    chars.pop();
                }
                else if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                    chars.push(s[i]);
                }
                else{
                    return false;
                }
            }
            else{
                chars.push(s[i]);
            }

            
        }
        if (chars.empty()){
            return true;
        }else{
            return false;
        }
    }
};
