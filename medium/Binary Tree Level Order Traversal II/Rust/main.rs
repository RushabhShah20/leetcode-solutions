// Problem: Binary Tree Level Order Traversal II
// Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
    pub fn level_order(
        root: &Option<Rc<RefCell<TreeNode>>>,
        level: usize,
        ans: &mut Vec<Vec<i32>>,
    ) -> () {
        if let Some(node) = root {
            if (ans.len() <= level) {
                ans.push(Vec::new());
            }
            ans[level].push(node.borrow().val);
            Self::level_order(&node.borrow().left, level + 1, ans);
            Self::level_order(&node.borrow().right, level + 1, ans);
        }
    }
    pub fn level_order_bottom(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        Self::level_order(&root, 0, &mut ans);
        return ans.into_iter().rev().collect();
    }
}
