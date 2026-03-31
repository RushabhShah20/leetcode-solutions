// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
function checkStrings(s1: string, s2: string): boolean {
    const n = s1.length;
    let x = new Array(52).fill(0), y = new Array(52).fill(0);
    for (let i = 0; i < n; i++) {
        if (i % 2 === 0) {
            x[(s1[i]).charCodeAt(0) - ('a').charCodeAt(0)]++;
            y[(s2[i]).charCodeAt(0) - ('a').charCodeAt(0)]++;
        }
        else {
            x[(s1[i]).charCodeAt(0) - ('a').charCodeAt(0) + 26]++;
            y[(s2[i]).charCodeAt(0) - ('a').charCodeAt(0) + 26]++;
        }
    }
    for (let i = 0; i < 52; i++) {
        if (x[i] !== y[i]) {
            return false;
        }
    }
    return true;
};