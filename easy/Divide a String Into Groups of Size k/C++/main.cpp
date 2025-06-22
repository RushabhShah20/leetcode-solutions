// Problem: Divide a String Into Groups of Size k
// Link to the problem: https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        int x = s.size() % k;
        if (x != 0)
        {
            s.insert(s.end(), k - x, fill);
        }
        vector<string> ans(s.size() / k);
        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = s.substr(i * k, k);
        }
        return ans;
    }
};