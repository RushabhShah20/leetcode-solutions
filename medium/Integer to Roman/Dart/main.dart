// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
class Solution {
  String intToRoman(int num) {
    String th, h, t, u;
    int th_d = num ~/ 1000;
    int h_d = (num % 1000) ~/ 100;
    int t_d = (num % 1000) % 100 ~/ 10;
    int u_d = (num % 1000) % 100 % 10;
    switch (th_d) {
      case 1:
        th = "M";
        break;
      case 2:
        th = "MM";
        break;
      case 3:
        th = "MMM";
        break;
      default:
        th = "";
    }
    switch (h_d) {
      case 1:
        h = "C";
        break;
      case 2:
        h = "CC";
        break;
      case 3:
        h = "CCC";
        break;
      case 4:
        h = "CD";
        break;
      case 5:
        h = "D";
        break;
      case 6:
        h = "DC";
        break;
      case 7:
        h = "DCC";
        break;
      case 8:
        h = "DCCC";
        break;
      case 9:
        h = "CM";
        break;
      default:
        h = "";
    }
    switch (t_d) {
      case 1:
        t = "X";
        break;
      case 2:
        t = "XX";
        break;
      case 3:
        t = "XXX";
        break;
      case 4:
        t = "XL";
        break;
      case 5:
        t = "L";
        break;
      case 6:
        t = "LX";
        break;
      case 7:
        t = "LXX";
        break;
      case 8:
        t = "LXXX";
        break;
      case 9:
        t = "XC";
        break;
      default:
        t = "";
    }
    switch (u_d) {
      case 1:
        u = "I";
        break;
      case 2:
        u = "II";
        break;
      case 3:
        u = "III";
        break;
      case 4:
        u = "IV";
        break;
      case 5:
        u = "V";
        break;
      case 6:
        u = "VI";
        break;
      case 7:
        u = "VII";
        break;
      case 8:
        u = "VIII";
        break;
      case 9:
        u = "IX";
        break;
      default:
        u = "";
    }
    return th + h + t + u;
  }
}
