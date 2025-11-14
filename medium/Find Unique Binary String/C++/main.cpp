// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        string ans(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (nums[i][i] == '0')
            {
                ans[i] = '1';
            }
            else
            {
                ans[i] = '0';
            }
        }
        return ans;
    }
};