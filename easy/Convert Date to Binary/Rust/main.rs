// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
impl Solution {
    pub fn to_Binary(n: i64) -> i64 {
        let mut num: i64 = n;
        let mut ans: i64 = 0;
        let mut i: i64 = 1;
        while (num > 0) {
            let mut rem = num % 2;
            ans += rem * i;
            num /= 2;
            i *= 10;
        }
        return ans;
    }
    pub fn convert_date_to_binary(date: String) -> String {
        let mut yyyy: String = date.chars().skip(0).take(4).collect();
        let mut mm: String = date.chars().skip(5).take(2).collect();
        let mut dd: String = date.chars().skip(8).take(2).collect();
        let mut y: i64 = Self::to_Binary((yyyy).parse::<i64>().unwrap());
        let mut m: i64 = Self::to_Binary((mm).parse::<i64>().unwrap());
        let mut d: i64 = Self::to_Binary((dd).parse::<i64>().unwrap());
        let mut ans: String = y.to_string() + "-" + &m.to_string() + "-" + &d.to_string();
        return ans;
    }
}
