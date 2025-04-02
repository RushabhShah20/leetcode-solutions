// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
impl Solution {
    pub fn int_to_roman(num: i32) -> String {
        let mut th: String;
        let mut h: String;
        let mut t: String;
        let mut u: String;
        let mut th_d = (num / 1000);
        let mut h_d = ((num % 1000) / 100);
        let mut t_d = (((num % 1000) % 100) / 10);
        let mut u_d = (((num % 1000) % 100) % 10);
        if th_d == 1 {
            th = "M".to_string();
        } else if th_d == 2 {
            th = "MM".to_string();
        } else if th_d == 3 {
            th = "MMM".to_string();
        } else {
            th = "".to_string();
        }
        if h_d == 1 {
            h = "C".to_string();
        } else if h_d == 2 {
            h = "CC".to_string();
        } else if h_d == 3 {
            h = "CCC".to_string();
        } else if h_d == 4 {
            h = "CD".to_string();
        } else if h_d == 5 {
            h = "D".to_string();
        } else if h_d == 6 {
            h = "DC".to_string();
        } else if h_d == 7 {
            h = "DCC".to_string();
        } else if h_d == 8 {
            h = "DCCC".to_string();
        } else if h_d == 9 {
            h = "CM".to_string();
        } else {
            h = "".to_string();
        }
        if t_d == 1 {
            t = "X".to_string();
        } else if t_d == 2 {
            t = "XX".to_string();
        } else if t_d == 3 {
            t = "XXX".to_string();
        } else if t_d == 4 {
            t = "XL".to_string();
        } else if t_d == 5 {
            t = "L".to_string();
        } else if t_d == 6 {
            t = "LX".to_string();
        } else if t_d == 7 {
            t = "LXX".to_string();
        } else if t_d == 8 {
            t = "LXXX".to_string();
        } else if t_d == 9 {
            t = "XC".to_string();
        } else {
            t = "".to_string();
        }
        if u_d == 1 {
            u = "I".to_string();
        } else if u_d == 2 {
            u = "II".to_string();
        } else if u_d == 3 {
            u = "III".to_string();
        } else if u_d == 4 {
            u = "IV".to_string();
        } else if u_d == 5 {
            u = "V".to_string();
        } else if u_d == 6 {
            u = "VI".to_string();
        } else if u_d == 7 {
            u = "VII".to_string();
        } else if u_d == 8 {
            u = "VIII".to_string();
        } else if u_d == 9 {
            u = "IX".to_string();
        } else {
            u = "".to_string();
        }
        return th + &h + &t + &u;
    }
}

