#include <stdio.h>
#include <stdlib.h>

void sum(int *a){   // pass by value
    *a+b;
}
int main(){
    int myInt = 0;
    int *myIntPtr = &myInt; // Pointer pointing the address
    printf("The address of int %d is %d", myInt, myIntPtr);
    printf("The value of the pointer is: %d", myIntPtr);
    myInt =
    printf("%d", sum(1,2));
    system("pause");
    return 0;
}