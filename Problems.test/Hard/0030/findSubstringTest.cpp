#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Hard
		{
			TEST_CLASS(FindSubstring)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::string> words = { "foo", "bar" };
					std::vector<int> actual = solution.findSubstring("barfoothefoobarman", words);
					std::vector<int> expected = { 0, 9 };
					Assert::AreEqual(actual.size(), expected.size());
					for (int val : expected)
					{
						Assert::IsTrue(std::find(expected.begin(), expected.end(), val) != expected.end());
					}
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::string> words = { "word", "good", "best", "word" };
					std::vector<int> actual = solution.findSubstring("wordgoodgoodgoodbestword", words);
					std::vector<int> expected = {};
					Assert::AreEqual(actual.size(), expected.size());
				}

				TEST_METHOD(Example3)
				{
					std::vector<std::string> words = { "bar", "foo", "the" };
					std::vector<int> actual = solution.findSubstring("barfoofoobarthefoobarman", words);
					std::vector<int> expected = { 6, 9, 12 };
					Assert::AreEqual(actual.size(), expected.size());
					for (int val : expected)
					{
						Assert::IsTrue(std::find(expected.begin(), expected.end(), val) != expected.end());
					}
				}
			};
		}
	}
}