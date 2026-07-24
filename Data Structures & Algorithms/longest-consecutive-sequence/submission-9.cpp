class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> n(nums.begin(), nums.end());
        if (n.size() == 0){
            return 0;
        }else if(n.size() == 1){
            return 1;
        }
        
        optional<int> prev;
        int count = 1;
        int largest_count = 1;

            
        for (auto it : n)
        {

            if (prev.has_value())
            {
                if (it != prev.value() + 1)
                {
                    count = 1;
                }
                else
                {
                    count++;
                    if (count == 1){
                        count++;
                    }
                    if (largest_count < count)
                    {
                        largest_count = count;
                    }
                }
            }
            prev = it;
        }
        return largest_count;
    }
};