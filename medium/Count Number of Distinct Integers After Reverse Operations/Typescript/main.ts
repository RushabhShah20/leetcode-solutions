// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
function rev(n: number): number {
    let rev: number = 0;
    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10 >> 0;
    }
    return rev;
};
function countDistinctIntegers(nums: number[]): number {
    let s: Set<number> = new Set<number>();
    let ans: number[] = Object.assign([], nums);
    for (let i: number = 0; i < nums.length; i++) {
        ans.push(rev(nums[i]));
    }
    for (let i: number = 0; i < ans.length; i++) {
        s.add(ans[i]);
    }
    return s.size;
};