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

				TEST_METHOD(MyTest1)
				{
					Assert::AreEqual(0, solution.divide(0, 1));
				}

				TEST_METHOD(MyTest2)
				{
					Assert::AreEqual(std::numeric_limits<int>::max(), solution.divide(std::numeric_limits<int>::min(), -1));
				}

				TEST_METHOD(MyTest3)
				{
					Assert::AreEqual(0, solution.divide(-1020450018, 2091335377));
				}

				TEST_METHOD(MyTest4)
				{
					Assert::AreEqual(1000000000, solution.divide(1000000000, 1));
				}
			};
		}
	}
}