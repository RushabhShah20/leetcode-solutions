// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
int maxArea(int *height, int heightSize)
{
    int ans = 0, n = heightSize;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int vol = (right - left) * fmin(height[left], height[right]);
        ans = fmax(ans, vol);
        if (height[left] <= height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return ans;
}