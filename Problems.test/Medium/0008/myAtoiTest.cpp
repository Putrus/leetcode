#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(MyAtoi)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(42, solution.myAtoi("42"));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(-42, solution.myAtoi("   -42"));
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(4193, solution.myAtoi("4193 with words"));
				}

				TEST_METHOD(WordsAnd987)
				{
					Assert::AreEqual(0, solution.myAtoi("words and 987"));
				}

				TEST_METHOD(BigNegative)
				{
					Assert::AreEqual(INT_MIN, solution.myAtoi("-91283472332"));
				}

				TEST_METHOD(PositiveNegative)
				{
					Assert::AreEqual(0, solution.myAtoi("+-12"));
				}

				TEST_METHOD(Strange1)
				{
					Assert::AreEqual(0, solution.myAtoi("00000-42a1234"));
				}

				TEST_METHOD(Strange2)
				{
					Assert::AreEqual(0, solution.myAtoi("   +0 123"));
				}

				TEST_METHOD(Strange3)
				{
					Assert::AreEqual(0, solution.myAtoi("  +  413"));
				}

				TEST_METHOD(Strange4)
				{
					Assert::AreEqual(0, solution.myAtoi(" ++1"));
				}

				TEST_METHOD(MonsterNumber)
				{
					Assert::AreEqual(INT_MAX, solution.myAtoi("20000000000000000000"));
				}
			};
		}
	}
}