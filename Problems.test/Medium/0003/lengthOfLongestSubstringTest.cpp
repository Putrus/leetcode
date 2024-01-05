#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(LengthOfLongestSubstring)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					Assert::AreEqual(3, solution.lengthOfLongestSubstring("abcabcbb"));
				}

				TEST_METHOD(Example2)
				{
					Assert::AreEqual(1, solution.lengthOfLongestSubstring("bbbbb"));
				}

				TEST_METHOD(Example3)
				{
					Assert::AreEqual(3, solution.lengthOfLongestSubstring("pwwkew"));
				}

				TEST_METHOD(Test1)
				{
					Assert::AreEqual(3, solution.lengthOfLongestSubstring("aabaab!bb"));
				}
			};
		}
	}
}