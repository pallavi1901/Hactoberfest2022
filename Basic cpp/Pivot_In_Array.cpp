#include <iostream>
using namespace std;

int getPivot (int *nums, int n)
{
  int s, e;
  s = 0;
  e = n - 1;
  while (s < e)
    {
      int mid = s + (e - s) / 2;
      if (nums[mid] >= nums[0])
	{
	  s = mid + 1;
	}
      else
	{
	  e = mid;
	}
    }
  return s;
}

  int main ()
  {     
      int nums[5] = {3,4,5,1,2};
      
      cout << getPivot(nums, 5);

    return 0;
  }