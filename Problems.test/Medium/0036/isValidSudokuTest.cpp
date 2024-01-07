#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		namespace Medium
		{
			TEST_CLASS(IsValidSudoku)
			{
			public:
				Solution solution;

				TEST_METHOD(Example1)
				{
					std::vector<std::vector<char>> board = {
						{ '5', '3', '.', '.', '7', '.', '.', '.', '.' },
						{ '6', '.', '.', '1', '9', '5', '.', '.', '.' },
						{ '.', '9', '8', '.', '.', '.', '.', '6', '.' },
						{ '8', '.', '.', '.', '6', '.', '.', '.', '3' },
						{ '4', '.', '.', '8', '.', '3', '.', '.', '1' },
						{ '7', '.', '.', '.', '2', '.', '.', '.', '6' },
						{ '.', '6', '.', '.', '.', '.', '2', '8', '.' },
						{ '.', '.', '.', '4', '1', '9', '.', '.', '5' },
						{ '.', '.', '.', '.', '8', '.', '.', '7', '9' } };
					Assert::IsTrue(solution.isValidSudoku(board));
				}

				TEST_METHOD(Example2)
				{
					std::vector<std::vector<char>> board = {
						{ '8', '3', '.', '.', '7', '.', '.', '.', '.' },
						{ '6', '.', '.', '1', '9', '5', '.', '.', '.' },
						{ '.', '9', '8', '.', '.', '.', '.', '6', '.' },
						{ '8', '.', '.', '.', '6', '.', '.', '.', '3' },
						{ '4', '.', '.', '8', '.', '3', '.', '.', '1' },
						{ '7', '.', '.', '.', '2', '.', '.', '.', '6' },
						{ '.', '6', '.', '.', '.', '.', '2', '8', '.' },
						{ '.', '.', '.', '4', '1', '9', '.', '.', '5' },
						{ '.', '.', '.', '.', '8', '.', '.', '7', '9' } };
					Assert::IsFalse(solution.isValidSudoku(board));
				}
			};
		}
	}
}