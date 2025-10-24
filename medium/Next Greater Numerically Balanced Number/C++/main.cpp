// Problem: Next Greater Numerically Balanced Number
// Link to the problem: https://leetcode.com/problems/next-greater-numerically-balanced-number/
class Solution
{
public:
    void generateNumbers(vector<int> &digits, string currentNumber, set<int> &result)
    {
        if (digits.empty())
        {
            if (!currentNumber.empty())
            {
                result.insert(stoi(currentNumber));
            }
            return;
        }
        for (size_t i = 0; i < digits.size(); ++i)
        {
            int digit = digits[i];
            vector<int> remainingDigits;
            for (size_t j = 0; j < digits.size(); ++j)
            {
                if (i != j)
                {
                    remainingDigits.push_back(digits[j]);
                }
            }
            generateNumbers(remainingDigits, currentNumber + to_string(digit), result);
        }
    }

    set<int> generate(int n)
    {
        vector<vector<int>> v = {
            {1},
            {2, 2},
            {1, 2, 2},
            {3, 3, 3},
            {1, 3, 3, 3},
            {4, 4, 4, 4},
            {1, 4, 4, 4, 4},
            {2, 2, 3, 3, 3},
            {5, 5, 5, 5, 5},
            {6, 6, 6, 6, 6, 6},
            {1, 5, 5, 5, 5, 5},
            {2, 2, 4, 4, 4, 4},
            {1, 2, 2, 3, 3, 3}};
        set<int> s;
        for (vector<int> i : v)
        {
            generateNumbers(i, "", s);
        }
        s.insert(1224444);
        return s;
    }
    int nextBeautifulNumber(int n)
    {
        set<int> a = generate(n);
        int ans = *upper_bound(a.begin(), a.end(), n);
        return ans;
    }
};