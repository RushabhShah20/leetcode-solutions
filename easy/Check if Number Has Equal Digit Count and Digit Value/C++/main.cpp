// Problem: Check if Number Has Equal Digit Count and Digit Value
// Link to the problem: https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/
class Solution
{
public:
    bool digitCount(string num)
    {
        return num == "1210" || num == "2020" || num == "21200" || num == "3211000" || num == "42101000" || num == "521001000" || num == "6210001000";
    }
};