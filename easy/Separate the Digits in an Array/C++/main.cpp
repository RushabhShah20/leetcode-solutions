// Problem: Separate the Digits in an Array
// Link to the problem: https://leetcode.com/problems/separate-the-digits-in-an-array/
class Solution
{
public:
    vector<int> digits(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            ans.push_back(n % 10);
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> x = digits(nums[i]);
            ans.insert(ans.end(), x.begin(), x.end());
        }
        return ans;
    }
};