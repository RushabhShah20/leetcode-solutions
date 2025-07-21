// Problem: Add Strings
// Link to the problem: https://leetcode.com/problems/add-strings/
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string ans = "";
        int carry = 0;
        for (int i = 0; i < min(num1.size(), num2.size()); i++)
        {
            int x = num1[i] - '0';
            int y = num2[i] - '0';
            ans.push_back(((x + y + carry) % 10) + '0');
            carry = (x + y + carry) / 10;
        }
        for (int i = min(num1.size(), num2.size()); i < max(num1.size(), num2.size()); i++)
        {
            if (num1.size() > num2.size())
            {
                int x = num1[i] - '0';
                ans.push_back(((x + carry) % 10) + '0');
                carry = ((x + carry) / 10);
            }
            else if (num1.size() < num2.size())
            {
                int y = num2[i] - '0';
                ans.push_back(((y + carry) % 10) + '0');
                carry = ((y + carry) / 10);
            }
        }
        if (carry == 1)
        {
            ans.push_back(carry + '0');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};