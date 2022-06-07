#include "../../../Problems/solution/include/Solution.h"

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Problems
{
	namespace Test
	{
		TEST_CLASS(LongestPalindrome)
		{
		public:
			Solution solution;

			TEST_METHOD(Example1)
			{
				std::vector<int> nums1 = { 1, 3 };
				std::vector<int> nums2 = { 2 };
				Assert::AreEqual(solution.findMedianSortedArrays(nums1, nums2), 2.0);
			}

			TEST_METHOD(Example2)
			{
				std::vector<int> nums1 = { 1, 2 };
				std::vector<int> nums2 = { 3, 4 };
				Assert::AreEqual(solution.findMedianSortedArrays(nums1, nums2), 2.5);
			}
		};
	}
}