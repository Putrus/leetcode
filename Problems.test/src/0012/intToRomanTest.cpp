#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(IntToRoman)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::IsTrue("III" == solution.intToRoman(3));
				}

				TEST_METHOD(Example2)
				{
					Assert::IsTrue("LVIII" == solution.intToRoman(58));
				}

				TEST_METHOD(Example3)
				{
					Assert::IsTrue("MCMXCIV" == solution.intToRoman(1994));
				}
			};
		}
	}
}