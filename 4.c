#include <stdio.h>
#include <string.h>


int main(void) {
    char str[80];
    fgets(str, sizeof(str), stdin);
    int len = (int)strlen(str);
    
    for (int i = 0; i < len - 1; i++) {
        int count = 1;
        for (int k = i + 1; k < len; k++) {
            if (str[i] == str[k])
                count++;
        }
        
        if (count == 3){
            printf("%c\n", str[i]);
            return 0;
        }
    }
    
    printf("Net takogo simvola\n");
    return 0;
}
