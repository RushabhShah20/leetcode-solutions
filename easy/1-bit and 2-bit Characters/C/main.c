// Problem: 1-bit and 2-bit Characters
// Link to the problem: https://leetcode.com/problems/1-bit-and-2-bit-characters/
bool isOneBitCharacter(int *bits, int bitsSize)
{
    int n = bitsSize;
    int i = 0;
    while (i < n - 1)
    {
        i += bits[i] + 1;
    }
    return i == n - 1;
}