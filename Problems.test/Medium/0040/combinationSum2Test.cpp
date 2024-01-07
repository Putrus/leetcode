#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(CombinationSum2)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> candidates = { 10, 1, 2, 7, 6, 1, 5 };
					std::vector<std::vector<int>> expected = { { 1, 1, 6 }, { 1, 2, 5 }, { 1, 7 }, { 2, 6 } };
					std::vector<std::vector<int>> actual = solution.combinationSum2(candidates, 8);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> candidates = { 2, 5, 2, 1, 2 };
					std::vector<std::vector<int>> expected = { { 1, 2, 2 }, { 5 } };
					std::vector<std::vector<int>> actual = solution.combinationSum2(candidates, 5);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}
			};
		}
	}
}