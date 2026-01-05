// Problem: Longest Consecutive Sequence
// Link to the problem: https://leetcode.com/problems/longest-consecutive-sequence/
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        else
        {
            int ans = 0, prev = INT_MIN, count = 0;
            set<int> s;
            for (const int &num : nums)
            {
                s.insert(num);
            }
            for (const int i : s)
            {
                if (i == 1 + prev)
                {
                    count++;
                }
                else
                {
                    ans = max(ans, count + 1);
                    count = 0;
                }
                prev = i;
            }
            ans = max(ans, count + 1);
            return ans;
        }
    }
};