#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Jump)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 2, 3, 1, 1, 4 };
					Assert::AreEqual(2, solution.jump(nums));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 2, 3, 0, 1, 4 };
					Assert::AreEqual(2, solution.jump(nums));
				}
			};
		}
	}
}