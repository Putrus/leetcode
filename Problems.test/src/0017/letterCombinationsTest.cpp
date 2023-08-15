#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(LetterCombinations)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::string> expected = { "ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf" };
					Assert::IsTrue(expected == solution.letterCombinations("23"));
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::string> expected = { "a", "b", "c" };
					Assert::IsTrue(expected == solution.letterCombinations("2"));
				}
			};
		}
	}
}