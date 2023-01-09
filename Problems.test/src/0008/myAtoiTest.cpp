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
					Assert::AreEqual(solution.myAtoi("42"), 42);
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(solution.myAtoi("   -42"), -42);
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(solution.myAtoi("4193 with words"), 4193);
				}

				TEST_METHOD(WordsAnd987)
				{
					Assert::AreEqual(solution.myAtoi("words and 987"), 0);
				}

				TEST_METHOD(BigNegative)
				{
					Assert::AreEqual(solution.myAtoi("-91283472332"), INT_MIN);
				}

				TEST_METHOD(PositiveNegative)
				{
					Assert::AreEqual(solution.myAtoi("+-12"), 0);
				}

				TEST_METHOD(Strange1)
				{
					Assert::AreEqual(solution.myAtoi("00000-42a1234"), 0);
				}

				TEST_METHOD(Strange2)
				{
					Assert::AreEqual(solution.myAtoi("   +0 123"), 0);
				}

				TEST_METHOD(Strange3)
				{
					Assert::AreEqual(solution.myAtoi("  +  413"), 0);
				}

				TEST_METHOD(Strange4)
				{
					Assert::AreEqual(solution.myAtoi(" ++1"), 0);
				}

				TEST_METHOD(MonsterNumber)
				{
					Assert::AreEqual(solution.myAtoi("20000000000000000000"), INT_MAX);
				}
			};
		}
	}
}