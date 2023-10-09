#include <stdio.h>
#include <string.h>


void reverse(char *str){
    int len = (int)strlen(str) - 1;
    str[len] = '\0';
    int last = len - 1;
    
    for (int i = last; i > -1; i--){
        if (str[i] == ' '){
            for (int k = last;k >= i; k--)
                printf("%c", str[k]);
            
            last = i - 1;
        }
    }
    for (int k = last;k > -1; k--)
        printf("%c", str[k]);
    
    printf("\n");
}


int main(void) {
    char str[80];
    fgets(str, sizeof(str), stdin);
    
    reverse(str);
    return 0;
}
