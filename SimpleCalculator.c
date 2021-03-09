//Calculator adds, subtracts, multiplies, divides.
float SimpleCalculator(float x, float y){
    float ans;
    //Declare var to store operation user wants to be performed
    char operation[9];
    // ask user what operation they would like to perform.
    printf("What operation would you like to perform?\n");
    scanf("%s", operation);
    
    //Sanity check what is being store in operation variable after entering "add";
    if(operation == "add"){
        ans = x + y;
        printf("%f", ans);
        return ans;
    }
    if(operation == "subtract"){
        ans = x - y;
        printf("%f", ans);
        return ans;
    } 
    if(operation == "multiply"){
        ans = x * y;
        printf("%f", ans);
        return ans;
    } 
    if(operation == "divide"){
        ans = x / y;
        printf("%f", ans);
        return ans;
    } else {
        printf("%s\n", operation);
        printf("Try Again\n");
    }
}



int main() {
    SimpleCalculator(2,6);
    
    return 0;
    
}