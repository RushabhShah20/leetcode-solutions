// Problem: Find The Original Array of Prefix Xor
// Link to the problem: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
function findArray(pref: number[]): number[] {
    let ans: number[] = new Array(pref.length);
    ans[0] = pref[0];
    for (let i = 1; i < pref.length; i++) {
        ans[i] = pref[i] ^ pref[i - 1];
    }
    return ans;
};