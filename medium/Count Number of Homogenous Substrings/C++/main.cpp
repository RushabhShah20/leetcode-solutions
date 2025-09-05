// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/?envType=problem-list-v2&envId=math
class Solution
{
public:
    int countHomogenous(string s)
    {
        int mod = 1000000007;
        int count = 1;
        vector<int> a;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                a.push_back(count);
                count = 1;
            }
        }
        a.push_back(count);
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            ans += (((long long)(a[i]) * (long long)(a[i] + 1)) / 2) % mod;
        }
        return ans;
    }
};