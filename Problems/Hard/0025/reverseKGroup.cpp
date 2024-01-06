#include "../../Solution/include/Solution.h"

/*
Runtime: 12 ms, faster than 34.47% of C++ online submissions for Reverse Nodes in k-Group.

Memory Usage: 12.80 MB, less than 5.95% of C++ online submissions for Reverse Nodes in k-Group.
*/

ListNode* Solution::reverseKGroup(ListNode* head, int k)
{
   ListNode* it = head;
   ListNode* reversed = nullptr;
   ListNode* reversedIt = nullptr;

   while (it)
   {
      std::vector<int> toReverse;
      for (int i = 0; i < k; ++i)
      {
         if (it == nullptr)
         {
            break;
         }

         toReverse.push_back(it->val);
         it = it->next;
      }

      if (toReverse.size() != k)
      {
         for (int val : toReverse)
         {
            if (!reversed)
            {
               reversed = new ListNode(val);
               reversedIt = reversed;
            }
            else
            {
               reversedIt->next = new ListNode(val);
               reversedIt = reversedIt->next;
            }
         }
      }
      else
      {
         for (auto rIt = toReverse.rbegin(); rIt != toReverse.rend(); ++rIt)
         {
            if (!reversed)
            {
               reversed = new ListNode(*rIt);
               reversedIt = reversed;
            }
            else
            {
               reversedIt->next = new ListNode(*rIt);
               reversedIt = reversedIt->next;
            }
         }
      }
   }
   return reversed;
}