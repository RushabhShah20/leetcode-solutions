// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &numsDivide)
    {
        int x = numsDivide[0];
        for (int i = 1; i < numsDivide.size(); i++)
        {
            x = __gcd(x, numsDivide[i]);
        }
        int ans = 0;
        map<int, int> y;
        for (int i = 0; i < nums.size(); i++)
        {
            y[nums[i]]++;
        }
        for (auto i : y)
        {
            if (x % i.first == 0)
            {
                break;
            }
            else
            {
                ans += i.second;
            }
        }
        if (ans == nums.size())
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};