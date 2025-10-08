// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
impl Solution {
    pub fn successful_pairs(spells: Vec<i32>, mut potions: Vec<i32>, success: i64) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![0; spells.len()];
        potions.sort();
        for i in 0..spells.len() {
            let mut x: i32 = -1;
            let mut l: usize = 0;
            let mut r: usize = (potions.len() - 1);
            while (l < r) {
                let mut m: usize = l + (r - l) / 2;
                let mut y: i64 = (potions[m] as i64) * (spells[i] as i64);
                if (y < success) {
                    l = m + 1;
                } else {
                    r = m;
                }
            }
            if ((potions[l] as i64) * (spells[i] as i64) >= success) {
                x = l as i32;
            }
            if (x != -1) {
                ans[i] += (potions.len() as i32 - x);
            }
        }
        return ans;
    }
}
