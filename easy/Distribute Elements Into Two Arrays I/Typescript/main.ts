// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
function reverse(arr: number[], l: number, r: number): void {
    while (l <= r) {
        const x = arr[l];
        arr[l] = arr[r];
        arr[r] = x;
        l++;
        r--;
    }
}
function resultArray(nums: number[]): number[] {
    const n: number = nums.length;
    let ans: number[] = new Array(n).fill(0);
    ans[0] = nums[0];
    ans[n - 1] = nums[1];
    let l: number = 0, r: number = n - 1;
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