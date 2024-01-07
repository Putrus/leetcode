#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Permute)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<int> nums = { 1, 2, 3 };
					std::vector<std::vector<int>> expected = {
						{ 1, 2, 3 }, { 1, 3, 2 }, { 2, 1, 3 },
						{ 2, 3, 1 }, { 3, 1, 2 }, { 3, 2, 1 } };
					std::vector<std::vector<int>> actual = solution.permute(nums);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<int> nums = { 0, 1 };
					std::vector<std::vector<int>> expected = { { 0, 1 }, { 1, 0 } };
					std::vector<std::vector<int>> actual = solution.permute(nums);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& e : expected)
					{
						Assert::IsTrue(std::find(actual.begin(), actual.end(), e) != actual.end());
					}
				}

				TEST_METHOD(Example3)
				{
					std::vector<int> nums = { 1 };
					std::vector<std::vector<int>> expected = { { 1 } };
					std::vector<std::vector<int>> actual = solution.permute(nums);
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