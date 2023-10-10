#include <stdio.h>
#include <string.h>


int game(char *towns){
    int count = 1;
    char *word = strtok(towns, " "), comp[200];
    strcpy(comp, word);
    word = strtok(NULL," ");
    
    while (word != NULL){
        if (strcmp(comp, word) != 0 && comp[(int)strlen(comp) - 1] == word[0]){
            strcpy(comp, word);
            word = strtok(NULL," ");
            count++;
        }
        else
            return count;
    }
    return count;
}


int main(void) {
    char towns[200];
    fgets(towns, sizeof(towns), stdin);
        
    if (game(towns) % 2 ==0)
        printf("Vanya won\n");
    else
        printf("Petya won\n");

    return 0;
}
