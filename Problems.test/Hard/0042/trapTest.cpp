#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(Trap)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> height = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
					Assert::AreEqual(6, solution.trap(height));
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> height = { 4, 2, 0, 3, 2, 5 };
					Assert::AreEqual(9, solution.trap(height));
				}
			};
		}
	}
}