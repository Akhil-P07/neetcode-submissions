class Solution {
private: 
    bool isAlphaNum(char c){
        if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9')){
            return true;
        }
        else {
            return false;
        }
    }
    bool isAlpha(char c){
        if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')){
            return true;
        }
        else{
            return false;
        }
    }
public:
    bool isPalindrome(string s)
{
    char *begin = s.data();
    char *end = s.data() + s.size() - 1;

    while (begin < end)
    {

        if (!isAlphaNum(*begin))
        {
            begin++;
        }
        else if (!isAlphaNum(*end))
        {
            end--;
        }
        else
        {
            if (isAlpha(*begin) && isAlpha(*end)){
                if (*begin != *end && !((*begin - 32 == *end) || (*begin == *end - 32)))
                {
                    return false;
                }
            }else{
                if (*begin != *end){
                return false;
                }
            }

            begin++;
            end--;
        }
    }
    return true;
}
};
