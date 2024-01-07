#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

#include <algorithm>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(RemoveElement)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 3, 2, 2, 3 };
					Assert::AreEqual(2, solution.removeElement(nums, 3));
					std::vector<int> expected = { 2, 2 };
					std::sort(nums.begin(), nums.begin() + expected.size());
					std::sort(expected.begin(), expected.end());
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
					Assert::AreEqual(5, solution.removeElement(nums, 2));
					std::vector<int> expected = { 0, 1, 4, 0, 3 };
					std::sort(nums.begin(), nums.begin() + expected.size());
					std::sort(expected.begin(), expected.end());
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}

				TEST_METHOD(MyTest1)
				{
					std::vector<int> nums = { 4, 5 };
					Assert::AreEqual(1, solution.removeElement(nums, 5));
					std::vector<int> expected = { 4 };
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}
			};
		}
	}
}