#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	std::vector<std::string> str;
	str.push_back("c");
	str.push_back("c");
	//str.push_back("float");
	//std::cout << "\n" << solution.longestCommonPrefix(str);
	
	std::cout << "\n" << solution.isValid("]");
	ListNode* node = new ListNode(5);
	node->next = new ListNode(6);
	node->next->next = new ListNode(7);
	solution.mergeTwoLists(node, node);
}