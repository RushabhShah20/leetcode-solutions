// Problem: Maximum Difference by Remapping a Digit
// Link to the problem: https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/
class Solution
{
public:
    vector<int> digits(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            ans.push_back(n % 10);
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int combine(vector<int> &digits)
    {
        int ans = 0;
        reverse(digits.begin(), digits.end());
        for (int i = 0; i < digits.size(); i++)
        {
            ans += (pow(10, i) * digits[i]);
        }
        return ans;
    }
    int minMaxDifference(int num)
    {
        vector<int> numDigits = digits(num);
        int x = 0, y = 0;
        for (int i = 0; i < numDigits.size(); i++)
        {
            if (numDigits[i] != 0)
            {
                x = numDigits[i];
                break;
            }
        }
        for (int i = 0; i < numDigits.size(); i++)
        {
            if (numDigits[i] != 9)
            {
                y = numDigits[i];
                break;
            }
        }
        vector<int> minimum = numDigits, maximum = numDigits;
        for (int i = 0; i < minimum.size(); i++)
        {
            if (minimum[i] == x)
            {
                minimum[i] = 0;
            }
        }
        for (int i = 0; i < maximum.size(); i++)
        {
            if (maximum[i] == y)
            {
                maximum[i] = 9;
            }
        }
        int a = combine(maximum), b = combine(minimum);
        return a - b;
    }
};