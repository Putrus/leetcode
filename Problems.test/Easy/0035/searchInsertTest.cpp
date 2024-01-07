#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(SearchInsert)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 3, 5, 6 };
					Assert::AreEqual(2, solution.searchInsert(nums, 5));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 1, 3, 5, 6 };
					Assert::AreEqual(1, solution.searchInsert(nums, 2));
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 1, 3, 5, 6 };
					Assert::AreEqual(4, solution.searchInsert(nums, 7));
				}
			};
		}
	}
}