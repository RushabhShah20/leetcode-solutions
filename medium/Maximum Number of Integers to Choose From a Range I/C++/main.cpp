// Problem: Maximum Number of Integers to Choose From a Range I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/
class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        set<int> s;
        for (int i : banned)
        {
            if (i <= n)
            {
                s.insert(i);
            }
        }
        int ans = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s.count(i))
            {
                continue;
            }
            else
            {
                sum += i;
                if (sum > maxSum)
                {
                    break;
                }
                else
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};