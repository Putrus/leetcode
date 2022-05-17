#pragma once

#include <vector>

//Needed in:
//2. Add Two Numbers 

struct ListNode
{
   int val;
   ListNode* next;

   ListNode();
   ListNode(int x);
   ListNode(int x, ListNode* next);
   ListNode(std::vector<int> values);

   virtual ~ListNode();

   friend bool operator==(const ListNode* l, const std::vector<int>& v);
};