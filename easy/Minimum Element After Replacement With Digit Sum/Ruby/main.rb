# Problem: Minimum Element After Replacement With Digit Sum
# Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
# @param {Integer[]} nums
# @return {Integer}
def digit_sum(num)
    sum = 0
    while num > 0
        sum += num % 10
        num /= 10
    end
    sum
end

def min_element(nums)
    min = nums[0]
    nums.each do |num|
      num = digit_sum(num)
        if num < min
            min = num
        end
    end
    min
end

