// Problem: Complex Number Multiplication
// Link to the problem: https://leetcode.com/problems/complex-number-multiplication/
class Solution
{
public:
    pair<int, int> solve(int real_num1, int imag_num1, int real_num2, int imag_num2)
    {
        return make_pair(((real_num1 * real_num2) + (-1 * imag_num1 * imag_num2)), ((real_num1 * imag_num2) + (real_num2 * imag_num1)));
    }
    pair<int, int> parseComplexNumber(const string &complexStr)
    {
        int realPart = 0;
        int imagPart = 0;
        string currentNum = "";
        bool isNegative = false;
        bool parsingImagPart = false;

        for (size_t i = 0; i < complexStr.length(); i++)
        {
            char c = complexStr[i];
            if (c == '-' && currentNum.empty())
            {
                isNegative = true;
                continue;
            }
            if (c == '+' || c == '-')
            {
                if (!currentNum.empty())
                {
                    realPart = stoi(currentNum) * (isNegative ? -1 : 1);
                    currentNum = "";
                    isNegative = (c == '-');
                    parsingImagPart = true;
                    continue;
                }
            }
            if (c == 'i')
            {
                continue;
            }
            if (!std::isdigit(c))
            {
                continue;
            }
            currentNum += c;
        }
        if (!currentNum.empty() && parsingImagPart)
        {
            imagPart = stoi(currentNum) * (isNegative ? -1 : 1);
        }
        else if (!currentNum.empty())
        {
            realPart = stoi(currentNum) * (isNegative ? -1 : 1);
        }

        return make_pair(realPart, imagPart);
    }
    string complexNumberMultiply(string num1, string num2)
    {
        int real_num1, imag_num1, real_num2, imag_num2;
        pair<int, int> num1_str = parseComplexNumber(num1), num2_str = parseComplexNumber(num2);
        real_num1 = num1_str.first;
        imag_num1 = num1_str.second;
        real_num2 = num2_str.first;
        imag_num2 = num2_str.second;
        pair<int, int> ans = solve(real_num1, imag_num1, real_num2, imag_num2);
        return to_string(ans.first) + "+" + to_string(ans.second) + "i";
    }
};