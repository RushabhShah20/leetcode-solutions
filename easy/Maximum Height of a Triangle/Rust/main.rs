// Problem: Maximum Height of a Triangle
// Link to the problem: https://leetcode.com/problems/maximum-height-of-a-triangle/
impl Solution {
    pub fn max_height_of_triangle(red: i32, blue: i32) -> i32 {
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        let mut a: i32 = red;
        let mut b: i32 = blue;
        let mut i: i32 = 1;
        while (a >= 0 && b >= 0) {
            if (i % 2 == 0) {
                a -= i;
                x += 1;
            } else {
                b -= i;
                x += 1;
            }
            i += 1;
        }
        a = red;
        b = blue;
        i = 1;
        while (a >= 0 && b >= 0) {
            if (i % 2 == 0) {
                b -= i;
                y += 1;
            } else {
                a -= i;
                y += 1;
            }
            i += 1;
        }
        let ans: i32 = (x - 1).max(y - 1);
        return ans;
    }
}
