// Problem: Reformat Date
// Link to the problem: https://leetcode.com/problems/reformat-date/
class Solution
{
public:
    string reformatDate(string date)
    {
        string ans = "";
        string dd, mm, yyyy;
        if (date[4] == ' ')
        {
            dd = date.substr(0, 2);
            mm = date.substr(5, 3);
            yyyy = date.substr(9, 4);
        }
        else
        {
            dd = date.substr(0, 1);
            mm = date.substr(4, 3);
            yyyy = date.substr(8, 4);
        }
        if (dd.size() == 1)
        {
            dd.insert(dd.begin(), '0');
        }
        if (mm == "Jan")
        {
            mm = "01";
        }
        else if (mm == "Feb")
        {
            mm = "02";
        }
        else if (mm == "Mar")
        {
            mm = "03";
        }
        else if (mm == "Apr")
        {
            mm = "04";
        }
        else if (mm == "May")
        {
            mm = "05";
        }
        else if (mm == "Jun")
        {
            mm = "06";
        }
        else if (mm == "Jul")
        {
            mm = "07";
        }
        else if (mm == "Aug")
        {
            mm = "08";
        }
        else if (mm == "Sep")
        {
            mm = "09";
        }
        else if (mm == "Oct")
        {
            mm = "10";
        }
        else if (mm == "Nov")
        {
            mm = "11";
        }
        else if (mm == "Dec")
        {
            mm = "12";
        }
        ans = yyyy + "-" + mm + "-" + dd;
        return ans;
    }
};