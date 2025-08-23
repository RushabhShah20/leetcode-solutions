// Problem: Day of the Week
// Link to the problem: https://leetcode.com/problems/day-of-the-week/
impl Solution {
    pub fn day_of_the_week(day: i32, month: i32, year: i32) -> String {
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
        ans %= 7;
        if (ans == 1) {
            return "Friday".to_string();
        } else if (ans == 2) {
            return "Saturday".to_string();
        } else if (ans == 3) {
            return "Sunday".to_string();
        } else if (ans == 4) {
            return "Monday".to_string();
        } else if (ans == 5) {
            return "Tuesday".to_string();
        } else if (ans == 6) {
            return "Wednesday".to_string();
        } else {
            return "Thursday".to_string();
        }
    }
}
