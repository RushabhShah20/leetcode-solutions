// Problem: Minimum Number of Operations to Make Elements in Array Distinct
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int ans = 0;
        while (nums.size() > 0)
        {
            set<int> s(nums.begin(), nums.end());
            if (s.size() == nums.size())
            {
                break;
            }
            else
            {
                if (nums.size() < 3)
                {
                    nums.erase(nums.begin(), nums.end());
                }
                else
                {
                    nums.erase(nums.begin(), nums.begin() + 3);
                }
            }
            ans++;
        }
        return ans;
    }
};