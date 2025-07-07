// Problem: Valid Square
// Link to the problem: https://leetcode.com/problems/valid-square/
class Solution
{
public:
    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {
        long long ab = (pow((p1[0] - p2[0]), 2) + pow((p1[1] - p2[1]), 2));
        long long bc = (pow((p1[0] - p3[0]), 2) + pow((p1[1] - p3[1]), 2));
        long long cd = (pow((p1[0] - p4[0]), 2) + pow((p1[1] - p4[1]), 2));
        long long da = (pow((p2[0] - p3[0]), 2) + pow((p2[1] - p3[1]), 2));
        long long ac = (pow((p2[0] - p4[0]), 2) + pow((p2[1] - p4[1]), 2));
        long long bd = (pow((p3[0] - p4[0]), 2) + pow((p3[1] - p4[1]), 2));
        vector<long long> sides = {ab, bc, cd, da, ac, bd};
        map<long long, int> x;
        for (int i = 0; i < sides.size(); i++)
        {
            x[sides[i]]++;
        }
        map<int, vector<long long>> y;
        for (auto i : x)
        {
            for (int j = 0; j < i.second; j++)
            {
                y[i.second].push_back(i.first);
            }
        }
        if (y.size() != 2)
        {
            return false;
        }
        else
        {
            vector<long long> diagonals, lengths;
            for (auto i : y)
            {
                if (i.second.size() == 4)
                {
                    lengths = i.second;
                }
                if (i.second.size() == 2)
                {
                    diagonals = i.second;
                }
            }
            if (diagonals.size() == 0 || lengths.size() == 0)
            {
                return false;
            }
            else
            {
                if (diagonals[0] != diagonals[1])
                {
                    return false;
                }
                else
                {
                    for (int i = 0; i < lengths.size() - 1; i++)
                    {
                        if (lengths[i] != lengths[i + 1])
                        {
                            return false;
                        }
                    }
                    if (lengths[0] + lengths[0] != diagonals[0])
                    {
                        return false;
                    }
                    else
                    {
                        return true;
                    }
                }
            }
        }
    }
};