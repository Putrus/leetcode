#include "../../Solution/include/Solution.h"

/*
Runtime: 3 ms, faster than 86.51% of C++ online submissions for Merge Two Sorted Lists.

Memory Usage: 15.30 MB, less than 10.70% of C++ online submissions for Merge Two Sorted Lists.
*/

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2)
{
   ListNode* it1 = list1;
   ListNode* it2 = list2;
   ListNode* merged = nullptr;
   ListNode* mergedIt = merged;
   while (it1 != nullptr || it2 != nullptr)
   {
      if (it1 == nullptr)
      {
         if (merged == nullptr)
         {
            merged = new ListNode(it2->val);
            mergedIt = merged;
         }
         else
         {
            mergedIt->next = new ListNode(it2->val);
            mergedIt = mergedIt->next;
         }
         it2 = it2->next;
      }
      else if (it2 == nullptr)
      {
         if (merged == nullptr)
         {
            merged = new ListNode(it1->val);
            mergedIt = merged;
         }
         else
         {
            mergedIt->next = new ListNode(it1->val);
            mergedIt = mergedIt->next;
         }
         it1 = it1->next;
      }
      else if (it1->val > it2->val)
      {
         if (merged == nullptr)
         {
            merged = new ListNode(it2->val);
            mergedIt = merged;
         }
         else
         {
            mergedIt->next = new ListNode(it2->val);
            mergedIt = mergedIt->next;
         }
         it2 = it2->next;
      }
      else
      {
         if (merged == nullptr)
         {
            merged = new ListNode(it1->val);
            mergedIt = merged;
         }
         else
         {
            mergedIt->next = new ListNode(it1->val);
            mergedIt = mergedIt->next;
         }
         it1 = it1->next;
      }
   }
   return merged;
}