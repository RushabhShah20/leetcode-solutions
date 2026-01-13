// Problem: Minimum Hours of Training to Win a Competition
// Link to the problem: https://leetcode.com/problems/minimum-hours-of-training-to-win-a-competition/
class Solution
{
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience)
    {
        const int n = energy.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (energy[i] >= initialEnergy)
            {
                ans += energy[i] - initialEnergy + 1;
                initialEnergy += energy[i] - initialEnergy + 1;
            }
            if (experience[i] >= initialExperience)
            {
                ans += experience[i] - initialExperience + 1;
                initialExperience += experience[i] - initialExperience + 1;
            }
            initialEnergy -= energy[i];
            initialExperience += experience[i];
        }
        return ans;
    }
};