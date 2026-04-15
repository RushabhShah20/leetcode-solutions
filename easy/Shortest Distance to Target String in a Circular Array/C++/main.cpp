// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
class Solution
{
public:
    int closestTarget(vector<string> &words, string target, int startIndex)
    {
        const int n = words.size();
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            if (words[i] == target)
            {
                const int x = abs(i - startIndex);
                ans = min(ans, min(x, n - x));
            }
        }
        return ans == n ? -1 : ans;
    }
};