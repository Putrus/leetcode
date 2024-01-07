#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Search)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 4, 5, 6, 7, 0, 1, 2 };
					Assert::AreEqual(4, solution.search(nums, 0));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 4, 5, 6, 7, 0, 1, 2 };
					Assert::AreEqual(-1, solution.search(nums, 3));
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 1 };
					Assert::AreEqual(-1, solution.search(nums, 0));
				}
			};
		}
	}
}