#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <list>
#include <cmath>
#include <map>
#include <unordered_set>
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
private:
	//number 17
	void backtrack(std::string combination, std::string nextNumbers, std::vector<std::string> & result, std::vector<std::string> phone);
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
	//number 11
	int maxArea(std::vector<int>& height);
	//number 12
	std::string intToRoman(int num);
	//number 13
	int romanToInt(std::string s);
	//number 14
	std::string longestCommonPrefix(std::vector<std::string>& strs);
	//number 15
	std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
	//number 16
	int threeSumClosest(std::vector<int>& nums, int target);
	//number 17
	std::vector<std::string> letterCombinations(std::string digits);
	//number 18
	std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);


	//number 20
	bool isValid(std::string s);
	//number 21
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
	//number 26
	int removeDuplicates(std::vector<int>& nums);
	//number 27
	int removeElement(std::vector<int>& nums, int val);
	//number 28
	int strStr(std::string haystack, std::string needle);
	//number 35
	int searchInsert(std::vector<int>& nums, int target);
	//number 36
	//to do
	bool isValidSudoku(std::vector<std::vector<char>>& board);
	//number 38
	std::string countAndSay(int n);
	//number 58
	int lengthOfLastWord(std::string s);
	//number 62
	int uniquePaths(int m, int n);
	//number 63
	int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid);
	//number 66
	std::vector<int> plusOne(std::vector<int>& digits);
	//number 67
	std::string addBinary(std::string a, std::string b);
	//number 198
	int rob(std::vector<int>& nums);
	//number 202
	bool isHappy(int n);
	//number 214
	std::string shortestPalindrome(std::string s);
	//number 217
	bool containsDuplicate(std::vector<int>& nums);
	//number 219
	bool containsNearbyDuplicate(std::vector<int>& nums, int k);
	//number 263
	bool isUgly(int num);
	//number 264
	int nthUglyNumber(int n);
	//number 299
	std::string getHint(std::string secret, std::string guess);
};