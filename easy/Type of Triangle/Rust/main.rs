// Problem: Type of Triangle
// Link to the problem: https://leetcode.com/problems/type-of-triangle/
impl Solution {
    pub fn triangle_type(nums: Vec<i32>) -> String {
        let mut a: i32 = nums[0];
        let mut b: i32 = nums[1];
        let mut c: i32 = nums[2];
        if (a + b > c && b + c > a && c + a > b) {
            if (a == b && b == c && c == a) {
                return "equilateral".to_string();
            } else if (a == b || b == c || c == a) {
                return "isosceles".to_string();
            } else {
                return "scalene".to_string();
            }
        }
        return "none".to_string();
    }
}
