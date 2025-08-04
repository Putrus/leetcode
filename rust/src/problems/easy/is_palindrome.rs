use crate::Solution;

impl Solution {
   pub fn is_palindrome(x: i32) -> bool {
      x.to_string().chars().eq(x.to_string().chars().rev())
   }
}

#[cfg(test)]
mod tests {
   use crate::Solution;

   #[test]
   fn example_1() {
      assert!(Solution::is_palindrome(121));
   }

   #[test]
   fn example_2() {
      assert!(!Solution::is_palindrome(-121));
   }

   #[test]
   fn example_3() {
      assert!(!Solution::is_palindrome(10));
   }
}