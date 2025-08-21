// Problem: Final Prices With a Special Discount in a Shop
// Link to the problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
function finalPrices(prices: number[]): number[] {
    let ans: number[] = new Array();
    for (let i = 0; i < prices.length; i++) {
        ans[i] = prices[i];
        for (let j = i + 1; j < prices.length; j++) {
            if (prices[j] <= prices[i]) {
                ans[i] = prices[i] - prices[j];
                break;
            }
        }
    }
    return ans;
};