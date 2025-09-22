// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function (nums) {
    const x = new Map();
    for (let i = 0; i < nums.length; i++) {
        if (x.has(nums[i])) {
            x.set(nums[i], x.get(nums[i]) + 1);
        } else {
            x.set(nums[i], 1);
        }
    }
    const y = new Map();
    for (const [key, value] of x) {
        if (!y.has(value)) {
            y.set(value, []);
        }
        for (let j = 0; j < value; j++) {
            y.get(value).push(key);
        }
    }
    let maxFreq = 0;
    for (const [freq, elements] of y) {
        maxFreq = Math.max(maxFreq, freq);
    }
    const ans = y.get(maxFreq);
    return ans.length;
};