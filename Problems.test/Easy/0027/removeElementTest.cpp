#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

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
					int result = solution.removeElement(nums, 3);
					Assert::AreEqual(2, result);
					std::vector<int> expected = { 2, 2 };
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
					int result = solution.removeElement(nums, 2);
					Assert::AreEqual(5, result);
					std::vector<int> expected = { 0, 1, 4, 0, 3 };
					for (size_t i = 0; i < expected.size(); ++i)
					{
						Assert::AreEqual(nums[i], expected[i]);
					}
				}
			};
		}
	}
}