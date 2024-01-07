#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(PermuteUnique)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 1, 2 };
					std::vector<std::vector<int>> expected = {
						{ 1, 1, 2 }, { 1, 2, 1 }, { 2, 1, 1 } };
					std::vector<std::vector<int>> actual = solution.permuteUnique(nums);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 1, 2, 3 };
					std::vector<std::vector<int>> expected = {
						{ 1, 2, 3 }, { 1, 3, 2 }, { 2, 1, 3 },
						{ 2, 3, 1 }, { 3, 1, 2 }, { 3, 2, 1 } };
					std::vector<std::vector<int>> actual = solution.permuteUnique(nums);
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