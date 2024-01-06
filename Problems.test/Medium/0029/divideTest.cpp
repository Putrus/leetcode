#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Divide)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(3, solution.divide(10, 3));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(-2, solution.divide(7, -3));
				}
			};
		}
	}
}