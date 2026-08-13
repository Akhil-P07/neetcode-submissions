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
        map<int, int> position_speed;

        for (int i = 0; i < position.size(); i++)
        {
            position_speed[position[i]] = speed[i];
        }

        sort(position.begin(), position.end());

        for (int i = 0; i < position.size(); i++)
        {
            carTimes.push((double)(target - position[i]) / position_speed[position[i]]);
        }
        double prev = carTimes.top();
        carTimes.pop();
        for (int i = 1; carTimes.size() > 0; i++)
        {
            if (prev < carTimes.top())
            {
                fleets++;
            }

            prev = max(prev, carTimes.top());
            carTimes.pop();
        }

        return fleets;
    }
};