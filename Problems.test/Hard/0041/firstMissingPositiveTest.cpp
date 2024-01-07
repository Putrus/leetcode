#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(FirstMissingPositive)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 2, 0 };
					Assert::AreEqual(3, solution.firstMissingPositive(nums));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 3, 4, -1, 1 };
					Assert::AreEqual(2, solution.firstMissingPositive(nums));
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 7, 8, 9, 11, 12 };
					Assert::AreEqual(1, solution.firstMissingPositive(nums));
				}
			};
		}
	}
}