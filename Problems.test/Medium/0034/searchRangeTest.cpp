#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(SearchRange)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 5, 7, 7, 8, 8, 10 };
					std::vector<int> expected = { 3, 4 };
					std::vector<int> actual = solution.searchRange(nums, 8);
					Assert::IsTrue(expected == actual);
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 5, 7, 7, 8, 8, 10 };
					std::vector<int> expected = { -1, -1 };
					std::vector<int> actual = solution.searchRange(nums, 6);
					Assert::IsTrue(expected == actual);
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = {};
					std::vector<int> expected = { -1, -1 };
					std::vector<int> actual = solution.searchRange(nums, 0);
					Assert::IsTrue(expected == actual);
				}
			};
		}
	}
}