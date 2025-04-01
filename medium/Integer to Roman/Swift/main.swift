// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
class Solution {
    func intToRoman(_ num: Int) -> String {
        let th,h,t,u:String;
        let th_d:Int = num/1000;
        let h_d:Int = (num%1000)/100;
        let t_d:Int = ((num%1000)%100)/10;
        let u_d:Int = (((num%1000)%100)%10);
        switch th_d {
            case 0: th = "";
            case 1: th = "M";
            case 2: th = "MM";
            case 3: th = "MMM";
            default: th = "";
        }
        switch h_d {
            case 0: h = "";
            case 1: h = "C";
            case 2: h = "CC";
            case 3: h = "CCC";
            case 4: h = "CD";
            case 5: h = "D";
            case 6: h = "DC";
            case 7: h = "DCC";
            case 8: h = "DCCC";
            case 9: h = "CM";
            default: h = "";
        }
        switch t_d {
            case 0: t = "";
            case 1: t = "X";
            case 2: t = "XX";
            case 3: t = "XXX";
            case 4: t = "XL";
            case 5: t = "L";
            case 6: t = "LX";
            case 7: t = "LXX";
            case 8: t = "LXXX";
            case 9: t = "XC";
            default: t = "";
        }
        switch u_d {
            case 0: u = "";
            case 1: u = "I";
            case 2: u = "II";
            case 3: u = "III";
            case 4: u = "IV";
            case 5: u = "V";
            case 6: u = "VI";
            case 7: u = "VII";
            case 8: u = "VIII";
            case 9: u = "IX";
            default: u = "";
        }
        return th+h+t+u; 
    }
}