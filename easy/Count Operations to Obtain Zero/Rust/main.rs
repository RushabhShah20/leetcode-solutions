// Problem: Count Operations to Obtain Zero
// Link to the problem: https://leetcode.com/problems/count-operations-to-obtain-zero/
impl Solution {
    pub fn count_operations(num1: i32, num2: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut a: i32 = num1.max(num2);
        let mut b: i32 = num1.min(num2);
        while (a > 0 && b > 0) {
            ans += (a / b);
            a %= b;
            let temp: i32 = a;
            a = b;
            b = temp;
        }
        return ans;
    }
}
