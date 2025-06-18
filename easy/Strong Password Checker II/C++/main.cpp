// Problem: Strong Password Checker II
// Link to the problem: https://leetcode.com/problems/strong-password-checker-ii/
class Solution
{
public:
    bool strongPasswordCheckerII(string password)
    {
        bool isLowerPresent = false, isUpperPresent = false, isDigitPresent = false, isSpecialPresent = false;
        if (password.size() < 8)
        {
            return false;
        }
        for (int i = 0; i < password.size(); i++)
        {
            if (islower(password[i]))
            {
                isLowerPresent = true;
            }
            if (isupper(password[i]))
            {
                isUpperPresent = true;
            }
            if (isdigit(password[i]))
            {
                isDigitPresent = true;
            }
            if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+')
            {
                isSpecialPresent = true;
            }
            if (i >= 1 && i <= password.size() - 1)
            {
                if (password[i] == password[i + 1] || password[i] == password[i - 1])
                {
                    return false;
                }
            }
        }
        if (isLowerPresent == false)
        {
            return false;
        }
        if (isUpperPresent == false)
        {
            return false;
        }
        if (isDigitPresent == false)
        {
            return false;
        }
        if (isSpecialPresent == false)
        {
            return false;
        }
        return true;
    }
};