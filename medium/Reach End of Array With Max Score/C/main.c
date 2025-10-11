// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
long long findMaximumScore(int *nums, int numsSize)
{
    long long ans = 0, maxElement = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans += maxElement;
        maxElement = fmax(maxElement, (long long)(nums[i]));
    }
    return ans;
}