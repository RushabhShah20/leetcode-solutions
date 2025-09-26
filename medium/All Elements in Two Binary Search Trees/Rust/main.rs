// Problem: All Elements in Two Binary Search Trees
// Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
    pub fn get_all_elements(
        root1: Option<Rc<RefCell<TreeNode>>>,
        root2: Option<Rc<RefCell<TreeNode>>>,
    ) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        pub fn insert_to_array(root: Option<Rc<RefCell<TreeNode>>>, ans: &mut Vec<i32>) {
            if let Some(root) = root {
                let node_ref = root.borrow();
                ans.push(node_ref.val);
                if node_ref.left.is_some() {
                    insert_to_array(node_ref.left.clone(), ans);
                }
                if node_ref.right.is_some() {
                    insert_to_array(node_ref.right.clone(), ans);
                }
            }
        }
        insert_to_array(root1, &mut ans);
        insert_to_array(root2, &mut ans);
        ans.sort();
        return ans;
    }
}
