#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(LongestValidParentheses)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(2, solution.longestValidParentheses("(()"));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(4, solution.longestValidParentheses(")()())"));
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(0, solution.longestValidParentheses(""));
				}
			};
		}
	}
}