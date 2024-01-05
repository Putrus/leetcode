#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(RemoveNthFromEnd)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					ListNode* head = new ListNode({ 1, 2, 3, 4, 5 });
					std::vector<int> expected = { 1, 2, 3, 5 };
					ListNode* actual = solution.removeNthFromEnd(head, 2);
					Assert::IsTrue(actual == expected);
					delete actual;
				}

				TEST_METHOD(Example2)
				{
					ListNode* head = new ListNode({ 1 });
					std::vector<int> expected = { };
					ListNode* actual = solution.removeNthFromEnd(head, 1);
					Assert::IsTrue(actual == expected);
					delete actual;
				}

				TEST_METHOD(Example3)
				{
					ListNode* head = new ListNode({ 1, 2 });
					std::vector<int> expected = { 1 };
					ListNode* actual = solution.removeNthFromEnd(head, 1);
					Assert::IsTrue(actual == expected);
					delete actual;
				}

				TEST_METHOD(MyTest1)
				{
					ListNode* head = new ListNode({ 1, 2 });
					std::vector<int> expected = { 2 };
					ListNode* actual = solution.removeNthFromEnd(head, 2);
					Assert::IsTrue(actual == expected);
					delete actual;
				}
			};
		}
	}
}