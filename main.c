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
}
int main(){
     struct product myProduct[100];
     strcpy(myProduct[0].name, "edrian");
     myProduct[0].product;
     myProduct[0].price;
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

    // placeholder  %d (decimal), %c (char)
    printf("%d. The result that %s gets for CSC305 is %c. His mark is:%0.2f " + i, name, c, d);
    myPrinter(2002);
    printf("sum of 1 and 2 is: %d, ", sum(1,2));
    system("pause");
    i_charDisplay(a,b);

    printf("Enter Integer a: ");
    scanf("%d", &a);
    printf("Enter Integer b: ");
    scanf("%d", &b);

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