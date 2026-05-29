/* * Problem: Minimum Element After Replacement With Digit Sum
 *Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/*/
class Solution {
    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function sumOfDigits(int $n): int {
        $sum = 0;
        while ($n > 0) {
            $sum += $n % 10;
            $n = intdiv($n, 10);
        }
        return $sum;
    }

    function minElement(array &$nums): int {
        for ($i = 0; $i < count($nums); $i++) {
            $nums[$i] = $this->sumOfDigits($nums[$i]);
        }
        return min($nums);
    }
}