// Problem: Four Divisors
// Link to the problem: https://leetcode.com/problems/four-divisors/
class Solution
{
public:
    vector<int> factors(int n)
    {
        vector<int> ans;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ans.push_back(i);
                if (n / i != i)
                {
                    ans.push_back(n / i);
                }
            }
        }
        return ans;
    }
    int sum(vector<int> &arr)
    {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            ans += arr[i];
        }
        return ans;
    }
    int sumFourDivisors(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> x = factors(nums[i]);
            if (x.size() == 4)
            {
                int y = sum(x);
                ans += y;
            }
        }
        return ans;
    }
};