#include "Solution.h"

int Solution::climbStairs(int n) {
   int result = 0;
   recursion(result, n, 0);
   //to do
   //time limit exceeded
   return result;
}

void Solution::recursion(int& val, int& n, int currVal) {
   int cv = currVal;
   if (currVal + 1 == n) {
      ++val;
   }
   else if(currVal + 1 < n){
      ++currVal;
      recursion(val, n, currVal);
   }
   if (cv + 2 == n) {
      ++val;
   }
   else if(cv + 2 < n){
      cv += 2;
      recursion(val, n, cv);
   }
}