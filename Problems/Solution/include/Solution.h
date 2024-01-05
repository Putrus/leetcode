#pragma once

#include "../../Structs/include/ListNode.h"

#include <vector>
#include <string>

class Solution
{
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
   std::string convert(std::string s, int numRows);

   //7. Reverse Integer
   int reverse(int x);

   //8. String to integer (atoi)
   int myAtoi(std::string s);

   //9. Palindrome Number
   bool isPalindrome(int x);

   //10. Regular Expression Matching
   bool isMatch(std::string s, std::string p);

   //11. Container With Most Water
   int maxArea(std::vector<int>& height);

   //12. Integer to Roman
   std::string intToRoman(int num);

   //13. Roman to Integer
   int romanToInt(std::string s);

   //14. Longest Common Prefix
   std::string longestCommonPrefix(std::vector<std::string>& strs);

   //15. 3Sum
   std::vector<std::vector<int>> threeSum(std::vector<int>& nums);

   //16. 3Sum Closest
   int threeSumClosest(std::vector<int>& nums, int target);

   //17. Letter Combinations of a Phone Number
   std::vector<std::string> letterCombinations(std::string digits);

   //18. 4Sum
   std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);

   //19. Remove Nth Node From End of List
   ListNode* removeNthFromEnd(ListNode* head, int n);

   //20. Valid Parentheses
   bool isValid(const std::string& s);

   //21. Merge Two Sorted Lists
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);

   //22. Generate Parentheses
   std::vector<std::string> generateParenthesis(int n);

   //23. Merge k Sorted Lists
   ListNode* mergeKLists(std::vector<ListNode*>& lists);

   //24. Swap Nodes in Pairs
   ListNode* swapPairs(ListNode* head);

};