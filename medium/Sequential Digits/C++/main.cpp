// Problem: Sequential Digits
// Link to the problem: https://leetcode.com/problems/sequential-digits/
class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        const string s = "123456789";
        vector<int> ans;
        for (int j = 2; j <= 9; j++)
        {
            for (int i = 0; i <= 9 - j; i++)
            {
                const int x = stoi(s.substr(i, j));
                if (x >= low && x <= high)
                {
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};