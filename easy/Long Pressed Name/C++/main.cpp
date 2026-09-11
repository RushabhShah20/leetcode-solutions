// Problem: Long Pressed Name
// Link to the problem: https://leetcode.com/problems/long-pressed-name/
class Solution
{
public:
    bool isLongPressedName(string name, string typed)
    {
        const int n = name.size(), m = typed.size();
        int i = 0;
        int j = 0;
        while (j < m)
        {
            if (i < n && name[i] == typed[j])
            {
                i++;
                j++;
            }
            else if (j > 0 && typed[j] == typed[j - 1])
            {
                j++;
            }
            else
            {
                return false;
            }
        }
        const bool ans = i == n;
        return ans;
    }
};