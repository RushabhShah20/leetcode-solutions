// Problem: Smallest All-Ones Multiple
// Link to the problem: https://leetcode.com/problems/smallest-all-ones-multiple/
function minAllOneMultiple(k: number): number {
    if (k % 2 == 0 || k % 5 == 0) {
        return -1;
    }
    if (k == 1) {
        return 1;
    }
    let rem: number = 1, ans: number = 1;
    while (rem > 0) {
        rem = ((rem * 10) + 1) % k;
        ans++;
        if (ans > k) {
            return -1;
        }
    }
    return ans;
};