// Problem: Find the Number of Ways to Place People I
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
impl Solution {
    pub fn number_of_pairs(points: Vec<Vec<i32>>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..points.len() {
            for j in 0..points.len() {
                if (i != j) {
                    let mut x1: i32 = points[i][0];
                    let mut y1: i32 = points[i][1];
                    let mut x2: i32 = points[j][0];
                    let mut y2: i32 = points[j][1];
                    if ((x1 <= x2) && (y1 >= y2)) {
                        let mut z: bool = true;
                        for k in 0..points.len() {
                            let mut x: i32 = points[k][0];
                            let mut y: i32 = points[k][1];
                            if (i != k && j != k) {
                                if (((x1 <= x) && (x2 >= x)) && ((y1 >= y) && (y2 <= y))) {
                                    z = false;
                                    break;
                                }
                            }
                        }
                        if (z == true) {
                            ans += 1;
                        }
                    }
                }
            }
        }
        return ans;
    }
}
