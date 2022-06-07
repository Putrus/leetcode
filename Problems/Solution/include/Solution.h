#pragma once

#include "../../Structs/include/ListNode.h"

#include <vector>
#include <string>

class Solution {
public:
   //1. Two Sum
   std::vector<int> twoSum(std::vector<int>& nums, int target);

	//2. Add Two Numbers
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

   //3. Longest Substring Without Repeating Characters
   int lengthOfLongestSubstring(std::string s);

   //4. Median of Two Sorted Arrays
   double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);

   //5. Longest Palindromic Substring
   std::string longestPalindrome(std::string s);

   //6. Zigzag Conversion
   std::string convert(std::string, int numRows);

};