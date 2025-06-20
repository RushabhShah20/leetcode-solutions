// Problem: Minimum Operations to Collect Elements
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-collect-elements/
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int ans = 0;
        set<int> v;
        while (nums.size() != 0)
        {
            int x = nums.back();
            nums.erase(nums.end());
            ans++;
            if (x <= k)
            {
                v.insert(x);
            }
            if (v.size() == k)
            {
                break;
            }
        }
        return ans;
    }
};