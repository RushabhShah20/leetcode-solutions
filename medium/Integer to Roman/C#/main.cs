// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
public class Solution
{
    public string IntToRoman(int num)
    {
        string th, h, t, u;
        int th_d = (num / 1000);
        int h_d = ((num % 1000) / 100);
        int t_d = (((num % 1000) % 100) / 10);
        int u_d = (((num % 1000) % 100) % 10);
        if(th_d == 1)
            th = "M";
        else if (th_d == 2)
            th = "MM";
        else if (th_d == 3)
            th = "MMM";
        else
            th = "";
        if (h_d == 1)
            h = "C";
        else if (h_d == 2)
            h = "CC";
        else if (h_d == 3)
            h = "CCC";
        else if (h_d == 4)
            h = "CD";
        else if (h_d == 5)
            h = "D";
        else if (h_d == 6)
            h = "DC";
        else if (h_d == 7)
            h = "DCC";
        else if (h_d == 8)
            h = "DCCC";
        else if (h_d == 9)
            h = "CM";
        else
            h = "";
        if (t_d == 1)
            t = "X";
        else if (t_d == 2)
            t = "XX";
        else if (t_d == 3)
            t = "XXX";
        else if (t_d == 4)
            t = "XL";
        else if (t_d == 5)
            t = "L";
        else if (t_d == 6)
            t = "LX";
        else if (t_d == 7)
            t = "LXX";
        else if (t_d == 8)
            t = "LXXX";
        else if (t_d == 9)
            t = "XC";
        else
            t = "";
        if (u_d == 1)
            u = "I";
        else if (u_d == 2)
            u = "II";
        else if (u_d == 3)
            u = "III";
        else if (u_d == 4)
            u = "IV";
        else if (u_d == 5)
            u = "V";
        else if (u_d == 6)
            u = "VI";
        else if (u_d == 7)
            u = "VII";
        else if (u_d == 8)
            u = "VIII";
        else if (u_d == 9)
            u = "IX";
        else
            u = "";
        return th + h + t + u;
    }
}