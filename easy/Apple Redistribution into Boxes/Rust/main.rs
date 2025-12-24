// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
impl Solution {
    pub fn minimum_boxes(apple: Vec<i32>, mut capacity: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        capacity.sort();
        capacity.reverse();
        let mut total: i32 = 0;
        for a in apple {
            total += a;
        }
        for c in capacity {
            if (total >= c) {
                total -= c;
                ans += 1;
            } else {
                if (total != 0) {
                    ans += 1;
                }
                break;
            }
        }
        return ans;
    }
}
