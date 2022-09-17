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
					Assert::AreEqual(solution.reverse(123), 321);
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(solution.reverse(-123), -321);
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(solution.reverse(120), 21);
				}

				TEST_METHOD(MaxInt)
				{
					Assert::AreEqual(solution.reverse(INT_MAX), 0);
				}
			};
		}
	}
}