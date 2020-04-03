#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
//to exercise number 2
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
	//number 1
	std::vector<int> twoSum(std::vector<int>& nums, int target);
	//number 2
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
	//number 3
	int lengthOfLongestSubstring(std::string s);
	//number 4
	float findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2);
	//number 5
	std::string longestPalindrome(std::string s);
	//number 6
	std::string convert(std::string s, int numRows);
	//number 7
	int reverse(int x);
	//number 8
	int myAtoi(std::string str);
};