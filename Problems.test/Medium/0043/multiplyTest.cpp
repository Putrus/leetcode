#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Multiply)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::string expected = "6";
					Assert::AreEqual(expected, solution.multiply("2", "3"));
				}

				TEST_METHOD(Example2)
				{
					std::string expected = "56088";
					Assert::AreEqual(expected, solution.multiply("123", "456"));
				}
			};
		}
	}
}