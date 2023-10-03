#include <string.h>
#include <stdio.h>


int maximum(int a, int b){
    if (a > b)
        return a;
    return b;
}


int main(void) {
    char str[80];
    gets(str);
    int len = strlen(str), count = 0, max = 0;
    
    for(int i = 0; i < len; i++){
        if (str[i] == ' ')
            count++;
        else {
            max = maximum(max, count);
            count = 0;
        }
    }
    
    printf("%d\n", max);
    return 0;
}
