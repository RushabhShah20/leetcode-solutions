// Problem: Image Overlap
// Link to the problem: https://leetcode.com/problems/image-overlap/
class Solution
{
public:
    int convolute(const int n, const vector<vector<int>> &a, const vector<vector<int>> &b, const int x, const int y)
    {
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                ans += a[i][j] * b[i + y][j + x];
            }
        }
        return ans;
    }
    int largestOverlap(vector<vector<int>> &img1, vector<vector<int>> &img2)
    {
        const int n = img1.size();
        vector<vector<int>> img3(3 * n - 2, vector<int>(3 * n - 2));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                img3[i + n - 1][j + n - 1] = img2[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < 2 * n - 1; ++i)
        {
            for (int j = 0; j < 2 * n - 1; ++j)
            {
                ans = max(ans, convolute(n, img1, img3, i, j));
            }
        }
        return ans;
    }
};