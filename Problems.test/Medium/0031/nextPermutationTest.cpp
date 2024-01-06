#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(NextPermutation)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 2, 3 };
					solution.nextPermutation(nums);
					std::vector<int> expected = { 1, 3, 2 };
					Assert::IsTrue(expected == nums);
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 3, 2, 1 };
					solution.nextPermutation(nums);
					std::vector<int> expected = { 1, 2, 3 };
					Assert::IsTrue(expected == nums);
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 1, 1, 5 };
					solution.nextPermutation(nums);
					std::vector<int> expected = { 1, 5, 1 };
					Assert::IsTrue(expected == nums);
				}
			};
		}
	}
}