// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
class Solution
{
public:
    string intToRoman(int num)
    {
        string th, h, t, u;
        int th_d = num / 1000;
        int h_d = (num % 1000) / 100;
        int t_d = ((num % 1000) % 100) / 10;
        int u_d = (((num % 1000) % 100) % 10);
        if (th_d == 1)
        {
            th = "M";
        }
        if (th_d == 2)
        {
            th = "MM";
        }
        if(th_d == 3)
        {
            th = "MMM";
        }
        if (h_d == 1)
        {
            h = "C";
        }
        if (h_d == 2)
        {
            h = "CC";
        }
        if (h_d == 3)
        {
            h = "CCC";
        }
        if (h_d == 4)
        {
            h = "CD";
        }
        if (h_d == 5)
        {
            h = "D";
        }
        if (h_d == 6)
        {
            h = "DC";
        }
        if (h_d == 7)
        {
            h = "DCC";
        }
        if (h_d == 8)
        {
            h = "DCCC";
        }
        if (h_d == 9)
        {
            h = "CM";
        }
        if (t_d == 1)
        {
            t = "X";
        }
        if (t_d == 2)
        {
            t = "XX";
        }
        if (t_d == 3)
        {
            t = "XXX";
        }
        if (t_d == 4)
        {
            t = "XL";
        }
        if (t_d == 5)
        {
            t = "L";
        }
        if (t_d == 6)
        {
            t = "LX";
        }
        if (t_d == 7)
        {
            t = "LXX";
        }
        if (t_d == 8)
        {
            t = "LXXX";
        }
        if (t_d == 9)
        {
            t = "XC";
        }
        if (u_d == 1)
        {
            u = "I";
        }
        if (u_d == 2)
        {
            u = "II";
        }
        if (u_d == 3)
        {
            u = "III";
        }
        if (u_d == 4)
        {
            u = "IV";
        }
        if (u_d == 5)
        {
            u = "V";
        }
        if (u_d == 6)
        {
            u = "VI";
        }
        if (u_d == 7)
        {
            u = "VII";
        }
        if (u_d == 8)
        {
            u = "VIII";
        }
        if (u_d == 9)
        {
            u = "IX";
        }
        return th + h + t + u;
    }
};