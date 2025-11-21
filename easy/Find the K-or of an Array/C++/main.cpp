// Problem: Find the K-or of an Array
// Link to the problem: https://leetcode.com/problems/find-the-k-or-of-an-array/
class Solution
{
public:
    int findKOr(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            bitset<32> x(nums[i]);
            a[i] = x.to_string();
        }
        string x(32, '0');
        for (int i = 0; i < 32; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == '1')
                {
                    count++;
                }
            }
            if (count >= k)
            {
                x[i] = '1';
            }
            else
            {
                x[i] = '0';
            }
        }
        int ans = stoi(x, nullptr, 2);
        return ans;
    }
};