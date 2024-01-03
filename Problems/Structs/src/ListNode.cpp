#include "../include/ListNode.h"

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

ListNode::ListNode(const std::vector<int>& values) 
{
   if (values.empty()) 
   {
      val = 0;
   }
   else 
   {
      val = values[0];
   }
   next = nullptr;
   ListNode* it = this;
   for (size_t i = 1; i < values.size(); ++i) 
   {
      it->next = new ListNode(values[i]);
      it = it->next;
   }
}

ListNode::~ListNode() 
{
   delete this->next;
}

bool operator==(const ListNode* l, const std::vector<int>& v) 
{
   const ListNode* it = l;
   for (auto const& val : v) 
   {
      if (!it || it->val != val) 
      {
         return false;
      }
      it = it->next;
   }
   if (it) 
   {
      return false;
   }
   return true;
}