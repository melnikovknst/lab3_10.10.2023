#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void) {
    char str[80], unq[80];
    fgets(str, sizeof(str), stdin);
    int len = (int)strlen(str), count = 0;
    
    for (int i = 0; i < len; i++) {
        char el = str[i];
        if (el == ' ' || el == ',' || el == '.' || el == ';' || el =='!' || el == '?')
            str[i] = '\0';
    }
    
    for (int i = 0; i < len; i++) {
        char el = str[i];
        int flag = 1;
        
        for (int k = 0; k <= count; k++){
            if (el == unq[k] || abs(el - unq[k]) == 32)
                flag = 0;
        }

        if (flag){
            unq[count] = el;
            count++;
        }
    }
    
    printf("%d\n", (int)strlen(unq) - 1);
    return 0;
}
