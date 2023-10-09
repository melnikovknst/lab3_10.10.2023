#include <stdio.h>
#include <string.h>


int min(int num1, int num2){
    if (num1 < num2)
        return num1;
    return num2;
}


void min_word(char *str){
    int answer = 100, len = (int)strlen(str), start = 0, word = 0;
    str[len - 1] = ' ';

    for (int i = 0; i < len; i++){
        if (str[i] == ' ' && i - start == 0)
                    start = i + 1;
        
        else if (str[i] == ' '){
            if (answer != min(answer, i - start)){
                word = start;
                answer = min(answer, i - start);
            }
            start = i + 1;
        }
    }

    while (str[word] != ' '){
        printf("%c", str[word]);
        str[word] = ' ';
        word++;
    }
}


void sort(char *str, int words){
    for (int i = 0; i < words; i ++){
        min_word(str);
        printf(" ");
    }
    printf("\n");
}


int main(void) {
    char str[80];
    int words = 1;
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < (int)strlen(str); i ++){
        if (str[i] == ' ')
            words++;
    }

    sort(str, words);
    return 0;
}
