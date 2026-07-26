class MinStack {
public:
    vector<int> min;
    vector<int> s;
    MinStack()
    {
        vector<int> s = {};
        vector<int> min = {};
    }

    void push(int val)
    {
        s.push_back(val);
        if (min.empty() || min.back() > val)
        {
            min.push_back(val);
        }
        else
        {
            min.push_back(min.back());
        }
    }

    void pop()
    {

        min.pop_back();
        s.pop_back();
    }

    int top()
    {
        return s.back();
    }

    int getMin()
    {
        return min.back();
    }
};
