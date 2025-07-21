// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
class Solution
{
public:
    vector<int> toBinary(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            ans.push_back(n % 2);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int binaryGap(int n)
    {
        int ans = 0;
        vector<int> digits = toBinary(n);
        vector<int> indices;
        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i] == 1)
            {
                indices.push_back(i);
            }
        }
        for (int i = 0; i < indices.size() - 1; i++)
        {
            ans = max(indices[i + 1] - indices[i], ans);
        }
        return ans;
    }
};