#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void myPrinter(int i);
int sum(int a, int b);
void charDisplay(int a ,int b);

struct product{
    char name[30];
    char product[30];
    double price;
};                          // every structs, must end with semicolons

int main(){
    struct product myProduct[100];
    strcpy(myProduct[0].name, "edrian");

    myProduct[0].price = 2599.99; 
    /* fixed where the line doesnt do anything , 
    which MUST give values instead of 0 alone
    */

    // variable types
    // int, long , double, char, char[], boolean
    int i = 1;
    int a,b = 0;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d" , &b);
    char c = 'A';
    char name[30] = "Edrian";
    double d = 999.99;

    printf("\nEnter Integer a: ");
    scanf("%d", &a);
    printf("\nEnter Integer b: ");
    scanf("%d", &b);


    // placeholder  %d (decimal), %c (char)
    printf("%d. The result that %s gets for CSC305 is\n %c. His mark is:%0.2f \n" , i, name, c, d);

    // fixed where should have not ADD strings and numbers ,. instead added ","
    myPrinter(2002);
    printf("sum of 1 and 2 is: %d, ", sum(1,2));

    // the "system("pause");" ,, line does not work on linux instead tukar with:
    printf("\nPlease Enter to continue");
    getchar();
    getchar(); 
    //one clear newline ,,  one for wait


    charDisplay(a,b);
    // fixed typo will implement i_ (intelegence) later.....

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

void charDisplay(int a, int b){
    if(a<b){
        for( a; a<=b; a++){
            printf("\n %d", a);
        }
    }else
    //decreasing
        for(a;a>=b; a--){
            printf("\n %d", a);
        }
}