// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        set<int> s;
        for (int num : nums)
        {
            if (num % k == 0)
            {
                s.insert(num / k);
            }
        }
        int ans = 1;
        for (int i : s)
        {
            if (ans != i)
            {
                break;
            }
            else
            {
                ans++;
            }
        }
        return ans * k;
    }
};