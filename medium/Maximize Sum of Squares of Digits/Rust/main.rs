// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
impl Solution {
    pub fn max_sum_of_squares(num: i32, sum: i32) -> String {
        if sum < 1 || sum > 9 * num {
            return String::new();
        }
        let mut num: i32 = num;
        let mut ans: String = String::new();
        let x: i32 = sum / 9;
        let y: i32 = sum % 9;
        ans.push_str(&"9".repeat(x as usize));
        num -= x;
        if y > 0 {
            ans.push((b'0' + y as u8) as char);
            num -= 1;
        }
        ans.push_str(&"0".repeat(num as usize));
        return ans;
    }
}
