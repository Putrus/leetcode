use crate::Solution;
use std::collections::HashMap;
use std::vec;

impl Solution {
   pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
      let mut map: HashMap<i32, i32> = HashMap::new();
      for (i, num) in nums.iter().enumerate() {
         let diff = target - num;
         if map.contains_key(&diff) {
            return vec![map[&diff], i as i32]
         }
         map.insert(*num, i as i32);
      }
      vec![]
   }
}

#[cfg(test)]
mod tests {
   use crate::Solution;

   #[test]
   fn example_1() {
      assert_eq!(Solution::two_sum(vec![2, 7, 11, 15], 9), vec![0, 1]);
   }

   #[test]
   fn example_2() {
      assert_eq!(Solution::two_sum(vec![3, 2, 4], 6), vec![1, 2]);
   }

   #[test]
   fn example_3() {
      assert_eq!(Solution::two_sum(vec![3, 3], 6), vec![0, 1]);
   }
}