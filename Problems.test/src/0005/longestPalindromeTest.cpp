#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		TEST_CLASS(LongestPalindrome)
		{
		public:
			Solution solution;

			TEST_METHOD(Example1)
			{
				std::string result = solution.longestPalindrome("babad");
				Assert::IsTrue(result == "bab" || result == "aba");
			}

			TEST_METHOD(Example2)
			{
				std::string result = solution.longestPalindrome("cbbd");
				Assert::IsTrue(result == "bb");
			}

			TEST_METHOD(Test1)
			{
				std::string result = solution.longestPalindrome("caba");
				Assert::IsTrue(result == "aba");
			}
		};
	}
}