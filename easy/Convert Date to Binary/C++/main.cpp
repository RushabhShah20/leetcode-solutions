// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
class Solution
{
public:
    unsigned long long int toBinary(unsigned long int n)
    {
        unsigned long long int ans = 0;
        unsigned long long int i = 1;
        while (n > 0)
        {
            unsigned long long int rem = n % 2;
            ans += rem * i;
            n /= 2;
            i *= 10;
        }
        return ans;
    }
    string convertDateToBinary(string date)
    {
        string yyyy = date.substr(0, 4);
        string mm = date.substr(5, 2);
        string dd = date.substr(8, 2);
        unsigned long long int y = toBinary(stoi(yyyy));
        unsigned long long int m = toBinary(stoi(mm));
        unsigned long long int d = toBinary(stoi(dd));
        string ans = to_string(y) + "-" + to_string(m) + "-" + to_string(d);
        return ans;
    }
};