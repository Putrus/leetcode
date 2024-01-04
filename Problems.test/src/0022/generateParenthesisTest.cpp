#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(GenerateParenthesis)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::string> expected = { "((()))", "(()())", "(())()", "()(())", "()()()" };
					std::vector<std::string> actual = solution.generateParenthesis(3);
					Assert::IsTrue(expected.size() == actual.size());
					for (const auto& a : actual)
					{
						Assert::IsTrue(std::find(expected.begin(), expected.end(), a) != expected.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::string> expected = { "()" };
					std::vector<std::string> actual = solution.generateParenthesis(1);
					Assert::IsTrue(expected == actual);
				}
			};
		}
	}
}