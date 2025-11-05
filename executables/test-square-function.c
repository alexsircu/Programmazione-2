# include <stdio.h>

int square(int num) 
{
    int ret = 0;

    if (num < 0) 
        num = -num;

    for (int i = 0; i < num; i++)
    {
        ret += num;
    }
    
    return ret;
}

void test_square(int nums[], int expected_results[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        printf("Testing square function: the number is %d and the result should be %d\n", nums[i], expected_results[i]);
        int result = square(nums[i]);

        if (result != expected_results[i]) 
            printf("Test failed: expected %d but got %d\n", expected_results[i], result);
        else 
            printf("Test passed: got expected result %d\n", result);
    }
}

int main(void) 
{
    int nums[] = {0, 1, 2, 3, 4, 5, -4, -2};
    int expected_results[] = {0, 1, 4, 9, 16, 25, 16, 4};
    int num_tests = sizeof(nums) / sizeof(nums[0]);

    test_square(nums, expected_results, num_tests);
}
