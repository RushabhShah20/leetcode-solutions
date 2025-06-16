// Problem: Valid Mountain Array
// Link to the problem: https://leetcode.com/problems/valid-mountain-array/
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
        {
            return false;
        }
        else
        {
            int maxArr = *max_element(arr.begin(), arr.end());
            int maxIndex = find(arr.begin(), arr.end(), maxArr) - arr.begin();
            if (maxIndex == 0 || maxIndex == arr.size() - 1)
            {
                return false;
            }
            else
            {
                for (int i = 0; i < arr.size() - 1; i++)
                {
                    if (i < maxIndex)
                    {
                        if (arr[i] >= arr[i + 1])
                        {
                            return false;
                        }
                    }
                    else
                    {
                        if (arr[i] <= arr[i + 1])
                        {
                            return false;
                        }
                    }
                }
                return true;
            }
        }
    }
};