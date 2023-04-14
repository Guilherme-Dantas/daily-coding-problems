/* 
========================= PROBLEM 1 =========================
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
 */


/*
========================= SOLUTION =========================

1. Create a empty set
2. Iterates through array executing k - currentNumber and test if the result is in the set
3. If it is, return true
4. If it is not, add the current element to the set
Total Complexity

n calculations * lg(n) searches = O(n lg(n))
The total complexity could be reduced to O(n) if a hash table were used instead of a set becaus a hash has a search complexity of O(1) on average
*/

#include <iostream>
#include <set>

using namespace std;
int main(int argc, char const *argv[])
{
    int number_list[4] = {10,15,3,7};
    int k = 17;

    // Set has lg(n) time complexity, it implements a red-black tree
    std::set<int> setSum;

    int array_size = sizeof(number_list)/sizeof(number_list[0]);

    
    for(int i = 0; i < array_size; i++)
        if(setSum.find(k - number_list[i]) != setSum.end())
            cout << true;
        else
            setSum.insert(number_list[i]);


    return true;
        
}
