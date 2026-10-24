// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
impl Solution {
    fn day_of_the_year(date: &str, a: &Vec<i32>) -> i32 {
        let x: usize = date[0..2].parse::<usize>().unwrap();
        let y: i32 = date[3..5].parse::<i32>().unwrap();
        let ans: i32 = a[x - 1] + y;
        return ans;
    }
    pub fn count_days_together(
        arrive_alice: String,
        leave_alice: String,
        arrive_bob: String,
        leave_bob: String,
    ) -> i32 {
        let x: Vec<i32> = vec![31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
        let mut y: Vec<i32> = vec![0; 13];
        for i in 1..13 {
            y[i] = y[i - 1] + x[i - 1];
        }
        let a: i32 = Self::day_of_the_year(&arrive_alice, &y);
        let b: i32 = Self::day_of_the_year(&leave_alice, &y);
        let c: i32 = Self::day_of_the_year(&arrive_bob, &y);
        let d: i32 = Self::day_of_the_year(&leave_bob, &y);
        let ans: i32 = 0.max(b.min(d) - a.max(c) + 1);
        return ans;
    }
}
