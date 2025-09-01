// Problem: Optimal Partition of String
// Link to the problem: https://leetcode.com/problems/optimal-partition-of-string/
class Solution
{
public:
    int partitionString(string s)
    {
        int ans = 1, index = 0;
        for (int i = 1; i < s.size(); i++)
        {
            string x = s.substr(index, (i - index));
            if (x.find(s[i]) != x.npos)
            {
                ans++;
                index = i;
            }
        }
        return ans;
    }
};