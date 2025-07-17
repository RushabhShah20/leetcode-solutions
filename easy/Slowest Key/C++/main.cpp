// Problem: Slowest Key
// Link to the problem: https://leetcode.com/problems/slowest-key/
class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        vector<int> times(releaseTimes.size());
        times[0] = releaseTimes[0];
        for (int i = 1; i < releaseTimes.size(); i++)
        {
            times[i] = releaseTimes[i] - releaseTimes[i - 1];
        }
        vector<char> characters;
        int maxTime = *max_element(times.begin(), times.end());
        for (int i = 0; i < times.size(); i++)
        {
            if (times[i] == maxTime)
            {
                characters.push_back(keysPressed[i]);
            }
        }
        return *max_element(characters.begin(), characters.end());
    }
};