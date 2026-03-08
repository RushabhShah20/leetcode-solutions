// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        const int n = nums.size();
        string ans(n, '0');
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i][i] == '0' ? '1' : '0';
        }
        return ans;
    }
};