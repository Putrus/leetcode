#include "Solution.h"
//number 2
//Runtime: 36 ms, faster than 48.74%
//Memory usage: 71.1 MB, less than 67.58%

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