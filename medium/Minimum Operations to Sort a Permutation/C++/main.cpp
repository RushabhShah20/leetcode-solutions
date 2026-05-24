// Problem: Minimum Operations to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        const int n = nums.size();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                x++;
            }
            if (nums[i] < nums[(i + 1) % n])
            {
                y++;
            }
        }
        int a = -1, b = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                a = i;
                break;
            }
        }
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                b = i;
                break;
            }
        }
        b++;
        const int c = a == 0 ? 0 : min(a, b + 2), d = min(b, a + 2);
        int ans;
        if (x <= 1 && y <= 1)
        {
            ans = min(c, d);
        }
        else if (x <= 1 && y > 1)
        {
            ans = c;
        }
        else if (x > 1 && y <= 1)
        {
            ans = d;
        }
        else
        {
            ans = -1;
        }
        return ans;
    }
};