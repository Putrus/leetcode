#include "../../../Problems/Solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		TEST_CLASS(AddTwoNumbers)
		{
		public:
			Solution solution;

			TEST_METHOD(Example1)
			{
				ListNode* l1 = new ListNode({ 2, 4, 3 });
				ListNode* l2 = new ListNode({ 5, 6, 4 });
				ListNode* result = solution.addTwoNumbers(l1, l2);
				std::vector<int> expected_result = { 7, 0, 8 };
				Assert::IsTrue(result == expected_result);
				delete l1;
				delete l2;
				delete result;
			}

			TEST_METHOD(Example2)
			{
				ListNode* l1 = new ListNode(0);
				ListNode* l2 = new ListNode(0);
				ListNode* result = solution.addTwoNumbers(l1, l2);
				std::vector<int> expected_result = { 0 };
				Assert::IsTrue(result == expected_result);
				delete l1;
				delete l2;
				delete result;
			}

			TEST_METHOD(Example3)
			{
				ListNode* l1 = new ListNode({ 9, 9, 9, 9, 9, 9, 9 });
				ListNode* l2 = new ListNode({ 9, 9, 9, 9 });
				ListNode* result = solution.addTwoNumbers(l1, l2);
				std::vector<int> expected_result = { 8, 9, 9, 9, 0, 0, 0, 1 };
				Assert::IsTrue(result == expected_result);
				delete l1;
				delete l2;
				delete result;
			}
		};
	}
}