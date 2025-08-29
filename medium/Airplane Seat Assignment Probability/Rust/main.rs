// Problem: Airplane Seat Assignment Probability
// Link to the problem: https://leetcode.com/problems/airplane-seat-assignment-probability/
impl Solution {
    pub fn nth_person_gets_nth_seat(n: i32) -> f64 {
        if (n == 1) {
            return 1.0;
        } else {
            return 0.5;
        }
    }
}
