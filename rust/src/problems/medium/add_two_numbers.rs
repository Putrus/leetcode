use crate::Solution;

// Definition for singly-linked list.
#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
   pub val: i32,
   pub next: Option<Box<ListNode>>
}

impl ListNode {
   #[inline]
   fn new(val: i32) -> Self {
      ListNode {
      next: None,
      val
      }
   }
}

impl Solution {
   pub fn add_two_numbers(l1: Option<Box<ListNode>>, l2: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
      let result = Some(Box::new(ListNode::new(5)));
      result
   }
}

#[cfg(test)]
mod tests {
   use crate::Solution;
   use crate::problems::medium::add_two_numbers::ListNode;

   #[test]
   fn example_1() {
      let list1 = Some(Box::new(ListNode { val : 2, next:
         Some(Box::new(ListNode { val : 4, next:
         Some(Box::new(ListNode::new(3))), })), }));
      
      let list2 = Some(Box::new(ListNode { val : 5, next:
         Some(Box::new(ListNode { val : 6, next:
         Some(Box::new(ListNode::new(4))), })), }));
      
      let result = Solution::add_two_numbers(list1, list2);
      assert_eq!(Some(Box::new(ListNode { val : 7, next:
         Some(Box::new(ListNode { val : 0, next:
         Some(Box::new(ListNode::new(8))), })), })), result);
   }

   #[test]
   fn example_2() {
      let list1 = Some(Box::new(ListNode::new(0)));
      
      let list2 = Some(Box::new(ListNode::new(0)));
      
      let result = Solution::add_two_numbers(list1, list2);
      assert_eq!(Some(Box::new(ListNode::new(0))), result);
   }
   
   #[test]
   fn example_3() {
      let list1 = Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next: 
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode::new(9)))
         })), })), })), })), })), }));
      
      let list2 = Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next: 
         Some(Box::new(ListNode::new(9)))
         })), })), }));
      
      let result = Solution::add_two_numbers(list1, list2);
      assert_eq!(Some(Box::new(ListNode { val : 8, next:
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 9, next: 
         Some(Box::new(ListNode { val : 9, next:
         Some(Box::new(ListNode { val : 0, next:
         Some(Box::new(ListNode { val : 0, next:
         Some(Box::new(ListNode { val : 0, next:
         Some(Box::new(ListNode::new(8)))
         })), })), })), })), })), })), })), result);
   }
}