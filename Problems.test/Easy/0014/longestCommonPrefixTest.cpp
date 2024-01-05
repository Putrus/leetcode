#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Easy
		{
			TEST_CLASS(LongestCommonPrefix)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::string> arg = { "flower", "flow", "flight" };
					Assert::IsTrue("fl" == solution.longestCommonPrefix(arg));
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::string> arg = { "dog", "racecar", "car" };
					Assert::IsTrue("" == solution.longestCommonPrefix(arg));
				}
			};
		}
	}
}