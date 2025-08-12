// Problem: Number of Burgers with No Waste of Ingredients
// Link to the problem: https://leetcode.com/problems/number-of-burgers-with-no-waste-of-ingredients/
class Solution
{
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices)
    {
        int x = tomatoSlices, y = cheeseSlices;
        if (((x - (2 * y)) % 2 != 0) || ((x - (2 * y)) < 0) || (((4 * y) - x) % 2 != 0) || (((4 * y) - x) < 0))
        {
            return {};
        }
        else
        {
            return {((x - (2 * y)) / 2), (((4 * y) - x) / 2)};
        }
    }
};