// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
class Solution
{
public:
    string digitSum(string s, int k)
    {
        while (s.size() > k)
        {
            vector<string> substrings;
            for (int i = 0; i < s.size(); i += k)
            {
                substrings.push_back(s.substr(i, k));
            }
            for (int i = 0; i < substrings.size(); i++)
            {
                int sum = 0;
                for (int j = 0; j < substrings[i].size(); j++)
                {
                    sum += (substrings[i][j] - '0');
                }
                substrings[i] = to_string(sum);
            }
            string ans = "";
            for (int i = 0; i < substrings.size(); i++)
            {
                ans += substrings[i];
            }
            s = ans;
        }
        return s;
    }
};