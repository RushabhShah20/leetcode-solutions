// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
class Solution
{
public:
    vector<int> split(int num)
    {
        vector<int> result;
        while (num > 0)
        {
            result.push_back(num % 10);
            num /= 10;
        }
        return result;
    }
    int maxProduct(int n)
    {
        vector<int> digits = split(n);
        sort(digits.begin(), digits.end());
        return digits[digits.size() - 1] * digits[digits.size() - 2];
    }
};