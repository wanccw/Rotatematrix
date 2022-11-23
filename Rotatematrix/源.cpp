//rotate
#include <stdio.h>
#include <stdlib.h>

int test[6] = { 1,2,3,4,5,6 };
void Reverse(int* num, int left, int right)
{
	while (left < right)
	{
		int temp = num[left];
		num[left] = num[right];
		num[right] = temp;
		left++;
		right--;
	}
}

void rotate(int* nums, int numsSize, int k)
{
	if (numsSize < k);
	{
		k %= numsSize;
	}
	Reverse(nums, 0, k - 1);
	Reverse(nums, k, numsSize - 1);
	Reverse(nums, 0, numsSize - 1);
	//return nums;
}

void main()
{
	rotate(test, 6, 8);
	for (int i = 0; i < 6; i++)
	{
		printf("%d", test[i]);
	}


}