// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
class Solution
{
public:
    vector<int> replaceNonCoprimes(vector<int> &nums)
    {
        vector<int> ans;
        for (int num : nums)
        {
            ans.push_back(num);
            while (ans.size() > 1)
            {
                int a = ans.back();
                int b = ans[ans.size() - 2];
                int g = gcd(a, b);
                if (g > 1)
                {
                    ans.pop_back();
                    ans.pop_back();
                    long long lcm = ((long long)(a) * (long long)(b) / (long long)(g));
                    ans.push_back((int)(lcm));
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};