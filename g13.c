/*Emma works as a quality control manager at a factory that produces sets of four interconnected gears. Each gear is assigned a specific value based on its size. Emma needs to ensure that the gears meet certain quality criteria before they are approved for assembly.



Given the values of four gears, check the following conditions: 

The sum of the values of the first and second gears must be exactly 10.
The absolute difference between the values of the third and fourth gears must be exactly 3.


If both conditions are met, calculate and display the product of all four gear values to determine the overall compatibility score of the set. If either condition is not met, mark the set as defective and print "Not satisfied."

Input format :
The input consists of a single line containing four space-separated integers representing the values of the four gears.

Output format :
The output prints the compatibility score of the set if the conditions are met.

The output prints "Not satisfied" if the conditions are not met.*/



#include <stdio.h>

int main() {
    int first, second, third, fourth;
    int product;

    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);

    (first + second == 10 && third - fourth == 3)                                 //3 7 6 9
        ? (product = first * second * third * fourth, printf("%d", product))     //3 7 9 6 
        : printf("Not satisfied");

    return 0;
}
