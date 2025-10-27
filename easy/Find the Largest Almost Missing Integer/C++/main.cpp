// Problem: Find the Largest Almost Missing Integer
// Link to the problem: https://leetcode.com/problems/find-the-largest-almost-missing-integer/
class Solution
{
public:
    int largestInteger(vector<int> &nums, int k)
    {
        map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            set<int> s(nums.begin() + i, nums.begin() + i + k);
            for (int i : s)
            {
                m[i]++;
            }
        }
        set<int> a;
        for (pair<int, int> i : m)
        {
            if (i.second == 1)
            {
                a.insert(i.first);
            }
        }
        if (a.empty())
        {
            return -1;
        }
        else
        {
            return *a.rbegin();
        }
    }
};