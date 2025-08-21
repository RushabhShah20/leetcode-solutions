// Problem: Watering Plants
// Link to the problem: https://leetcode.com/problems/watering-plants/
int wateringPlants(int *plants, int plantsSize, int capacity)
{
    int ans = 0, x = capacity;
    for (int i = 0; i < plantsSize; i++)
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