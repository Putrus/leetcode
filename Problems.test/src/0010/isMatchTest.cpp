#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(IsMatch)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::IsFalse(solution.isMatch("aa", "a"));
				}

				TEST_METHOD(Example2)
				{
					Assert::IsTrue(solution.isMatch("aa", "a*"));
				}

				TEST_METHOD(Example3)
				{
					Assert::IsTrue(solution.isMatch("ab", ".*"));
				}
			};
		}
	}
}