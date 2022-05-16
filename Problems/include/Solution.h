#pragma once

#include "Structs.h"

#include <vector>

class Solution {
public:
   //1. Two Sum
   std::vector<int> twoSum(std::vector<int>& nums, int target);
	//2. Add Two Numbers
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};