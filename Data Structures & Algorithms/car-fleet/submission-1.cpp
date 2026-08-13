class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        int fleets;
        if (position.size() > 0)
        {
            fleets = 1;
        }
        else
        {
            return 0;
        }
        stack<double> carTimes;
        map<int, int> position_index;

        for (int i = 0; i < position.size(); i++)
        {
            position_index[position[i]] = i;
        }

        sort(position.begin(), position.end());

        for (int i = 0; i < position.size(); i++)
        {
            carTimes.push((double)(target - position[i]) / speed[position_index[position[i]]]);
        }
        double prev = carTimes.top();
        carTimes.pop();
        for (int i = 1; carTimes.size() > 0; i++)
        {
            if (prev < carTimes.top())
            {
                fleets++;
                prev = carTimes.top();
            }
            else
            {
                prev = max(prev, carTimes.top());
            }
            carTimes.pop();
        }

        return fleets;
    }
};
