#include <stdio.h>
#include <string.h>


int min(int num1, int num2){
    if (num1 < num2)
        return num1;
    
    return num2;
}


int min_word(char *str){
    int answer = 100, len = (int)strlen(str) - 1, start = 0;
    str[len] = '\0';
    
    for (int i = 0; i < len; i++){
        if (str[i] == ' '){
            answer = min(answer, i - start);
            start = i + 1;
        }
    }
    answer = min(answer, len - start);
    
    return answer;
}


int main(void) {
    char str[80];
    fgets(str, sizeof(str), stdin);
    
    printf("%d\n", min_word(str));
    return 0;
}





// if (str[i] == ' '){
//             if (i - start != 0)
//                 answer = min(answer, i - start);
//             start = i + 1;
//         }
