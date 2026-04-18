// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
int rev(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int mirrorDistance(int n)
{
    const int m = rev(n), ans = abs(m - n);
    return ans;
}