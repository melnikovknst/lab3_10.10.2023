#include <stdio.h>
#include <string.h>


int uniq(char *str){
    for (int i = 0; i < (int)strlen(str) - 1; i++){
        for (int k = i + 1; k < (int)strlen(str); k++){
            if (str[i] == str[k])
                return 0;
        }
    }
    return 1;
}


void search(char *str, char *first){
    char *word = strtok(str, " ");
    word = strtok(NULL," ");
    while (word != NULL){
        if (strcmp(first, word) != 0 && uniq(word))
            printf("%s ", word);
        
        word = strtok(NULL," ");
    }
    printf("\n");
}


int main(void) {
    char str[80], temp[80];
    fgets(str, sizeof(str), stdin);
    str[(int)strlen(str) - 1] = '\0';
    strcpy(temp, str);
    char *first = strtok(temp, " ");
    
    search(str, first);
    
    return 0;
}
