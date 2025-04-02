// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
function digitSum(n: number): number {
    let sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = Math.floor(n / 10);
    }
    return sum;
}

function minElement(nums: number[]): number {
    let min = Infinity;
    for (let i = 0; i < nums.length; i++) {
        let num = nums[i];
        num = digitSum(num);
        min = Math.min(min, num);
    }
    return min;   
};
