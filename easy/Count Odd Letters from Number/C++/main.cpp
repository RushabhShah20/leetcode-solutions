// Problem: Count Odd Letters from Number
// Link to the problem: https://leetcode.com/problems/count-odd-letters-from-number/
class Solution
{
public:
    int countOddLetters(int n)
    {
        unordered_map<int, string> m = {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};
        vector<int> a(26, 0);
        while (n > 0)
        {
            const string s = m[n % 10];
            const int k = s.size();
            for (int i = 0; i < k; i++)
            {
                a[s[i] - 'a']++;
            }
            n /= 10;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            ans += a[i] & 1;
        }
        return ans;
    }
};