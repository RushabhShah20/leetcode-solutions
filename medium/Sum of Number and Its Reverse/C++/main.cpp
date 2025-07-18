// Problem: Sum of Number and Its Reverse
// Link to the problem: https://leetcode.com/problems/sum-of-number-and-its-reverse/
class Solution
{
public:
    bool sumOfNumberAndReverse(int num)
    {
        for (int i = 0; i <= num; i++)
        {
            int x = i;
            string a = to_string(x);
            string b = a;
            reverse(b.begin(), b.end());
            int y = stoi(b);
            if (x + y == num)
            {
                return true;
            }
        }
        return false;
    }
};