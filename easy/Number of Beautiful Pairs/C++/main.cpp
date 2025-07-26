// Problem: Number of Beautiful Pairs
// Link to the problem: https://leetcode.com/problems/number-of-beautiful-pairs/
class Solution
{
public:
    int countBeautifulPairs(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                string a = to_string(nums[i]), b = to_string(nums[j]);
                int x = a.front() - '0', y = b.back() - '0';
                if (__gcd(x, y) == 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};