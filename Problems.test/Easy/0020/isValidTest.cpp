#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(IsValid)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::IsTrue(solution.isValid("()"));
				}

				TEST_METHOD(Example2)
				{
					Assert::IsTrue(solution.isValid("()[]{}"));
				}

				TEST_METHOD(Example3)
				{
					Assert::IsFalse(solution.isValid("(]"));
				}

				TEST_METHOD(MyTest1)
				{
					Assert::IsFalse(solution.isValid("([)]"));
				}
			};
		}
	}
}