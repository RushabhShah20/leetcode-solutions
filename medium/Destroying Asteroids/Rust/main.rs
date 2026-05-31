// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
impl Solution {
    pub fn asteroids_destroyed(mass: i32, mut asteroids: Vec<i32>) -> bool {
        let n: usize = asteroids.len();
        let mut x: i64 = mass as i64;
        asteroids.sort();
        for i in 0..n {
            if (asteroids[i] as i64 > x) {
                return false;
            }
            x += asteroids[i] as i64;
        }
        return true;
    }
}
