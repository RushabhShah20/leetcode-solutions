// Problem: Maximum Area of Longest Diagonal Rectangle
// Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
impl Solution {
    pub fn area_of_max_diagonal(dimensions: Vec<Vec<i32>>) -> i32 {
        let mut maxDiagonal: f64 = -1.0;
        let mut maxArea: i32 = -1;
        for i in 0..dimensions.len() {
            let mut l: i32 = dimensions[i][0];
            let mut b: i32 = dimensions[i][1];
            let mut diagonal: f64 = (((l * l) + (b * b)) as f64).sqrt();
            let mut area: i32 = l * b;
            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = area;
            } else if (diagonal == maxDiagonal) {
                maxArea = std::cmp::max(area, maxArea);
            }
        }
        return maxArea;
    }
}
