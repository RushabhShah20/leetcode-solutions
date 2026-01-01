// Problem: Filter Elements from Array
// Link to the problem: https://leetcode.com/problems/filter-elements-from-array/
type Fn = (n: number, i: number) => any

function filter(arr: number[], fn: Fn): number[] {
    let ans:number[] = new Array();
    for (let i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            ans.push(arr[i]);
        }
    }
    return ans;
};