#include <iostream>
#include "Solution.h"

int main()
{
	Solution solution;
	TreeNode* p2 = new TreeNode(2);
	TreeNode* p3 = new TreeNode(3);
	TreeNode* p1 = new TreeNode(1, p2, p3);
	TreeNode* q2 = new TreeNode(2);
	TreeNode* q3 = new TreeNode(3);
	TreeNode* q1 = new TreeNode(1, q2, q3);
	std::cout << solution.isSameTree(p1, q1);
	return 0;
}