// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
function prefixesDivBy5(nums: number[]): boolean[] {
    let rem = 0;
    let ans: boolean[] = new Array();
    for (const num of nums) {
        rem = (2 * rem + num) % 5;
        if (rem === 0) {
            ans.push(true);
        }
        else {
            ans.push(false);
        }
    }
    return ans;
};