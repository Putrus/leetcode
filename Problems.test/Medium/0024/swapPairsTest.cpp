#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(SwapPairs)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					ListNode* head = new ListNode({ 1, 2, 3, 4 });
					std::vector<int> expected = { 2, 1, 4, 3 };
					ListNode* actual = solution.swapPairs(head);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}

				TEST_METHOD(Example2)
				{
					ListNode* head = nullptr;
					std::vector<int> expected = {};
					ListNode* actual = solution.swapPairs(head);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}

				TEST_METHOD(Example3)
				{
					ListNode* head = new ListNode(1);
					std::vector<int> expected = { 1 };
					ListNode* actual = solution.swapPairs(head);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}

				TEST_METHOD(MyTest1)
				{
					ListNode* head = new ListNode({ 1, 2, 3, 4, 5 });
					std::vector<int> expected = { 2, 1, 4, 3, 5 };
					ListNode* actual = solution.swapPairs(head);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}

				TEST_METHOD(MyTest2)
				{
					ListNode* head = new ListNode({ 2, 5, 3, 4, 6, 2, 2 });
					std::vector<int> expected = { 5, 2, 4, 3, 2, 6, 2 };
					ListNode* actual = solution.swapPairs(head);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}
			};
		}
	}
}