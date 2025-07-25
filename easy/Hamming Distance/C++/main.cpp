// Problem: Hamming Distance
// Link to the problem: https://leetcode.com/problems/hamming-distance/
class Solution
{
public:
    vector<int> binaryVector(int num)
    {
        vector<int> result;
        while (num > 0)
        {
            result.push_back(num % 2);
            num /= 2;
        }
        for (int i = result.size(); i < 32; i++)
        {
            result.push_back(0);
        }
        reverse(result.begin(), result.end());
        return result;
    }
    int hammingDistance(int x, int y)
    {
        int ans = 0;
        vector<int> x_binary_vector = binaryVector(x);
        vector<int> y_binary_vector = binaryVector(y);
        for (int i = 0; i < x_binary_vector.size(); i++)
        {
            if (x_binary_vector[i] != y_binary_vector[i])
            {
                ans++;
            }
        }
        return ans;
    }
};