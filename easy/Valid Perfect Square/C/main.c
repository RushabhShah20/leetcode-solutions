// Problem: Valid Perfect Square
// Link to the problem: https://leetcode.com/problems/valid-perfect-square/
bool isPerfectSquare(int num)
{
    long long s = 1, e = num;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (mid * mid == num)
        {
            return true;
        }
        else if (mid * mid > num)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}