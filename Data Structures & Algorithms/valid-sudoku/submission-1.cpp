class Solution
{
private:
    bool isSudokuVal(char c)
    {
        return '0' <= c <= '9' || c == '.';
    }

public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            set<char> checked;
            for (int j = 0; j < board.size(); j++)
            {
                // valid row
                char c = board[i][j];
                if (!isSudokuVal(c))
                {
                    return false;
                }
                else
                {
                    if (c != '.')
                    {
                        auto it = checked.find(c);
                        if (it != checked.end())
                        {
                            return false;
                        }
                        else
                        {
                            checked.insert(c);
                        }
                    }
                }
            }
        }
        // valid column
        for (int i = 0; i < board.size(); i++)
        {
            set<char> checked;
            for (int j = 0; j < board.size(); j++)
            {
                char c = board[j][i];
                if (!isSudokuVal(c))
                {
                    return false;
                }
                else
                {
                    if (c != '.')
                    {
                        auto it = checked.find(c);
                        if (it != checked.end())
                        {
                            return false;
                        }
                        else
                        {
                            checked.insert(c);
                        }
                    }
                }
            }
        }
        // valid sub-grids
        for (int l = 0; l < 3; l++)
        {

            for (int k = 0; k < 3; k++)
            {
                set<char> checked;
                for (int i = 3 * l; i < 3 + 3 * l; i++)
                {
                    for (int j = 3 * k; j < 3 + 3 * k; j++)
                    {
                        char c = board[i][j];
                        if (!isSudokuVal(c))
                        {
                            return false;
                        }
                        else
                        {
                            if (c != '.')
                            {
                                auto it = checked.find(c);
                                if (it != checked.end())
                                {
                                    return false;
                                }
                                else
                                {
                                    checked.insert(c);
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};