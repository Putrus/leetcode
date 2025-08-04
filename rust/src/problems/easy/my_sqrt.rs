use crate::Solution;

impl Solution {
   pub fn my_sqrt(x: i32) -> i32 {
      if x < 2 {
         return x;
      }

      let (mut left, mut right) = (1, x / 2);
      let mut result = 0;

      while left <= right {
         let mid = left + (right - left) / 2;
         let sq = mid as i64 * mid as i64;
         if sq == x as i64 {
               return mid;
         } else if sq < x as i64 {
               result = mid;
               left = mid + 1;
         } else {
               right = mid - 1;
         }
      }
      return result;
   }
}

#[cfg(test)]
mod tests {
   use crate::Solution;

   #[test]
   fn example_1() {
      assert_eq!(Solution::my_sqrt(4), 2);
   }

   #[test]
   fn example_2() {
      assert_eq!(Solution::my_sqrt(8), 2);
   }
}