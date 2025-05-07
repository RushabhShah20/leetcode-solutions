// Problem: Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/number-of-1-bits/
int hammingWeight(int n)
{
    int ans = 0;
    while (n != 0)
    {
        n &= (n - 1);
        ans++;
    }
    return ans;
}