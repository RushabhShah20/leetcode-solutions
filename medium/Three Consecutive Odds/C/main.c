// Problem: Three Consecutive Odds
// Link to the problem: https://leetcode.com/problems/three-consecutive-odds/
bool threeConsecutiveOdds(int *arr, int arrSize)
{
    int count = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count = 0;
        }
        else
        {
            count++;
            if (count == 3)
            {
                return true;
            }
        }
    }
    return false;
}