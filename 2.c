#include <stdio.h>
#include <string.h>


int maximum(int a, int b){
    if (a > b)
        return a;
    return b;
}


int main(void) {
    char str[80];
    gets(str);
    char temp = str[0];
    int len = strlen(str), count = 1, max = 1;
    
    for(int i = 1; i < len + 1; i++){
        if (str[i] == temp)
            count++;
        else {
            max = maximum(max, count);
            count = 1;
            temp = str[i];
        }
    }

    printf("%d\n", max);
    return 0;
}
