// Problem: Add Binary
// Link to the problem: https://leetcode.com/problems/add-binary/
class Solution
{
public:
    string addBinary(string a, string b)
    {
        const int m = a.length(), n = b.length();
        string ans;
        int i = m - 1, j = n - 1;
        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            int sum = 0;
            if (i >= 0 && a[i] == '1')
            {
                sum++;
            }
            if (j >= 0 && b[j] == '1')
            {
                sum++;
            }
            sum += carry;
            if (sum >= 2)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            ans.insert(0, 1, ((sum % 2) + '0'));
            i--;
            j--;
        }
        if (carry == 1)
        {
            ans.insert(0, 1, '1');
        }
        return ans;
    }
};