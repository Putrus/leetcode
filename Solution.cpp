#include "Solution.h"
//number 1
/*
Given an array of integers, return INDICES of the two numbers such
that they add up to specific target.

You may assume that each input would have EXACTLY one solution, and
you may not use the same element twice

EXAMPLE:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0,1].
*/
std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
for (int i = 0; i < nums.size() - 1; i++)
{
	for (int j = i + 1; j < nums.size(); j++)
	{
		if ((nums[i] + nums[j]) == target)
		{
			std::cout << "Result = [" << i << ", " << j << "]\n";
			return { i,j };
		}
	}
}
throw std::invalid_argument("No two sum solution");
}
//number 2
/*
You are given two NON-EMPTY linked lists representing two
non-negative integers. The digits are stored in REVERSE
ORDER and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading
zero, except the number 0 itself.

EXAMPLE
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807
*/
ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* result = new ListNode(0);
	struct ListNode* temp = result;
	int carry = 0;
	int a = 0, b = 0;
	while (l1 != NULL || l2 != NULL || carry == 1)
	{
		if (l1 == NULL)
		{
			a = 0;
		}
		else
		{
			a = l1->val;
		}
		if (l2 == NULL)
		{
			b = 0;
		}
		else
		{
			b = l2->val;
		}

		temp->val = (a + b + carry) % 10;
		carry = (a + b + carry) / 10;

		if (l1 != NULL)
		{
			l1 = l1->next;
		}
		if (l2 != NULL)
		{
			l2 = l2->next;
		}
		if (l1 != NULL || l2 != NULL || carry == 1)
		{
			struct ListNode* help = new ListNode(0);
			temp->next = help;
			temp = temp->next;
		}



	}
	return result;

}
	

/*Given a string, find the length of the longest substring
without repeating characters

EXAMPLE:
Input: "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3

EXAMPLE 2:
Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1

EXAMPLE 3:
Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Note that the answer must be substring
"pwke" is a subsequence and not a substring */

int Solution::lengthOfLongestSubstring(std::string s)
{
	int counter = 0;
	int result = 0;
	int where_i_start = 0;
	int i = 0;
	std::vector<int> ascii(128, -1);
	while(i<s.length())
	{
		if (ascii[s[i]] == -1)
		{
			ascii[s[i]] = s[i];
			counter++;
			if (counter > result)
			{
				result = counter;
			}
			i++;
			continue;
		}
		else
		{
			std::fill(ascii.begin(), ascii.end(), -1);
			i = where_i_start + 1;
			where_i_start = i;
			counter = 0;
		}
	}
	return result;
}


/*There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0

Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

*/

float Solution::findMedianSortedArrays(std::vector<int> nums1, std::vector <int> nums2)
{
	if (nums1.size() != 0 || nums2.size() != 0)
	{
		nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
		sort(nums1.begin(), nums1.end());

	if (nums1.size() % 2 != 0)
	{
		return float(nums1[nums1.size() / 2]);
	}
	else
	{
		return (float(nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2);
	}
	}
	return 0;
}

/*
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:

Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Example 2:

Input: "cbbd"
Output: "bb"
*/

std::string Solution::longestPalindrome(std::string s)
{
	if (s.length() <= 1000)
	{
		int len = s.length();
		int max = 1;
		int l, r, start = 0;
		std::string result = "";
		for (int i = 1; i < len; i++)
		{
			l = i - 1;
			r = i;
			while (l>=0 && r<len && s[l] == s[r]) 
			{
				if (r - l + 1 > max)
				{
					max = r - l + 1;
					start = l;
				}
				l--;
				r++;
			}
			

			l = i - 1;
			r = i + 1;
			while (l >= 0 && r < len && s[l] == s[r]) {
				if (r - l + 1 > max) {
					max = r - l + 1;
					start = l;
				}
				l--;
				r++;
			}
		}
		for (int k = start; k < start + max; k++)
		{
			result.push_back(s[k]);
		}
		return result;
	}
	return 0;
}


/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I

*/

std::string Solution::convert(std::string s, int numRows)
{
	std::string result;
	result = "";
	//zmienna ktora mowi gdzie sie aktualnie znajduje
	int place = 0;
	int temp = 0;
	if (numRows == 1)
	{
		return s;
	}
	else
	{
		for (int i = 0; i < numRows; i++)
		{
			if (i == 0 || i == (numRows)-1)
			{
				while (place < s.length())
				{
					result.push_back(s[place]);
					place += (2 * (numRows - 1));
				}
			}
			else
			{
				while (place < s.length())
				{
					result.push_back(s[place]);
					if ((place + (2 * (numRows - 1)) - temp) < s.length())
					{
						result.push_back(s[place + (2 * (numRows - 1)) - temp]);
					}
					place += (2 * (numRows - 1));
				}
			}
			place = i + 1;
			temp += 2;
		}
	}
	return result;
}


/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321

Example 2:

Input: -123
Output: -321

Example 3:

Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

int Solution::reverse(int x) {
	int result = 0;
	int ok = 0;
	int temp_x = -1*x;
	std::string str_x = std::to_string(temp_x);
	std::string temp = "";
	
	for (int i = (str_x.length() - 1); i >= 0; i--)
	{
		if(str_x[i] == '0' && ok == 0)
		{
			continue;
		}
			ok = 1;
			temp.push_back(str_x[i]);
	}
	result = std::stoi(temp);
	result *= x / abs(x);
	if ((result < 0 && x > 0) || (result > 0 && x < 0))
	{
		return 0;
	}
	return result;
}

/*Implement atoi which converts a string to an integer.

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned.*/


//45 -
//48 <= 57 0-9
int Solution::myAtoi(std::string str) {
	int result = 0;
	int sign = 1;
	bool is_number = false;
	for (char& c : str)
	{

		if (c == ' ' && is_number == false)
		{
			continue;
		}
		else if (!((c >= 48 && c <= 57) || c == 45 || c == '+') && is_number == false)
		{
			return 0;
		}
		else if (c == '-' && is_number == false)
		{
			sign = -1;
			is_number = true;
		}
		else if (c == '+' && is_number == false)
		{
			sign = 1;
			is_number = true;
		}
		else if ((!((c >= 48 && c <= 57))) && is_number == true)
		{
			break;
		}
		else if ((c >= 48 && c <= 57))
		{
			is_number = true;

			if (sign * result > 214748364)
			{
				if (sign == -1)
				{
					return (-2147483647) - 1;
				}
				return  2147483647;
			}
			else if (sign * result == 214748364)
			{
				if (c >= '7' && sign == 1)
				{
					return 2147483647;
				}
				else if (c >= '8' && sign == -1)
				{
					return (-2147483647) - 1;
				}
			}
			result = result * 10 + sign * (c - 48);
		}

		if (result > 0 && sign == -1)
		{
			return (-2147483647) - 1;
		}
		if (result < 0 && sign == 1)
		{
			return 2147483647;
		}
	}
	return result;
}

/*Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true

Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Follow up:

Coud you solve it without converting the integer to a string?
*/
bool Solution::isPalindrome(int x) {

	int i = 1000000000;
	int j = 10;
	int tempLeft = 0;
	int tempRight = 0;
	if (x < 0)
	{
		return false;
	}
	else if (x == 0)
	{
		return true;
	}
	else if (x % 10 == 0)
	{
		return false;
	}
	else
	{
		while (i >= j)
		{
			if (x % i == x)
			{
				i /= 10;
				continue;
			}
			else
			{
				
				if (i == 1000000000)
				{
					tempLeft = ((x - x % i) / i);
				}
				else
				{
					tempLeft = ((x - x % i - (x - x % (i * 10))) / i);
				}
				tempRight = ((x % j) - (x % (j/10)))/(j/10);
				if (tempLeft == tempRight)
				{
					i /= 10;
					j *= 10;
					continue;
				}
				else
				{
					return false;
				}

			}

		}
	}
	return true;

}

/*Given an input string (s) and a pattern (p), implement regular expression matching with support for '.' and '*'.

'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

Note:

    s could be empty and contains only lowercase letters a-z.
    p could be empty and contains only lowercase letters a-z, and characters like . or *.

Example 1:

Input:
s = "aa"
p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".

Example 2:

Input:
s = "aa"
p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

Example 3:

Input:
s = "ab"
p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".

Example 4:

Input:
s = "aab"
p = "c*a*b"
Output: true
Explanation: c can be repeated 0 times, a can be repeated 1 time. Therefore, it matches "aab".

Example 5:

Input:
s = "mississippi"
p = "mis*is*p*."
Output: false

*/
bool Solution::isMatch(std::string s, std::string p) {

	
	int j = 0;
	char starSign = ' ';
	for (int i = 0; i < s.length(); i++)
	{
		std::cout << "p[j] == " << p[j] << std::endl;
		if (p[j+1] == '*')
		{
			starSign = p[j];
			while (s[i] == starSign)
			{
				std::cout << "s[i] = " << s[i] << std::endl;
				i++;
			}
			j+=2;
		}
		
		
	}
	return true;
}



int Solution::maxArea(std::vector<int>& height)
{
	//brute force, ale za wolne dla leetcode
	/*int max = 0;

	for (int i = 0; i < height.size(); i++)
	{
		for (int j = i+1; j < height.size(); j++)
		{
			if (height[i] < height[j])
			{
				if (height[i] * (j - i) > max)
				{
					max = height[i] * (j - i);
				}
			}
			else
			{
				if (height[j] * (j - i) > max)
				{
					max = height[j] * (j - i);
				}
			}
		}



	}
	return max;*/

	//lepszy algorytm

	int max = 0;

	int i = 0;
	int j = height.size() - 1;
	while (i != j)
	{
		if (height[i] <= height[j])
		{
			if (height[i] * (j - i) > max)
			{
				max = height[i] * (j - i);
			}
			i++;
		}
		else
		{
			if (height[j] * (j - i) > max)
			{
				max = height[j] * (j - i);
			}
			j--;
		}
	}


	return max;

}







/*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:

Input: "III"
Output: 3

Example 2:

Input: "IV"
Output: 4

Example 3:

Input: "IX"
Output: 9

Example 4:

Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

Example 5:

Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

*/
int Solution::romanToInt(std::string s)
{
	int result = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i != s.size() - 1)
		{
			if (s[i] == 'I' && s[i + 1] == 'V')
			{
				result += 4;
				i++;
				continue;
			}
			if (s[i] == 'I' && s[i + 1] == 'X')
			{
				result += 9;
				i++;
				continue;
			}
			if (s[i] == 'X' && s[i + 1] == 'L')
			{
				result += 40;
				i++;
				continue;
			}
			if (s[i] == 'X' && s[i + 1] == 'C')
			{
				result += 90;
				i++;
				continue;
			}
			if (s[i] == 'C' && s[i + 1] == 'D')
			{
				result += 400;
				i++;
				continue;
			}
			if (s[i] == 'C' && s[i + 1] == 'M')
			{
				result += 900;
				i++;
				continue;
			}
		}
		if (s[i] == 'I')
		{
			result += 1;
			continue;
		}
		if (s[i] == 'V')
		{
			result += 5;
			continue;
		}
		if (s[i] == 'X')
		{
			result += 10;
		}
		if (s[i] == 'L')
		{
			result += 50;
			continue;
		}
		if (s[i] == 'C')
		{
			result += 100;
			continue;
		}
		if (s[i] == 'D')
		{
			result += 500;
			continue;
		}
		if (s[i] == 'M')
		{
			result += 1000;
			continue;
		}

	}


	return result;
}

/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Note:

All given inputs are in lowercase letters a-z.
*/
std::string Solution::longestCommonPrefix(std::vector<std::string>& strs)
{
	
	std::string result = "";
	if (strs.size() > 1 && strs[0]!="")
	{
		int charN = 0;
		bool ok = true;

		while (ok)
		{
			for (int i = 1; i < strs.size(); i++)
			{
				if (strs[0][charN] != strs[i][charN] || strs[0].length() <= charN || strs[i].length() <= charN)
				{
					ok = false;
					break;
				}
			}
			if (ok == false)
			{
				break;
			}
			result.push_back(strs[0][charN]);
			charN++;
		}
	}
	else if (strs.size() == 1)
	{
		result = strs[0];
	}

	return result;
}



std::vector<std::vector<int>> threeSum(std::vector<int>& nums) 
{	
	//brute force
	/*std::vector<std::vector<int>> result;
	bool ok = true;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i+1; j < nums.size(); j++)
		{
			for (int k = j + 1; k < nums.size(); k++)
			{
				if (nums[i] + nums[j] + nums[k] == 0)
				{
					std::vector<int> temp_result;
					temp_result.push_back(nums[i]);
					temp_result.push_back(nums[j]);
					temp_result.push_back(nums[k]);
					std::sort(temp_result.begin(), temp_result.end());
					for (int n = 0; n < result.size(); n++)
					{
						if (temp_result[0] == result[n][0] && temp_result[1] == result[n][1] && temp_result[2] == result[n][2])
						{
							ok = false;
							break;
						}
						ok = true;
					}
					if (ok == true)
					{
						result.push_back(temp_result);
						ok = false;
					}
				}
			}
		}
	}


	return result;*/

	std::vector<std::vector<int>> arr;
	int n = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n - 2; i++)
	{
		if (i > 0 && nums[i - 1] == nums[i])
		{
			continue;
		}
		int j = i + 1;
		int k = n - 1;
		while (j < k)
		{
			int sum = nums[j] + nums[k];
			if (sum == -nums[i])
			{
				arr.push_back({ nums[i],nums[j],nums[k] });
				while (j < k && nums[j] == nums[j + 1]) j++;
				while (j < k && nums[k] == nums[k - 1]) k--;
				j++, k--;
			}
			else if (sum > -nums[i])
			{
				k--;
			}
			else
			{
				j++;
			}
		}
	}
	return arr;
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