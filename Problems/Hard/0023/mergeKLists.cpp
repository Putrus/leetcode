#include "../../Solution/include/Solution.h"

/*
Runtime: 337 ms, faster than 6.38% of C++ online submissions for Merge k Sorted Lists.

Memory Usage: 14.16 MB, less than 36.28% of C++ online submissions for Merge k Sorted Lists.
*/

ListNode* Solution::mergeKLists(std::vector<ListNode*>& lists)
{
   std::vector<ListNode*> its = lists;
   ListNode* merged = nullptr;
   ListNode* mergedIt = nullptr;
   while (std::find_if(its.begin(), its.end(), [](const auto& listNode) { return listNode != nullptr; }) != its.end())
   {
      auto min = std::min_element(its.begin(), its.end(),
         [](const auto& lhs, const auto& rhs)
         {
            return (lhs && !rhs) || (lhs && lhs->val < rhs->val);
         });
      if (merged == nullptr)
      {
         merged = new ListNode((*min)->val);
         mergedIt = merged;
      }
      else
      {
         mergedIt->next = new ListNode((*min)->val);
         mergedIt = mergedIt->next;
      }
      (*min) = (*min)->next;
   }
   return merged;
}