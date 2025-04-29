# Problem: Find Closest Person
# Link to the problem: https://leetcode.com/problems/find-closest-person/
# @param {Integer} x
# @param {Integer} y
# @param {Integer} z
# @return {Integer}
def find_closest(x, y, z)
    if (x-z).abs<(y-z).abs
      return 1;
    elsif (x-z).abs>(y-z).abs
      return 2;
    else
      return 0;
    end
end