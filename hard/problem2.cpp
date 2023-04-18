/* 
========================= PROBLEM 1 =========================
Given an array of integers, return a new array such that each element at index i of the new array
is the product of all the numbers in the original array except the one at i.


========================= SOLUTION =========================

1. Get the total product multiplicating all values from array -> n runs
2. Iterates through array executing totalProduct / array[i] -> n runs
Total Complexity O(n + n) = O(n)

*/

using namespace std;
int main(int argc, char const *argv[])
{
    int original_array[] = {1,2,3,4,5};
    int total_product = 1;

    int original_array_size = sizeof(original_array)/sizeof(original_array[0]);

    for(int i = 0; i < original_array_size; i++){
        total_product = total_product * original_array[i];
    }

    int result_array[original_array_size];

    for(int i = 0; i < original_array_size; i++){
        result_array[i] = total_product / original_array[i];
    }


    return 0;
}
