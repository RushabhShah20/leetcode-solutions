// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
impl Solution {
    pub fn number_of_employees_who_met_target(hours: Vec<i32>, target: i32) -> i32 {
        let mut ans: i32 = 0;
        for hour in hours {
            if (hour >= target) {
                ans += 1;
            }
        }
        return ans;
    }
}
