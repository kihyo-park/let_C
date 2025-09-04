#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int arr_len = 3;
    int* ptr_arr;

    ptr_arr = (int*) malloc(arr_len * sizeof(int));	// 메모리의 동적 할당 
	
	if (ptr_arr == NULL)	// 메모리의 동적 할당이 실패할 경우
	{
		printf("메모리의 동적 할당에 실패했습니다.\n");
		exit(1);
	}
	
	printf("동적으로 할당받은 메모리의 초기값은 다음과 같습니다.\n");
	for (i = 0; i < arr_len; i++)
	{
		printf("%d ", ptr_arr[i]);
	}
	
	free(ptr_arr);			// 동적으로 할당된 메모리의 반환 
	
	return 0;
}