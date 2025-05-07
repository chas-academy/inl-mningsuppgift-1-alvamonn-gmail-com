#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int randnums[100];

    for (int i = 0; i < 100; i++){
        randnums[i] = (rand() % 6) + 1;
    }

    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int six = 0;
    int sum = 0;
    

    return 0;
}
