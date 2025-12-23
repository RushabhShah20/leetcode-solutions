// Problem: Minimum Amount of Time to Collect Garbage
// Link to the problem: https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/
class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int ans = 0, n = garbage.size();
        vector<int> prefTravel(n, 0);
        prefTravel[0] = 0;
        prefTravel[1] = travel[0];
        for (int i = 1; i < n; i++)
        {
            prefTravel[i] = prefTravel[i - 1] + travel[i - 1];
        }
        int prevP = 0, prevG = 0, prevM = 0;
        for (int i = 0; i < n; i++)
        {
            int countP = 0, countG = 0, countM = 0;
            for (int j = 0; j < garbage[i].size(); j++)
            {
                if (garbage[i][j] == 'P')
                {
                    countP++;
                }
                else if (garbage[i][j] == 'G')
                {
                    countG++;
                }
                else
                {
                    countM++;
                }
            }
            if (i == 0)
            {
                ans += (countP + countG + countM);
            }
            else
            {
                if (countP > 0)
                {
                    ans += (countP + prefTravel[i] - prefTravel[prevP]);
                    prevP = i;
                }
                if (countG > 0)
                {
                    ans += (countG + prefTravel[i] - prefTravel[prevG]);
                    prevG = i;
                }
                if (countM > 0)
                {
                    ans += (countM + prefTravel[i] - prefTravel[prevM]);
                    prevM = i;
                }
            }
        }
        return ans;
    }
};