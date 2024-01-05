#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(MergeKLists)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<ListNode*> lists = {
						new ListNode({ 1, 4, 5 }),
						new ListNode({ 1, 3, 4 }),
						new ListNode({ 2, 6 })
					};

					std::vector<int> expected = { 1, 1, 2, 3, 4, 4, 5, 6 };
					ListNode* actual = solution.mergeKLists(lists);
					Assert::IsTrue(actual == expected);
					for (auto& list : lists)
					{
						delete list;
					}
					delete actual;
				}

				TEST_METHOD(Example2)
				{
					std::vector<ListNode*> lists = {};
					std::vector<int> expected = {};
					ListNode* actual = solution.mergeKLists(lists);
					Assert::IsTrue(actual == expected);
					for (auto& list : lists)
					{
						delete list;
					}
					delete actual;
				}

				TEST_METHOD(Example3)
				{
					std::vector<ListNode*> lists = { nullptr };
					std::vector<int> expected = {};
					ListNode* actual = solution.mergeKLists(lists);
					Assert::IsTrue(actual == expected);
					for (auto& list : lists)
					{
						delete list;
					}
					delete actual;
				}
			};
		}
	}
}