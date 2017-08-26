#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {	   
	int* solution = (int*)malloc(2*sizeof(int)); //two element
	int i = 0;
	int j = i+1;
	for(i = 0; i < numsSize; i++){
		for(j = i+1; j < numsSize; j++){
			if(target == nums[j] + nums[i]){
				solution[0] = i;
				solution[1] = j;
			}	
		}
	}
	return solution;
	free(solution);
}


/*int main(int argc, char **argv) {
	int nums[4] = {2, 7, 11, 15};
	int numsSize = sizeof(nums)/sizeof(int); //Size of array/Size of element
	int target = 9;
	int* result = twoSum(nums, numsSize, target);
	printf("[%d, %d]\n", result[0], result[1]);
	free(result);
}*/
