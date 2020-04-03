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