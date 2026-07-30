class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s;
        for (string t : tokens)
        {

            if (t == "+" || t == "*" || t == "-" || t == "/")
            {
                string op = t;
                int result = 0;

                int num2 = s.top();
                s.pop();
                int num1 = s.top();
                s.pop();

                if (op == "+")
                {
                    result = num1 + num2;
                }
                else if (op == "*")
                {
                    result = num1 * num2;
                }
                else if (op == "-")
                {
                    result = num1 - num2;
                }
                else
                {
                    result = num1 / num2;
                }

                s.push(result);
            }
            else
            {
                s.push(stoi(t));
            }
        }
        return s.top();
    }
};