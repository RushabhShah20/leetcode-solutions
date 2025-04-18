// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
function checkString(s: string): boolean {
    let ans: boolean = true;
    let count: number = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === "b") {
            ans = true;
            count = 1;
        }
        if (s[i] === "a" && count === 1) {
            ans = false;
            break;
        }
    }
    return ans;
}
