// Problem: Distribute Candies to People
// Link to the problem: https://leetcode.com/problems/distribute-candies-to-people/
class Solution
{
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        int a = 0;
        vector<int> ans(num_people, 0);
        while (candies > 0)
        {
            a++;
            if (candies < a)
            {
                ans[(a - 1) % num_people] += candies;
                break;
            }
            else
            {
                ans[(a - 1) % num_people] += a;
            }
            candies -= a;
        }
        return ans;
    }
};