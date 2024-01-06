#pragma once

#include <vector>

//Needed in:
//2. Add Two Numbers
//19. Remove Nth Node From End of List
//21. Merge Two Sorted Lists
//23. Merge k Sorted Lists
//24. Swap Nodes in Pairs
//25. Reverse Nodes in k-Group
struct ListNode
{
   int val;
   ListNode* next;

   ListNode();
   ListNode(int x);
   ListNode(int x, ListNode* next);
   ListNode(const std::vector<int>& values);

   virtual ~ListNode();

   friend bool operator==(const ListNode* l, const std::vector<int>& v);
};