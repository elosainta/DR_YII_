#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void myPrinter(int i);
int sum(int a, int b);
void i_charDisplay(char a ,char b);

int main(){
    
    // variable types
    // int, long , double, char, char[], boolean
    int i = 1;
    char c = 'A';
    char name[30] = "Edrian";
    double d = 999.99;

    // placeholder  %d (decimal), %c (char)
    printf("%d. The result that %s gets for CSC305 is %c. His mark is:%0.2f" + i, name, c);
    myPrinter(2002);
    printf("sum of 1 and 2 is: %d, ", sum(1,2));
    // functions
    return 0;
}

void myPrinter(int i){
    if(i % 2 == 0){
        printf("You passed in an even number");
    }
    else 
        printf("You passed in an odd  ");
}

int sum(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}
void charDisplay(char a, char b){
    for( a; a<=b; a++){
        printf("a: %d\n");
    }
}