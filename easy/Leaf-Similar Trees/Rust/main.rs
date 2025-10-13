// Problem: Leaf-Similar Trees
// Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
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
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn inorder(root: &Option<Rc<RefCell<TreeNode>>>, ans: &mut Vec<i32>) {
        if let Some(node) = root {
            let node = node.borrow();
            Self::inorder(&node.left, ans);
            if node.left.is_none() && node.right.is_none() {
                ans.push(node.val);
            }
            Self::inorder(&node.right, ans);
        }
    }
    pub fn leaf_similar(
        root1: Option<Rc<RefCell<TreeNode>>>,
        root2: Option<Rc<RefCell<TreeNode>>>,
    ) -> bool {
        let mut ans1 = Vec::new();
        let mut ans2 = Vec::new();
        Self::inorder(&root1, &mut ans1);
        Self::inorder(&root2, &mut ans2);
        return ans1 == ans2;
    }
}

