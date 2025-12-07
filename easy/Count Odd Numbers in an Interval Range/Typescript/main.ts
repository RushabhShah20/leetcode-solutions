// Problem: Count Odd Numbers in an Interval Range
// Link to the problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
function countOdds(low: number, high: number): number {
    let ans: number;
    if (low % 2 === 0) {
        ans = Math.floor((high - low + 1) / 2);
    }
    else {
        ans = Math.floor((high - low + 2) / 2);
    }
    return ans;
};