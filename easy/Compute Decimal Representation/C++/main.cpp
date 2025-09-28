// Problem: Compute Decimal Representation
// Link to the problem: https://leetcode.com/problems/compute-decimal-representation/
class Solution
{
public:
    vector<int> decimalRepresentation(int n)
    {
        vector<int> ans;
        int i = 0;
        while (n > 0)
        {
            int x = n % 10 * pow(10, i);
            if (x != 0)
            {
                ans.push_back(x);
            }
            i++;
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};