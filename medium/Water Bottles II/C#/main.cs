// Problem: Water Bottles II
// Link to the problem: https://leetcode.com/problems/water-bottles-ii/
public class Solution
{
    public int MaxBottlesDrunk(int numBottles, int numExchange)
    {
        int ans = 0;
        int emptyBottles = 0;
        while (true)
        {
            if (numBottles > 0)
            {
                ans += numBottles;
                emptyBottles += numBottles;
                numBottles = 0;
            }
            while (emptyBottles >= numExchange)
            {
                numBottles++;
                emptyBottles -= numExchange;
                numExchange++;
            }
            if (numBottles == 0)
            {
                return ans;
            }
        }
    }
}