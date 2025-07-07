// Problem: Check if Every Row and Column Contains All Numbers
// Link to the problem: https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/
class Solution
{
public:
    bool checkValid(vector<vector<int>> &matrix)
    {
        vector<set<int>> rows(matrix.size()), cols(matrix.size());
        for (int i = 0; i < rows.size(); i++)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
                rows[i].insert(matrix[i][j]);
                cols[j].insert(matrix[i][j]);
            }
        }
        for (int i = 0; i < rows.size(); i++)
        {
            if (rows[i].size() < matrix.size())
            {
                return false;
            }
        }
        for (int i = 0; i < cols.size(); i++)
        {
            if (cols[i].size() < matrix.size())
            {
                return false;
            }
        }
        return true;
    }
};