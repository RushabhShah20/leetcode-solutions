// Problem: Watering Plants
// Link to the problem: https://leetcode.com/problems/watering-plants/
impl Solution {
    pub fn watering_plants(plants: Vec<i32>, capacity: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut x: i32 = capacity;
        let mut y: i32 = capacity;
        for i in 0..plants.len() {
            if (plants[i] <= y) {
                ans += 1;
                y -= plants[i];
            } else {
                ans += (2 * (i as i32)) + 1;
                y = x;
                y -= plants[i];
            }
        }
        return ans;
    }
}
