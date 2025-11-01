// Problem: Remove Linked List Elements
// Link to the problem: https://leetcode.com/problems/remove-linked-list-elements/
// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
//
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }
impl Solution {
    pub fn remove_elements(head: Option<Box<ListNode>>, val: i32) -> Option<Box<ListNode>> {
        let mut dummy: Box<ListNode> = Box::new(ListNode { val: 0, next: head });
        let mut cur: &mut Box<ListNode> = &mut dummy;
        while (cur.next.is_some()) {
            if (cur.next.as_ref().unwrap().val == val) {
                cur.next = cur.next.as_mut().unwrap().next.take();
            } else {
                cur = cur.next.as_mut().unwrap();
            }
        }
        return dummy.next;
    }
}
