#include "Solution.h"







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