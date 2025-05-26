// Problem: Search in a Binary Search Tree
// Link to the problem: https://leetcode.com/problems/search-in-a-binary-search-tree/
// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
//
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::cell::RefCell;
use std::rc::Rc;
impl Solution {
    pub fn search_bst(
        mut root: Option<Rc<RefCell<TreeNode>>>,
        val: i32,
    ) -> Option<Rc<RefCell<TreeNode>>> {
        while let Some(node) = root {
            if node.borrow().val < val {
                root = node.borrow().right.clone();
            } else if node.borrow().val > val {
                root = node.borrow().left.clone();
            } else {
                return Some(node);
            }
        }
        return None;
    }
}
