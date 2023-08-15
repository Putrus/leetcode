#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(ThreeSum)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { -1, 0, 1, 2, -1, -4 };
					std::vector<std::vector<int>> expected = { { -1, -1, 2 }, { -1, 0, 1 } };
					std::vector<std::vector<int>> actual = solution.threeSum(nums);
					Assert::IsTrue(actual == expected || (actual[0] == expected[1] && actual[1] == expected[0]));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 0, 1, 1 };
					std::vector<std::vector<int>> expected = {};
					std::vector<std::vector<int>> actual = solution.threeSum(nums);
					Assert::IsTrue(actual == expected);
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 0, 0, 0 };
					std::vector<std::vector<int>> expected = { { 0, 0, 0 } };
					std::vector<std::vector<int>> actual = solution.threeSum(nums);
					Assert::IsTrue(actual == expected);
				}
			};
		}
	}
}