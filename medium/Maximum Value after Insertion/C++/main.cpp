// Problem: Maximum Value after Insertion
// Link to the problem: https://leetcode.com/problems/maximum-value-after-insertion/
class Solution
{
public:
    string maxValue(string n, int x)
    {
        int y = n.size();
        if (n.front() == '-')
        {
            for (int i = 1; i < n.size(); i++)
            {
                if (n[i] - '0' > x)
                {
                    n.insert(n.begin() + i, x + '0');
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n.size(); i++)
            {
                if (n[i] - '0' < x)
                {
                    n.insert(n.begin() + i, x + '0');
                    break;
                }
            }
        }
        if (n.size() == y)
        {
            if (n.front() == '-')
            {
                n.append(1, x + '0');
            }
            else
            {
                if (n.front() - '0' >= x)
                {
                    n.append(1, x + '0');
                }
                else
                {
                    n.insert(n.begin(), x + '0');
                }
            }
        }
        return n;
    }
};