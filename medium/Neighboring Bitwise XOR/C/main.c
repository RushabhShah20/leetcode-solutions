// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
bool doesValidArrayExist(int *derived, int derivedSize)
{
    int ans = 1;
    for (int i = 0; i < derivedSize; i++)
    {
        ans ^= derived[i];
    }
    return ans;
}