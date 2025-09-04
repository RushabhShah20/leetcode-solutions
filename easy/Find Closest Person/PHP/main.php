// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
class Solution {

    /**
     * @param Integer $x
     * @param Integer $y
     * @param Integer $z
     * @return Integer
     */
    function findClosest($x, $y, $z) {
        if (abs($x - $z) < abs($y - $z))
        {
            return 1;
        }
        else if (abs($x - $z) > abs($y - $z))
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
}