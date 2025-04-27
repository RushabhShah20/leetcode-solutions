// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
function replaceElements(arr: number[]): number[] {
    let ans = new Array();
    ans.push(-1);
    let max = -1;
    if (arr.length == 1) {
        return ans;
    }
    else {
        for (let i = arr.length - 1; i >= 1; i--) {
            if (max < arr[i]) {
                max = arr[i];
            }
            ans.push(max);
        }
        ans.reverse();
        return ans;
    }
};