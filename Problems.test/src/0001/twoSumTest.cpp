#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(TwoSum)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 2, 7, 11, 15 };
					std::vector<int> result = solution.twoSum(nums, 9);
					Assert::AreEqual(0, result[0]);
					Assert::AreEqual(1, result[1]);
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 3, 2, 4 };
					std::vector<int> result = solution.twoSum(nums, 6);
					Assert::AreEqual(1, result[0]);
					Assert::AreEqual(2, result[1]);
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 3, 3 };
					std::vector<int> result = solution.twoSum(nums, 6);
					Assert::AreEqual(0, result[0]);
					Assert::AreEqual(1, result[1]);
				}

				TEST_METHOD(EmptyNums)
				{
					std::vector<int> nums = {};
					std::vector<int> result = solution.twoSum(nums, 6);
					Assert::IsTrue(result.empty());
				}

				TEST_METHOD(EmptyResult)
				{
					std::vector<int> nums = { 2, 3, 4, 5 };
					std::vector<int> result = solution.twoSum(nums, 10);
					Assert::IsTrue(result.empty());
				}
			};
		}
	}
}