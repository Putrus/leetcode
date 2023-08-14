#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(MaxArea)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> arg = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
					Assert::AreEqual(49, solution.maxArea(arg));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> arg = { 1, 1 };
					Assert::AreEqual(1, solution.maxArea(arg));
				}
			};
		}
	}
}