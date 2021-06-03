#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c , int d){
    int arg_array[4] = {a, b, c, d};
    int lowest = a;
    for(int i = 0; i <= 4; i++){
        if(lowest < arg_array[i]){
            lowest = arg_array[i];
        }
    }
    return lowest;
}
