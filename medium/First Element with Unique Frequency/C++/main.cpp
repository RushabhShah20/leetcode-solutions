// Problem: First Element with Unique Frequency
// Link to the problem: https://leetcode.com/problems/first-element-with-unique-frequency/
class Solution
{
public:
    int firstUniqueFreq(vector<int> &nums)
    {
        unordered_map<int, int> m, f;
        for (const int num : nums)
        {
            m[num]++;
        }
        for (const pair<int, int> i : m)
        {
            f[i.second]++;
        }
        for (const int num : nums)
        {
            if (f[m[num]] == 1)
            {
                return num;
            }
        }
        return -1;
    }
};