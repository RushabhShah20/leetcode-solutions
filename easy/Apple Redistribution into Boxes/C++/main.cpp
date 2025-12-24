// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        int ans = 0;
        sort(capacity.begin(), capacity.end(), greater<int>());
        int total = 0;
        for (const int a : apple)
        {
            total += a;
        }
        for (const int c : capacity)
        {
            if (total >= c)
            {
                total -= c;
                ans++;
            }
            else
            {
                if (total != 0)
                {
                    ans++;
                }
                break;
            }
        }
        return ans;
    }
};