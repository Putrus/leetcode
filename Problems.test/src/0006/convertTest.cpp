#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(Convert)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::string result = solution.convert("PAYPALISHIRING", 3);
					Assert::IsTrue("PAHNAPLSIIGYIR" == result);
				}

				TEST_METHOD(Example2)
				{
					std::string result = solution.convert("PAYPALISHIRING", 4);
					Assert::IsTrue("PINALSIGYAHRPI" == result);
				}

				TEST_METHOD(A1)
				{
					std::string result = solution.convert("A", 1);
					Assert::IsTrue("A" == result);
				}

				TEST_METHOD(AB1)
				{
					std::string result = solution.convert("AB", 1);
					Assert::IsTrue("AB" == result);
				}
			};
		}
	}
}