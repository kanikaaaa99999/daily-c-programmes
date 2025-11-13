
/*1.	Declare different types of pointers (int, float, char) and initialize
 them with the addresses of variables. Print the values of both the pointers and the variables they point to.
*/


#include <stdio.h>

int main() {
    int a = 10;
    float b = 4.7;
    char c = 'K';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("The value of a is %d\n", a);
    printf("The value at pointer p1 is %d\n", *p1);
    printf("Address in p1 is %p\n\n", p1);

    printf("The value of b is %.2f\n", b);
    printf("The value at pointer p2 is %.2f\n", *p2);
    printf("Address in p2 is %p\n\n", p2);

    printf("The value of c is %c\n", c);
    printf("The value at pointer p3 is %c\n", *p3);
    printf("Address in p3 is %p\n", p3);

    return 0;
}


/*

The value of a is 10
The value at pointer p1 is 10
Address in p1 is 0061FF10

The value of b is 4.70
The value at pointer p2 is 4.70
Address in p2 is 0061FF0C

The value of c is K
The value at pointer p3 is K
Address in p3 is 0061FF0B

*/