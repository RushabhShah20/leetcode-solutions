// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
function sortArrayByParity(nums: number[]): number[] {
    let ans: number[] = new Array(), even: number[] = new Array(), odd: number[] = new Array();
    for (const num of nums) {
        if (num % 2 === 0) {
            even.push(num);
        } else {
            odd.push(num);
        }
    }
    for (const num of even) {
        ans.push(num);
    }
    for (const num of odd) {
        ans.push(num);
    }
    return ans;
};