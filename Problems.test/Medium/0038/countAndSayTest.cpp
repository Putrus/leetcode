#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(CountAndSay)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::string expected = "1";
					Assert::AreEqual(expected, solution.countAndSay(1));
				}

				TEST_METHOD(Example2)
				{
					std::string expected = "1211";
					Assert::AreEqual(expected, solution.countAndSay(4));
				}
			};
		}
	}
}