#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(RomanToInt)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(3, solution.romanToInt("III"));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(58, solution.romanToInt("LVIII"));
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(1994, solution.romanToInt("MCMXCIV"));
				}
			};
		}
	}
}