#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(MyPow)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(1024.0, solution.myPow(2.0, 10));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(9.261, solution.myPow(2.1, 3));
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(0.25, solution.myPow(2.0, -2));
				}
			};
		}
	}
}