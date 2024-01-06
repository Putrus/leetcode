#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(RemoveDuplicates)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 1, 2 };
					int result = solution.removeDuplicates(nums);
					Assert::AreEqual(2, result);
					std::vector<int> expected = { 1, 2 };
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
					int result = solution.removeDuplicates(nums);
					Assert::AreEqual(5, result);
					std::vector<int> expected = { 0, 1, 2, 3, 4 };
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}
			};
		}
	}
}