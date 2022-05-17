#include "../../Solution/include/Solution.h"

#include "../../Structs/include/ListNode.h"

/*
Runtime: 35 ms, faster than 82.45% of C++ online submissions for Add Two Numbers.

Memory Usage: 71.4 MB, less than 81.82% of C++ online submissions for Add Two Numbers.
*/

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
   ListNode* lhs = l1;
   ListNode* rhs = l2;
   ListNode* iterator = nullptr;
   ListNode* result = nullptr;

   bool first = true;
   int rest = 0;
   int val = 0;
   while (lhs != nullptr || rhs != nullptr || rest != 0) {
      if (lhs && rhs) {
         val = lhs->val + rhs->val + rest;
      }
      else if(lhs) {
         val = lhs->val + rest;
      }
      else if(rhs){
         val = rhs->val + rest;
      }
      else {
         val = rest;
      }
      rest = val / 10;
      val %= 10;

      //first iteration
      if (first) {
         iterator = new ListNode(val);
         result = iterator;
         first = false;
      }
      else {
         iterator->next = new ListNode(val);
         iterator = iterator->next;
      }

      //next iteration
      lhs = (lhs) ? lhs->next : nullptr;
      rhs = (rhs) ? rhs->next : nullptr;
   }
   return result;
}
