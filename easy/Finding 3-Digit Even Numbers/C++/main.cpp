// Problem: Finding 3-Digit Even Numbers
// Link to the problem: https://leetcode.com/problems/finding-3-digit-even-numbers/
class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        const int n = digits.size();
        vector<int> a(10);
        for (int i = 0; i < n; i++)
        {
            a[digits[i]]++;
        }
        vector<int> ans;
        for (int i = 100; i <= 998; i += 2)
        {
            vector<int> b(10);
            b[i / 100]++;
            b[(i / 10) % 10]++;
            b[i % 10]++;
            bool x = true;
            for (int j = 0; j < 10; j++)
            {
                if (b[j] > a[j])
                {
                    x = false;
                    break;
                }
            }
            if (x)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};