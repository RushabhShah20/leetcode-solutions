// Problem: Image Smoother
// Link to the problem: https://leetcode.com/problems/image-smoother/
class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        if (m == 1 && n == 1)
        {
            ans = img;
        }
        else if (m != 1 && n == 1)
        {
            for (int i = 1; i < m - 1; i++)
            {
                ans[i][0] = (img[i - 1][0] + img[i][0] + img[i + 1][0]) / 3;
            }
            ans[0][0] = (img[0][0] + img[1][0]) / 2;
            ans[m - 1][0] = (img[m - 1][0] + img[m - 2][0]) / 2;
        }
        else if (m == 1 && n != 1)
        {
            for (int j = 1; j < n - 1; j++)
            {
                ans[0][j] = (img[0][j - 1] + img[0][j] + img[0][j + 1]) / 3;
            }
            ans[0][0] = (img[0][0] + img[0][1]) / 2;
            ans[0][n - 1] = (img[0][n - 2] + img[0][n - 1]) / 2;
        }
        else
        {
            for (int i = 1; i < m - 1; i++)
            {
                for (int j = 1; j < n - 1; j++)
                {
                    ans[i][j] = (img[i - 1][j - 1] + img[i - 1][j] + img[i - 1][j + 1] + img[i][j - 1] + img[i][j] + img[i][j + 1] + img[i + 1][j - 1] + img[i + 1][j] + img[i + 1][j + 1]) / 9;
                }
            }
            for (int i = 1; i < m - 1; i++)
            {
                ans[i][0] = (img[i - 1][0] + img[i][0] + img[i + 1][0] + img[i - 1][1] + img[i][1] + img[i + 1][1]) / 6;
                ans[i][n - 1] = (img[i - 1][n - 1] + img[i][n - 1] + img[i + 1][n - 1] + img[i - 1][n - 2] + img[i][n - 2] + img[i + 1][n - 2]) / 6;
            }
            for (int j = 1; j < n - 1; j++)
            {
                ans[0][j] = (img[0][j - 1] + img[0][j] + img[0][j + 1] + img[1][j - 1] + img[1][j] + img[1][j + 1]) / 6;
                ans[m - 1][j] = (img[m - 1][j - 1] + img[m - 1][j] + img[m - 1][j + 1] + img[m - 2][j - 1] + img[m - 2][j] + img[m - 2][j + 1]) / 6;
            }
            ans[0][0] = (img[0][0] + img[0][1] + img[1][0] + img[1][1]) / 4;
            ans[0][n - 1] = (img[0][n - 2] + img[0][n - 1] + img[1][n - 2] + img[1][n - 1]) / 4;
            ans[m - 1][0] = (img[m - 1][0] + img[m - 2][0] + img[m - 1][1] + img[m - 2][1]) / 4;
            ans[m - 1][n - 1] = (img[m - 1][n - 1] + img[m - 2][n - 1] + img[m - 1][n - 2] + img[m - 2][n - 2]) / 4;
        }
        return ans;
    }
};