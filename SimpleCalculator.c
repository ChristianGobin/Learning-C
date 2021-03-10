#include <stdio.h>

/*
    SimpleCalculator function:
        -Takes 2 args and performs 1 of 4 Arethmetic Operations(add,subtract,divide,multiply)
        -To select operation, user input is required
        -Return answer to user and print to console.
        -Take into consideration invalid input.
        -Handle errors + return 0.
*/
        
float SimpleCalculator(float x, float y){
    float ans = 0;
    char operation[9];
    
    
    printf("What operation would you like to perform user?: \n");
    fgets(operation, 9, stdin);
    
    //Probably should find a way to reformat to get rid of all these if statements..
    
    if(operation[0] == 'a'){
        printf("%.2f", (x+y));
        return 1;
    }
    if(operation[0] == 's'){
        printf("%.2f", (x-y));
        return 1;
    }
    if(operation[0] == 'm'){
        printf("%.2f", (x*y));
        return 1;
    }
    if(operation[0] == 'd'){
        printf("%.2f", (x/y));
        return 1;
    }
    else {
        printf("Invalid option. Try again.");
        return 0;
    }
}



int main() {
    SimpleCalculator(2,6);
    return 0;
    
}