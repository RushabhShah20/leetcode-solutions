// Problem: Number of Steps to Reduce a Number in Binary Representation to One
// Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
class Solution
{
public:
    string addOne(string s)
    {
        int n = s.length();
        int carry = 1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                carry = 0;
                break;
            }
            else
            {
                s[i] = '0';
                carry = 1;
            }
        }
        if (carry == 1)
        {
            s.insert(0, "1");
        }
        return s;
    }
    string divideTwo(string s)
    {
        if (s.empty())
        {
            return "";
        }
        else
        {
            s.pop_back();
            return s;
        }
    }
    int numSteps(string s)
    {
        int ans = 0;
        while (s != "1")
        {
            if (s.back() == '0')
            {
                s = divideTwo(s);
            }
            else
            {
                s = addOne(s);
            }
            ans++;
        }
        return ans;
    }
};