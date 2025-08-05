// Problem: Fruits Into Baskets II
// Link to the problem: https://leetcode.com/problems/fruits-into-baskets-ii/
class Solution
{
public:
    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {
        vector<bool> isFull(baskets.size(), false), isPlaced(fruits.size(), false);
        int ans = 0;
        for (int i = 0; i < fruits.size(); i++)
        {
            for (int j = 0; j < baskets.size(); j++)
            {
                if (fruits[i] <= baskets[j] && isFull[j] == false)
                {
                    isFull[j] = true;
                    isPlaced[i] = true;
                    break;
                }
            }
            if (isPlaced[i] == false)
            {
                ans++;
            }
        }
        return ans;
    }
};