// Problem: Prime In Diagonal
// Link to the problem: https://leetcode.com/problems/prime-in-diagonal/
class Solution
{
public:
    bool isPrime(int n)
    {
        bool x = true;
        if (n <= 1)
        {
            return false;
        }
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    x = false;
                    break;
                }
            }
            return x;
        }
    }
    int diagonalPrime(vector<vector<int>> &nums)
    {
        vector<int> diagonal_elements;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j || i + j == nums.size() - 1)
                {
                    if (isPrime(nums[i][j]))
                    {
                        diagonal_elements.push_back(nums[i][j]);
                    }
                }
            }
        }
        return diagonal_elements.size() == 0 ? 0 : *max_element(diagonal_elements.begin(), diagonal_elements.end());
    }
};