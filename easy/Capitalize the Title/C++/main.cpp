// Problem: Capitalize the Title
// Link to the problem: https://leetcode.com/problems/capitalize-the-title/
class Solution
{
public:
    string capitalizeTitle(string title)
    {
        int n = title.size();
        for (int i = 0; i < n; i++)
        {
            int x = i;
            while (i < n && title[i] != ' ')
            {
                title[i] = tolower(title[i]);
                i++;
            }
            if (i - x > 2)
            {
                title[x] = toupper(title[x]);
            }
        }
        return title;
    }
};