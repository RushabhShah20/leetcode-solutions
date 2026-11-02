// Problem: Count Sorted Vowel Strings
// Link to the problem: https://leetcode.com/problems/count-sorted-vowel-strings/
class Solution
{
public:
    int countVowelStrings(int n)
    {
        const int ans = (n + 4) * (n + 3) * (n + 2) * (n + 1) / 24;
        return ans;
    }
};