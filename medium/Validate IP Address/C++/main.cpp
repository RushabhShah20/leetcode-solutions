// Problem: Validate IP Address
// Link to the problem: https://leetcode.com/problems/validate-ip-address/
class Solution
{
public:
    string validIPAddress(string queryIP)
    {
        vector<int> points, colons;
        for (int i = 0; i < queryIP.size(); i++)
        {
            if (queryIP[i] == '.')
            {
                points.push_back(i);
            }
            if (queryIP[i] == ':')
            {
                colons.push_back(i);
            }
        }
        if (points.size() != 0 && colons.size() == 0)
        {
            int minDiff = INT_MAX;
            for (int i = 1; i < points.size(); i++)
            {
                minDiff = min(minDiff, points[i] - points[i - 1]);
            }
            if (minDiff < 2)
            {
                return "Neither";
            }
            else if (points.front() == 0 || points.back() == queryIP.size() - 1)
            {
                return "Neither";
            }
            else if (points.size() != 3)
            {
                return "Neither";
            }
            else
            {
                vector<string> x;
                x.push_back((queryIP.substr(0, points[0])));
                for (int i = 0; i < points.size() - 1; i++)
                {
                    x.push_back(queryIP.substr(points[i] + 1, points[i + 1] - points[i] - 1));
                }
                x.push_back(queryIP.substr(points.back() + 1, queryIP.size() - points.back()));
                bool isNotDigit = false;
                for (int i = 0; i < x.size(); i++)
                {
                    if (x[i].size() > 3)
                    {
                        return "Neither";
                    }
                    else
                    {
                        for (int j = 0; j < x[i].size(); j++)
                        {
                            if (!isdigit(x[i][j]))
                            {
                                isNotDigit = true;
                            }
                        }
                    }
                }
                if (isNotDigit == true)
                {
                    return "Neither";
                }
                else
                {
                    for (int i = 0; i < x.size(); i++)
                    {
                        if (to_string(stoi(x[i])).size() != x[i].size())
                        {
                            return "Neither";
                        }
                        for (int j = 0; j < x[i].size(); j++)
                        {
                            if (!isdigit(x[i][j]))
                            {
                                return "Neither";
                            }
                        }
                        if (stoi(x[i]) > 255)
                        {
                            return "Neither";
                        }
                    }
                    return "IPv4";
                }
            }
        }
        else if (points.size() == 0 && colons.size() != 0)
        {
            int minDiff = INT_MAX;
            for (int i = 1; i < colons.size(); i++)
            {
                minDiff = min(minDiff, colons[i] - colons[i - 1]);
            }
            if (minDiff < 2)
            {
                return "Neither";
            }
            else if (colons.front() == 0 || colons.back() == queryIP.size() - 1)
            {
                return "Neither";
            }
            else if (colons.size() != 7)
            {
                return "Neither";
            }
            else
            {
                vector<string> x;
                x.push_back(queryIP.substr(0, colons[0]));
                for (int i = 0; i < colons.size() - 1; i++)
                {
                    x.push_back(queryIP.substr(colons[i] + 1, colons[i + 1] - colons[i] - 1));
                }
                x.push_back(queryIP.substr(colons.back() + 1, queryIP.size() - colons.back()));
                for (int i = 0; i < x.size(); i++)
                {
                    if (x[i].size() > 4)
                    {
                        return "Neither";
                    }
                    else
                    {
                        for (int j = 0; j < x[i].size(); j++)
                        {
                            string y = "0123456789abcdefABCDEF";
                            if (y.find(x[i][j]) == y.npos)
                            {
                                return "Neither";
                            }
                        }
                    }
                }
                return "IPv6";
            }
        }
        else
        {
            return "Neither";
        }
    }
};