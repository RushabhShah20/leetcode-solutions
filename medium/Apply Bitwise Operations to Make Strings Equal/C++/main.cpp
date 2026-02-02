// Problem: Apply Bitwise Operations to Make Strings Equal
// Link to the problem: https://leetcode.com/problems/apply-bitwise-operations-to-make-strings-equal/
class Solution
{
public:
    bool makeStringsEqual(string s, string target)
    {
        const bool x = s.find('1') == string::npos, y = target.find('1') == string::npos, ans = !(x ^ y);
        return ans;
    }
};