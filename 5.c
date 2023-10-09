#include <stdio.h>
#include <string.h>


void uniq(char *str){
    int len = (int)strlen(str)-1;
    str[len] = '\0';
    
    for (int i = 0; i < len - 1; i++) {
        char el = str[i];
        
        for (int k = i + 1; k < len; k++) {
            int last = len - 1;
            
            if (el == str[k]){
                str[k] = str[last];
                str[last] = '\0';
                len--;
                k--;
            }
        }
    }
}


void isuniq(char *str){
    int len = (int)strlen(str);
    
    for (int i = 0; i < len; i++) {
        char el = str[i];
        int flag = 1;
        
        for (int k = i + 1; k < len; k++) {
            int last = len - 1;
            
            if (el == str[k]){
                str[k] = str[last];
                str[last] = '\0';
                len--;
                k--;
                flag = 0;
            }
        }
        if (flag)
            printf("%c", el);
    }
    printf("\n");
}


int main(void) {
    char str1[80], str2[80], str3[80];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    fgets(str3, sizeof(str3), stdin);
    
    uniq(str1);
    uniq(str2);
    uniq(str3);
    
    isuniq(strcat(strcat(str1, str2), str3));

    return 0;
}
