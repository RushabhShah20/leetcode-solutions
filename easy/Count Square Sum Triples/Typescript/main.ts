// Problem: Count Square Sum Triples
// Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
function countTriples(n: number): number {
    let ans: number = 0;
    for (let i = 1; i <= n; ++i) {
        let x: number = i * i;
        let l: number = 1;
        let r: number = i - 1;
        while (l < r) {
            let sum: number = l * l + r * r;
            if (sum === x) {
                ans += 2;
                l++;
                r--;
            }
            else if (sum < x) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return ans;
};