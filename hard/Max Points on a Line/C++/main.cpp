// Problem: Max Points on a Line
// Link to the problem: https://leetcode.com/problems/max-points-on-a-line/
class Solution
{
public:
    vector<string> equation(int x1, int x2, int y1, int y2)
    {
        int m1 = (y2 - y1), m2 = (x2 - x1);
        string m = "";
        if (m2 == 0)
        {
            m = "inf";
        }
        else if (m1 == 0)
        {
            m = "0";
        }
        else
        {
            int g = __gcd(abs(m2), abs(m1));
            m2 /= g;
            m1 /= g;
            if (m2 < 0)
            {
                m2 = -m2;
                m1 = -m1;
            }
            m = to_string(m1) + "/" + to_string(m2);
        }
        string c = "";
        if (m2 == 0)
        {
            c = "inf";
        }
        else
        {
            int c1 = (m2 * y1) - (m1 * x1);
            int c2 = m2;
            if (c1 == 0)
            {
                c = "0";
            }
            else
            {
                int g = __gcd(abs(c2), abs(c1));
                c1 /= g;
                c2 /= g;
                if (c2 < 0)
                {
                    c2 = -c2;
                    c1 = -c1;
                }
                c = to_string(c1) + "/" + to_string(c2);
            }
        }
        string d = "";
        if (m1 == 0)
        {
            if (y1 == 0)
            {
                d = "inf";
            }
            else
            {
                d = "none";
            }
        }
        else if (m2 == 0)
        {
            d = to_string(x1);
        }
        else
        {
            int x_int_num = (m1 * x1) - (m2 * y1);
            int x_int_den = m1;
            if (x_int_num == 0)
            {
                d = "0";
            }
            else
            {
                int g = __gcd(abs(x_int_den), abs(x_int_num));
                x_int_num /= g;
                x_int_den /= g;
                if (x_int_den < 0)
                {
                    x_int_den = -x_int_den;
                    x_int_num = -x_int_num;
                }
                d = to_string(x_int_num) + "/" + to_string(x_int_den);
            }
        }
        return {m, c, d};
    }
    int maxPoints(vector<vector<int>> &points)
    {
        map<vector<string>, set<vector<int>>> x;
        for (int i = 0; i < points.size(); i++)
        {
            for (int j = 0; j < points.size(); j++)
            {
                if (i != j)
                {
                    vector<string> y = equation(points[i][0], points[j][0], points[i][1], points[j][1]);
                    x[y].insert(points[i]);
                    x[y].insert(points[j]);
                }
            }
        }
        int ans = 1;
        for (auto i : x)
        {
            ans = max(ans, (int)(i.second.size()));
        }
        return ans;
    }
};