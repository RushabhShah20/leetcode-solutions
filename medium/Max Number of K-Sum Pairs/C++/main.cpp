// Problem: Max Number of K-Sum Pairs
// Link to the problem: https://leetcode.com/problems/max-number-of-k-sum-pairs/
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        map<int, int> x;
        for (int num : nums)
        {
            x[num]++;
        }
        int ans = 0;
        for (pair<int, int> i : x)
        {
            if (i.first == k - i.first)
            {
                ans += i.second / 2;
            }
            else
            {
                if (x[k - i.first] != 0)
                {
                    int y = min(x[i.first], x[k - i.first]);
                    ans += y;
                    x[i.first] -= y;
                    x[k - i.first] -= y;
                }
            }
        }
        return ans;
    }
};