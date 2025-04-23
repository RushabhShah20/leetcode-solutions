// Problem: Find the Index of the First Occurrence in a String
// Link to the problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        return haystack.find(needle);
    }
};