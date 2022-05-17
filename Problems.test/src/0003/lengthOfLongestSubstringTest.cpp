#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		TEST_CLASS(LengthOfLongestSubstring)
		{
		public:
			Solution solution;

			TEST_METHOD(Example1)
			{
				Assert::AreEqual(solution.lengthOfLongestSubstring("abcabcbb"), 3);
			}

			TEST_METHOD(Example2)
			{
				Assert::AreEqual(solution.lengthOfLongestSubstring("bbbbb"), 1);
			}

			TEST_METHOD(Example3)
			{
				Assert::AreEqual(solution.lengthOfLongestSubstring("pwwkew"), 3);
			}

			TEST_METHOD(Test1)
			{
				Assert::AreEqual(solution.lengthOfLongestSubstring("aabaab!bb"), 3);
			}
		};
	}
}