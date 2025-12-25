// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end());
        int ans = 0, n = people.size(), i = 0, j = n - 1;
        while (i <= j)
        {
            if (people[i] + people[j] <= limit)
            {
                i++;
                j--;
            }
            else
            {
                j--;
            }
            ans++;
        }
        return ans;
    }
};