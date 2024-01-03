#include "../../Solution/include/Solution.h"

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Nth Node From End of List.

Memory Usage: 10.83 MB, less than 98.83% of C++ online submissions for Remove Nth Node From End of List.
*/

ListNode* Solution::removeNthFromEnd(ListNode* head, int n)
{
   if (!head)
   {
      return nullptr;
   }

   ListNode* current = head;
   ListNode* previous = nullptr;
   int listSize = 0;
   while (current)
   {
      ++listSize;
      current = current->next;
   }

   current = head;
   for (int i = 0; i < listSize - n; ++i)
   {
      previous = current;
      current = current->next;
      if (!current)
      {
         break;
      }
   }

   if (previous && current)
   {
      previous->next = current->next;
      current->next = nullptr;
   }


   if (listSize - n == 0)
   {
      head = head->next;
   }

   if (current && current != head)
   {
      if (current->next)
      {
         current->next = nullptr;
      }
      delete current;
      current = nullptr;
   }

   return head;
}