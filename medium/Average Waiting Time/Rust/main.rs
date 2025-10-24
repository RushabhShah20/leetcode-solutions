// Problem: Average Waiting Time
// Link to the problem: https://leetcode.com/problems/average-waiting-time/
impl Solution {
    pub fn average_waiting_time(customers: Vec<Vec<i32>>) -> f64 {
        let mut ans: i64 = 0;
        let mut total: i64 = 0;
        let n: usize = customers.len();
        total += ((customers[0][0] as i64) + (customers[0][1] as i64));
        ans += (customers[0][1] as i64);
        for i in 1..n {
            if (total >= (customers[i][0] as i64)) {
                total += (customers[i][1] as i64);
                ans += (total - (customers[i][0] as i64));
            } else {
                total = (customers[i][0] as i64) + (customers[i][1] as i64);
                ans += (customers[i][1] as i64);
            }
        }
        return ((ans as f64) / (n as f64));
    }
}
