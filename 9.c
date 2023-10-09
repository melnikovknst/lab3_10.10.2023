#include <stdio.h>
#include <string.h>


void search(char *str, char *comp){
    char *word = strtok(str, " ");
    int count = 0;
    while (word != NULL){
        if (strcmp(comp, word) == 0)
            count++;
        word = strtok(NULL," ");
    }
    if (count == 1)
        printf("%s\n", comp);
}


int main(void) {
    char str[80];
    fgets(str, sizeof(str), stdin);
    
    char *comp = strtok(str, " ");
    while (comp != NULL){
        search(str, comp);
        comp = strtok(NULL, " ");
    }
    
    return 0;
}
