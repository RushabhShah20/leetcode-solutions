// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
impl Solution {
    pub fn minimum_effort(mut tasks: Vec<Vec<i32>>) -> i32 {
        tasks.sort_by(|a, b| (a[1] - a[0]).cmp(&(b[1] - b[0])));
        let mut ans: i32 = 0;
        for task in &tasks {
            ans = (ans + task[0]).max(task[1]);
        }
        return ans;
    }
}
