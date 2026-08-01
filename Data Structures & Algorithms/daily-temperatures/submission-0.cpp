class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> result;
        for (int i = 0; i < temperatures.size(); i++)
        {
            int count = 0;
            for (int j = i; j < temperatures.size(); j++)
            {
                int temp_i = temperatures[i];
                int temp_j = temperatures[j];
                if (temperatures[i] < temperatures[j])
                {
                    count = j - i;
                    break;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};
