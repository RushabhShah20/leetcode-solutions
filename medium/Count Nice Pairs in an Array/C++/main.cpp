// Problem: Count Nice Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-nice-pairs-in-an-array/
class Solution
{
public:
    int countNicePairs(vector<int> &nums)
    {
        map<int, int> m;
        for (int num : nums)
        {
            string x = to_string(num);
            reverse(x.begin(), x.end());
            int y = stoi(x);
            m[num - y]++;
        }
        int ans = 0, mod = 1e9 + 7;
        for (pair<int, int> i : m)
        {
            ans = (ans + ((long long)(i.second) * (long long)(i.second - 1) / 2)) % mod;
        }
        return ans;
    }
};