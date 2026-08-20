// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var reverse = function (arr, l, r) {
    while (l <= r) {
        const x = arr[l];
        arr[l] = arr[r];
        arr[r] = x;
        l++;
        r--;
    }
}
var resultArray = function (nums) {
    const n = nums.length;
    let ans = new Array(n).fill(0);
    ans[0] = nums[0];
    ans[n - 1] = nums[1];
    let l = 0, r = n - 1;
    for (let i = 2; i < n; i++) {
        if (ans[l] > ans[r]) {
            l++;
            ans[l] = nums[i];
        }
        else {
            r--;
            ans[r] = nums[i];
        }
    }
    reverse(ans, r, n - 1);
    return ans;
};