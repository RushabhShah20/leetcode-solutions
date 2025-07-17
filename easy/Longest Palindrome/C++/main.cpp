// Problem: Longest Palindrome
// Link to the problem: https://leetcode.com/problems/longest-palindrome/
class Solution
{
public:
    int longestPalindrome(string s)
    {
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]]++;
        }
        int ans = 0;
        vector<int> odd;
        for (auto i : x)
        {
            if (i.second % 2 == 0)
            {
                ans += i.second;
            }
            else
            {
                odd.push_back(i.second);
            }
        }
        int oddSum = 0;
        for (int i = 0; i < odd.size(); i++)
        {
            oddSum += odd[i] - 1;
        }
        if (odd.empty())
        {
            return s.size();
        }
        else
        {
            return ans + oddSum + 1;
        }
    }
};