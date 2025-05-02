// Problem: Majority Element
// Link to the problem: https://leetcode.com/problems/majority-element/
function majorityElement(nums: number[]): number {
    let element: number = -1, count: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (count === 0)
            element = nums[i];
        count += (element == nums[i]) ? 1 : -1;
    }
    return element;
};