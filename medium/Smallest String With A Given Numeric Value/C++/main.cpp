// Problem: Smallest String With A Given Numeric Value
// Link to the problem: https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/
class Solution
{
public:
    string getSmallestString(int n, int k)
    {
        vector<int> a(n, 1);
        k -= n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (k > 0)
            {
                if (k > 25)
                {
                    a[i] += 25;
                    k -= 25;
                }
                else
                {
                    a[i] += k;
                    k = 0;
                    break;
                }
            }
        }
        string ans = "";
        for (int i = 0; i < a.size(); i++)
        {
            ans.push_back((a[i] - 1) + 'a');
        }
        return ans;
    }
};