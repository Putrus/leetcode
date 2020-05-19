#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <list>
//to exercise number 2
struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
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
	//number 9
	bool isPalindrome(int x);
	//number 10
	bool isMatch(std::string s, std::string p);


	//number 13
	int romanToInt(std::string s);
	//number 14
	std::string longestCommonPrefix(std::vector<std::string>& strs);

	//number 20
	bool isValid(std::string s);
	//number 21
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};