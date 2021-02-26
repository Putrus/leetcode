#include "Solution.h"






int Solution::threeSumClosest(std::vector<int>& nums, int target) {
	int difference = INT_MAX;
	int n = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n && difference != 0; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			int complement = target - nums[i] - nums[j];
			auto it = upper_bound(nums.begin() + j + 1, nums.end(), complement);
			int higher = it - nums.begin();
			int lower = higher - 1;
			if (higher < n && abs(complement - nums[higher]) < abs(difference)) {
				difference = complement - nums[higher];
			}
			if (lower > j && abs(complement - nums[lower]) < abs(difference)) {
				difference = complement - nums[lower];
			}
		}
	}
	return target - difference;
}




std::vector<std::string> Solution::letterCombinations(std::string digits) {

	std::vector<std::string> phone = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

	std::vector<std::string> result;

	if (digits.length() != 0) {
		backtrack("", digits, result, phone);
	}

	return result;
}


void Solution::backtrack(std::string combination, std::string nextDigits, std::vector<std::string> & result, std::vector<std::string> phone)
{
	if (nextDigits.length() == 0) {
		result.push_back(combination);
		return;
	}
	else {
		int digit = nextDigits[0] % 50;
		std::string letters = phone[digit];
		for (int i = 0; i < letters.length(); i++) {
			std::string nextNextDigits = nextDigits.substr(1);
			backtrack(combination + letters[i], nextNextDigits, result, phone);
		}
	}
}


std::vector<std::vector<int>> Solution::fourSum(std::vector<int>& nums, int target) {
	std::vector<std::vector<int>> result;
	std::sort(nums.begin(), nums.end());
	if (nums.size() >= 4) {
		for (size_t i = 0; i < nums.size() - 3; i++) {
			for (size_t j = i + 1; j < nums.size() - 2; j++) {
				for (size_t k = j + 1; k < nums.size() - 1; k++) {
					for (size_t l = k + 1; l < nums.size(); l++) {
						if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
							std::vector<int> a = { nums[i], nums[j], nums[k], nums[l] };
							bool ok = true;
							for (size_t m = 0; m < result.size(); m++) {
								if (result[m] == a) {
									ok = false;
									break;
								}
							}
							if (ok) {
								result.push_back(a);
							}
						}
					}
				}
			}
		}
	}
	return result;
}

/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Note that an empty string is also considered valid.
Example 1:

Input: "()"
Output: true

Example 2:

Input: "()[]{}"
Output: true

Example 3:

Input: "(]"
Output: false

Example 4:

Input: "([)]"
Output: false

Example 5:

Input: "{[]}"
Output: true
*/

bool Solution::isValid(std::string s)
{
	std::stack<char> stack;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				stack.push(s[i]);
			}
			else if (s[i] == ')')
			{
				if (stack.empty() || stack.top() != '(')
				{
					return false;
				}
				stack.pop();
			}
			else if (s[i] == '}')
			{
				if (stack.empty() || stack.top() != '{')
				{
					return false;
				}
				stack.pop();
			}
			else if (s[i] == ']')
			{
				if (stack.empty() || stack.top() != '[')
				{
					return false;
				}
				stack.pop();
			}
		
		}
		return stack.empty();
	
}









/*Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/
ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* it1 = l1;
	ListNode* it2 = l2;
	ListNode* result = new ListNode(l1->val);
	while (it1 != NULL && it2 != NULL)
	{
	}

	return new ListNode(5);
}


int Solution::removeDuplicates(std::vector<int>& nums)
{
	if (nums.size() != 0)
	{
		for (int i = 0; i < nums.size() - 1; i++)
		{
			while (i != nums.size()-1 && nums[i] == nums[i + 1])
			{
				nums.erase(nums.begin() + i + 1);
			}

		}
	}
	return nums.size();
}


int Solution::removeElement(std::vector<int>& nums, int val) {
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == val)
		{
			nums.erase(nums.begin() + i);
			i = -1;
		}
	}


	return (int)nums.size();
}



int Solution::strStr(std::string haystack, std::string needle){
	if (needle == "") {
		return 0;
	}

	for (size_t i = 0; i < haystack.size(); i++) {
		if (haystack.size() - i >= needle.size()) {
			bool ok = true;
			for (size_t j = 0; j < needle.size(); j++) {
				if (haystack[i + j] != needle[j]) {
					ok = false;
					break;
				}
			}
			if (ok) {
				return i;
			}
		}
	}
	return -1;
}


int Solution::searchInsert(std::vector<int>& nums, int target)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			return i;
		}
		if (nums[i] > target)
		{
			return i;
		}
	}
	return nums.size();


}

//to do
bool isValidSudoku(std::vector<std::vector<char>>& board) {

	return true;

}




std::string Solution::countAndSay(int n)
{
	if (n == 1)
	{
		return "1";
	}
	if (n == 2)
	{
		return "11";
	}
	std::string str = countAndSay(n - 1), result = "";
	int i = 0;
	while (i < str.size())
	{
		int j = i;
		while (j < str.size() && str[i] == str[j])
		{
			j++;
		}
		result += std::to_string(j - i) + str[i];
		i = j;
	}
	return result;
}





int Solution::lengthOfLastWord(std::string s)
{
	int spacebars = 0;
	int j = s.length() - 1;
	while (j >= 0 && s[j] == ' ')
	{
		spacebars++;
		if (j == 0)
		{
			return 0;
		}
		j--;
	}
	std::cout <<"spacebars:"<< spacebars<<"\n";
	for(int i = s.length()-1-spacebars; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			return s.length() - i - 1 - spacebars;
		}
	}
	return s.length() - spacebars;
}


std::vector<int> Solution::plusOne(std::vector<int>& digits) {
	
	if (digits[digits.size() - 1] == 9)
	{
		int i = digits.size() - 1;
		while (digits[i] == 9 && i!=0)
		{
			digits[i] = 0;
			i--;
		}
		if (digits[i] == 9)
		{
			digits[i] = 1;
			digits.push_back(0);
		}
		else
		{
			digits[i] += 1;
		}
		
	}
	else
	{
		digits[digits.size() - 1] += 1;
	}
	return digits;
}



std::string Solution::addBinary(std::string a, std::string b) {

	int diff = abs(int(a.length() - b.length()));
	if (a.length() > b.length())
	{
		for (int i = 0; i < diff; i++)
		{
			b.insert(b.begin() + i, '0');
		}
	}
	else {
		for (int i = 0; i < diff; i++)
		{
			a.insert(a.begin() + i, '0');
		}
	}
	std::string result = "";
	char rest = '0';
	for (int i = a.length() - 1; i >= 0; i--)
	{
		if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
		{
			if (rest == '0')
			{
				result.insert(result.begin(), '1');
				rest = '0';
			}
			else {
				result.insert(result.begin(), '0');
				rest = '1';
			}
		}
		else if (a[i] == '0' && b[i] == '0')
		{
			if (rest == '0')
			{
				result.insert(result.begin(), '0');
				rest = '0';
			}
			else {
				result.insert(result.begin(), '1');
				rest = '0';
			}
		}
		else {
			if (rest == '0')
			{
				result.insert(result.begin(), '0');
				rest = '1';
			}
			else {
				result.insert(result.begin(), '1');
				rest = '1';
			}
		}
	}


	if (rest == '1')
	{
		result.insert(result.begin(), rest);
	}

	return result;
}



int Solution::rob(std::vector<int>& nums)
{
	if (nums.size() == 0)
	{
		return 0;
	}
	if (nums.size() == 1)
	{
		return nums[0];
	}
	if (nums.size() == 2)
	{
		return std::max(nums[0],nums[1]);
	}
	std::vector<int> temp(nums.size(), 0);

	temp[0] = nums[0];
	temp[1] = std::max(nums[0], nums[1]);
	for (int i = 2; i < nums.size(); i++)
	{
		temp[i] = std::max(nums[i] + temp[i - 2], temp[i - 1]);
	}
	return temp[nums.size() - 1];

}

bool Solution::isHappy(int n) {
	std::vector<int> nums;
	int sum = n;
	while (true) {
		std::string number = std::to_string(sum);
		sum = 0;
		for (int i=0; i < number.length(); i++) {
			sum += (number[i] % 48) * (number[i] % 48);
		}
		if (sum == 1) {
			return true;
		}
		if (std::find(nums.begin(), nums.end(), sum) != nums.end()) {
			return false;
		}
		nums.push_back(sum);
	}
	return false;
}


std::string Solution::shortestPalindrome(std::string s) {
	std::string rev = s;
	std::reverse(rev.begin(), rev.end());
	for (size_t i = 0; i < s.size(); i++) {
		if (s.substr(0, s.size()-i) == rev.substr(i)) {
			return rev.substr(0,i) + s;
		}
	}
	return "";
}