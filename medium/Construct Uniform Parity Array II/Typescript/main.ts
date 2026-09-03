// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
function uniformArray(nums1: number[]): boolean {
    const n: number = nums1.length;
    let x: boolean = true;
    let mn: number = 1000000001;
    for (let i = 0; i < n; i++) {
        const num: number = nums1[i];
        if (num & 1) {
            x = false;
        }
        mn = Math.min(mn, num);
    }
    const ans: boolean = mn & 1 || x ? true : false;
    return ans;
};