// Problem: Can Place Flowers
// Link to the problem: https://leetcode.com/problems/can-place-flowers/
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int ans = 0;
        if (flowerbed.size() == 1)
        {
            if (flowerbed[0] == 0)
            {
                return n <= 1;
            }
            else
            {
                return n <= 0;
            }
        }
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if (i == 0)
                {
                    if (flowerbed[i + 1] != 1)
                    {
                        flowerbed[i] = 1;
                        ans++;
                    }
                }
                else if (i == flowerbed.size() - 1)
                {
                    if (flowerbed[i - 1] != 1)
                    {
                        flowerbed[i] = 1;
                        ans++;
                    }
                }
                else
                {
                    if (flowerbed[i - 1] != 1 && flowerbed[i + 1] != 1)
                    {
                        flowerbed[i] = 1;
                        ans++;
                    }
                }
            }
        }
        return ans >= n;
    }
};