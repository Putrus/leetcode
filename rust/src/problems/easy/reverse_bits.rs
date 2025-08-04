use crate::Solution;

impl Solution {
   pub fn reverse_bits(n: i32) -> i32 {
      let mut n = n;
      let mut result = 0;

      for _ in 0..32 {
         result <<= 1;
         result |= n & 1;
         n >>= 1;
      }
      result
   }
}

#[cfg(test)]
mod tests {
   use crate::Solution;

   #[test]
   fn example_1() {
      assert_eq!(Solution::reverse_bits(43261596), 964176192);
   }

   #[test]
   fn example_2() {
      assert_eq!(Solution::reverse_bits(2147483644), 1073741822);
   }
}