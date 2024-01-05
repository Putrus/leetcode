#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Reverse)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(321, solution.reverse(123));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(-321, solution.reverse(-123));
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(21, solution.reverse(120));
				}

				TEST_METHOD(MaxInt)
				{
					Assert::AreEqual(0, solution.reverse(INT_MAX));
				}
			};
		}
	}
}