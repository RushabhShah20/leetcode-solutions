// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
function getDescentPeriods(prices: number[]): number {
    let ans: number = 0, count: number = 1;
    let a = new Array();
    for (let i = 1; i < prices.length; i++) {
        if (prices[i] === prices[i - 1] - 1) {
            count++;
        }
        else {
            a.push(count);
            count = 1;
        }
    }
    a.push(count);
    for (let i = 0; i < a.length; i++) {
        ans += Math.floor((a[i]) * (a[i] + 1) / 2);
    }
    return ans;
};