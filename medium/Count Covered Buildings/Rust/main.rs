// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
impl Solution {
    pub fn count_covered_buildings(n: i32, buildings: Vec<Vec<i32>>) -> i32 {
        let mut maxRow: Vec<i32> = vec![0; (n + 1) as usize];
        let mut minRow: Vec<i32> = vec![n + 1; (n + 1) as usize];
        let mut maxCol: Vec<i32> = vec![0; (n + 1) as usize];
        let mut minCol: Vec<i32> = vec![n + 1; (n + 1) as usize];
        for building in &buildings {
            let x: i32 = building[0];
            let y: i32 = building[1];
            maxRow[y as usize] = x.max(maxRow[y as usize]);
            minRow[y as usize] = x.min(minRow[y as usize]);
            maxCol[x as usize] = y.max(maxCol[x as usize]);
            minCol[x as usize] = y.min(minCol[x as usize]);
        }
        let mut ans: i32 = 0;
        for building in &buildings {
            let x: i32 = building[0];
            let y: i32 = building[1];
            if (x > minRow[y as usize]
                && x < maxRow[y as usize]
                && y > minCol[x as usize]
                && y < maxCol[x as usize])
            {
                ans += 1;
            }
        }
        return ans;
    }
}
