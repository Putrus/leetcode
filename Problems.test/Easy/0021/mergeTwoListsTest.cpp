#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(MergeTwoLists)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					ListNode* list1 = new ListNode({ 1, 2, 4 });
					ListNode* list2 = new ListNode({ 1, 3, 4 });
					std::vector<int> expected = { 1, 1, 2, 3, 4, 4 };
					ListNode* actual = solution.mergeTwoLists(list1, list2);
					Assert::IsTrue(actual == expected);
					delete list1;
					delete list2;
					delete actual;
				}

				TEST_METHOD(Example2)
				{
					ListNode* list1 = nullptr;
					ListNode* list2 = nullptr;
					std::vector<int> expected = {};
					ListNode* actual = solution.mergeTwoLists(list1, list2);
					Assert::IsTrue(actual == expected);
					delete list1;
					delete list2;
					delete actual;
				}

				TEST_METHOD(Example3)
				{
					ListNode* list1 = nullptr;
					ListNode* list2 = new ListNode({ 0 });
					std::vector<int> expected = { 0 };
					ListNode* actual = solution.mergeTwoLists(list1, list2);
					Assert::IsTrue(actual == expected);
					delete list1;
					delete list2;
					delete actual;
				}
			};
		}
	}
}