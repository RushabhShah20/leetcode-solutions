// Problem: Minimum Suffix Flips
// Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
function minFlips(target: string): number {
    let ans: number = 0;
    let x: boolean = false;
    if (target[0] === '1') {
        ans++;
        x = true;
    }
    for (let i = 1; i < target.length; i++) {
        if (target[i] === '1') {
            if (x === false) {
                ans++;
                x = true;
            }
        }
        else {
            if (x === true) {
                ans++;
                x = false;
            }
        }
    }
    return ans;
};