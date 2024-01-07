#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(CombinationSum)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> candidates = { 2, 3, 6, 7 };
					std::vector<std::vector<int>> expected = { { 2, 2, 3 }, { 7 } };
					std::vector<std::vector<int>> actual = solution.combinationSum(candidates, 7);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> candidates = { 2, 3, 5 };
					std::vector<std::vector<int>> expected = { { 2, 2, 2, 2 }, { 2, 3, 3 }, { 3, 5 } };
					std::vector<std::vector<int>> actual = solution.combinationSum(candidates, 8);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> candidates = { 2 };
					std::vector<std::vector<int>> expected = {};
					std::vector<std::vector<int>> actual = solution.combinationSum(candidates, 1);
					Assert::AreEqual(expected.size(), actual.size());
				}
			};
		}
	}
}