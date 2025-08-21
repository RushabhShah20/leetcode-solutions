// Problem: Watering Plants
// Link to the problem: https://leetcode.com/problems/watering-plants/
public class Solution
{
    public int WateringPlants(int[] plants, int capacity)
    {
        int ans = 0, x = capacity;
        for (int i = 0; i < plants.Length; i++)
        {
            if (plants[i] <= capacity)
            {
                ans++;
                capacity -= plants[i];
            }
            else
            {
                ans += (2 * (i)) + 1;
                capacity = x;
                capacity -= plants[i];
            }
        }
        return ans;
    }
}