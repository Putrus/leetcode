#include "../../Solution/include/Solution.h"

/*
Runtime: 2 ms, faster than 50.71% of C++ online submissions for Swap Nodes in Pairs.

Memory Usage: 8.08 MB, less than 8.42% of C++ online submissions for Swap Nodes in Pairs.
*/

ListNode* Solution::swapPairs(ListNode* head)
{
   ListNode* it = head;
   ListNode* swapped = nullptr;
   ListNode* swappedIt = nullptr;
   while (it)
   {
      if (it->next)
      {
         if (!swappedIt)
         {
            swapped = new ListNode(it->next->val);
            swapped->next = new ListNode(it->val);
            swappedIt = swapped->next;
         }
         else
         {
            swappedIt->next = new ListNode(it->next->val);
            swappedIt = swappedIt->next;
            swappedIt->next = new ListNode(it->val);
            swappedIt = swappedIt->next;
         }
         it = it->next->next;
      }
      else
      {
         if (!swappedIt)
         {
            swapped = new ListNode(it->val);
            swappedIt = swapped;
         }
         else if (!swappedIt->next)
         {
            swappedIt->next = new ListNode(it->val);
         }
         else
         {
            swappedIt->next->next = new ListNode(it->val);
         }
         it = it->next;
      }
   }
   return swapped;
}