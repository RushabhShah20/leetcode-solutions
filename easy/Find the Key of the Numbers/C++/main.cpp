// Problem: Find the Key of the Numbers
// Link to the problem: https://leetcode.com/problems/find-the-key-of-the-numbers/
class Solution
{
public:
    int numberOfDigits(int num)
    {
        if (num == 0)
        {
            return 1;
        }
        int ans = 0;
        while (num > 0)
        {
            ans++;
            num /= 10;
        }
        return ans;
    }
    string convert(int n)
    {
        string ans = "";
        int x = numberOfDigits(n);
        ans.append(4 - x, '0');
        ans.append(to_string(n));
        return ans;
    }
    int generateKey(int num1, int num2, int num3)
    {
        string x = convert(num1), y = convert(num2), z = convert(num3);
        string a = "0000";
        a[0] = (min({x[0] - '0', y[0] - '0', z[0] - '0'})) + '0';
        a[1] = (min({x[1] - '0', y[1] - '0', z[1] - '0'})) + '0';
        a[2] = (min({x[2] - '0', y[2] - '0', z[2] - '0'})) + '0';
        a[3] = (min({x[3] - '0', y[3] - '0', z[3] - '0'})) + '0';
        int ans = stoi(a);
        return ans;
    }
};