#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(IsWildcardMatch)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::IsFalse(solution.isWildcardMatch("aa", "a"));
				}

				TEST_METHOD(Example2)
				{
					Assert::IsTrue(solution.isWildcardMatch("aa", "*"));
				}

				TEST_METHOD(Example3)
				{
					Assert::IsTrue(solution.isWildcardMatch("cb", "?a"));
				}
			};
		}
	}
}