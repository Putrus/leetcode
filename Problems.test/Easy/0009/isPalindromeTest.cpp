#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(IsPalindrome)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::IsTrue(solution.isPalindrome(121));
				}

				TEST_METHOD(Example2)
				{
					Assert::IsFalse(solution.isPalindrome(-121));
				}

				TEST_METHOD(Example3)
				{
					Assert::IsFalse(solution.isPalindrome(10));
				}
			};
		}
	}
}