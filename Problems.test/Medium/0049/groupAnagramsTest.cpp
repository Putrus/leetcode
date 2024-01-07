#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(GroupAnagrams)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
					std::vector<std::vector<std::string>> expected =
						{ { "bat" }, { "nat", "tan" }, { "ate", "eat", "tea" } };
					std::vector<std::vector<std::string>> actual = solution.groupAnagrams(strs);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& group : expected)
					{
						Assert::IsTrue(std::find_if(actual.begin(), actual.end(),
							[group](const auto& g)
							{
								bool sameSize = g.size() == group.size();
								bool same = true;
								for (const auto& anagram : g)
								{
									if (std::find(group.begin(), group.end(), anagram) == group.end())
									{
										same = false;
										break;
									}
								}
								return sameSize && same;
							}) != actual.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::string> strs = { "" };
					std::vector<std::vector<std::string>> expected =
					{ { "" } };
					std::vector<std::vector<std::string>> actual = solution.groupAnagrams(strs);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& group : expected)
					{
						Assert::IsTrue(std::find_if(actual.begin(), actual.end(),
							[group](const auto& g)
							{
								bool sameSize = g.size() == group.size();
								bool same = true;
								for (const auto& anagram : g)
								{
									if (std::find(group.begin(), group.end(), anagram) == group.end())
									{
										same = false;
										break;
									}
								}
								return sameSize && same;
							}) != actual.end());
					}
				}

				TEST_METHOD(Example3)
				{
					std::vector<std::string> strs = { "a" };
					std::vector<std::vector<std::string>> expected =
					{ { "a" } };
					std::vector<std::vector<std::string>> actual = solution.groupAnagrams(strs);
					Assert::AreEqual(expected.size(), actual.size());
					for (const auto& group : expected)
					{
						Assert::IsTrue(std::find_if(actual.begin(), actual.end(),
							[group](const auto& g)
							{
								bool sameSize = g.size() == group.size();
								bool same = true;
								for (const auto& anagram : g)
								{
									if (std::find(group.begin(), group.end(), anagram) == group.end())
									{
										same = false;
										break;
									}
								}
								return sameSize && same;
							}) != actual.end());
					}
				}
			};
		}
	}
}