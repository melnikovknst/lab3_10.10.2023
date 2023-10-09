#include <stdio.h>
#include <string.h>


int min(int num1, int num2){
    if (num1 < num2)
        return num1;
    return num2;
}


int min_word(char *str){
    int answer = 100, len = (int)strlen(str), start = 0;
    str[len - 1] = ' ';
    
    for (int i = 0; i < len; i++){
        if (str[i] == ' ' && i - start == 0)
            start = i + 1;
            
        else if (str[i] == ' '){
            answer = min(answer, i - start);
            start = i + 1;
        }
    }
    
    return answer;
}


int main(void) {
    char str[80];
    fgets(str, sizeof(str), stdin);
    
    printf("%d\n", min_word(str));
    return 0;
}
