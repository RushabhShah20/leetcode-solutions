// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
class Solution
{
public:
    int closestTarget(vector<string> &words, string target, int startIndex)
    {
        int n = words.size();
        vector<int> targetIndex;
        for (int i = 0; i < n; i++)
        {
            if (words[i] == target)
            {
                targetIndex.push_back(i);
            }
        }
        if (targetIndex.size() == 0)
        {
            return -1;
        }
        else
        {
            int ans = 2 * n;
            for (int i = 0; i < targetIndex.size(); i++)
            {
                if (targetIndex[i] > startIndex)
                {
                    ans = min(ans, (targetIndex[i] - startIndex) % n);
                    ans = min(ans, (startIndex + n - targetIndex[i]) % n);
                }
                else if (targetIndex[i] < startIndex)
                {
                    ans = min(ans, (startIndex - targetIndex[i]) % n);
                    ans = min(ans, (targetIndex[i] + n - startIndex) % n);
                }
                else
                {
                    ans = 0;
                    break;
                }
            }
            return ans;
        }
    }
};