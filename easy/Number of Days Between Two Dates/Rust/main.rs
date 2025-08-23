// Problem: Number of Days Between Two Dates
// Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
impl Solution {
    pub fn day_of_year(date: String) -> i32 {
        let mut day: i32 = date[8..10].parse().unwrap();
        let mut month: i32 = date[5..7].parse().unwrap();
        let mut year: i32 = date[0..4].parse().unwrap();
        let mut ans: i32 = 0;
        for i in 1971..year {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
                ans += 366;
            } else {
                ans += 365;
            }
        }
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            let mut months: Vec<i32> = vec![31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
            for i in 0..(month - 1) as usize {
                ans += months[i];
            }
        } else {
            let mut months: Vec<i32> = vec![31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
            for i in 0..(month - 1) as usize {
                ans += months[i];
            }
        }
        ans += day;
        return ans;
    }
    pub fn days_between_dates(date1: String, date2: String) -> i32 {
        let mut x: i32 = Self::day_of_year(date1);
        let mut y: i32 = Self::day_of_year(date2);
        return (x - y).abs();
    }
}
