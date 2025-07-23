// Problem: Hash Divided String
// Link to the problem: https://leetcode.com/problems/hash-divided-string/
class Solution
{
public:
    string stringHash(string s, int k)
    {
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % k == 0)
            {
                string x = s.substr(i, k);
                int sum = 0;
                for (int j = 0; j < x.size(); j++)
                {
                    sum += x[j] - 'a';
                }
                ans.push_back((sum % 26) + 'a');
            }
        }
        return ans;
    }
};