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

    for (int i = 0; i < 100; i++){
        if (randnums[i] == 1){
            ones++;
        }
        if (randnums[i] == 2){
            twos++;
        }
        if (randnums[i] == 3){
            threes++;
        }
        if (randnums[i] == 4){
            fours++;
        }
        if (randnums[i] == 5){
            fives++;
        }
        if (randnums[i] == 6){
            six++;
        }

        sum+=randnums[i];
    }

    float mid = sum / 100.0; 

    printf("%d\n", ones);
    printf("%d\n", twos);
    printf("%d\n", threes);
    printf("%d\n", fours);
    printf("%d\n", fives);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f\n", mid);


    

    return 0;
}
