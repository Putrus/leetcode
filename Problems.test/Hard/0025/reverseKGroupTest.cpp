#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(ReverseKGroup)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					ListNode* head = new ListNode({ 1, 2, 3, 4, 5 });
					std::vector<int> expected = { 2, 1, 4, 3, 5 };
					ListNode* actual = solution.reverseKGroup(head, 2);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}

				TEST_METHOD(Example2)
				{
					ListNode* head = new ListNode({ 1, 2, 3, 4, 5 });
					std::vector<int> expected = { 3, 2, 1, 4, 5 };
					ListNode* actual = solution.reverseKGroup(head, 3);
					Assert::IsTrue(actual == expected);
					delete actual;
					delete head;
				}
			};
		}
	}
}