#include <stdio.h>
#include <string.h>


void guess_letter(char *word, char *str, int *won, int *count){
    int l = *count;
    char input[1];
    scanf("%s", input);
    
    for (int i = 0; i < (int)strlen(word); i++){
        if (input[0] == word[i])
            str[i] = input[0];
    }
    
    printf("%s\n\n", str);
    
    if (*count > 9)
        *won = -1;
}


void guess_word(char *word, int *won){
    char input[50];
    scanf("%s", input);
    
    if (strcmp(input, word) == 0)
        *won = 1;
    else
        *won = -1;
}


int main(void) {
    char word[50], str[50], tip[200];
    int count = 1, won = 0, act;
    fgets(tip, sizeof(tip), stdin);
    fgets(word, sizeof(word), stdin);
    int len = (int)strlen(word) - 1;
    
    word[len] = '\0';
    
    for (int i = 0; i < len; i++)
        str[i] = '*';
    
    for (int i = 0; i < 25; i++)
        printf("\n");
    
    printf("%s\n%s\n\n", tip, str);
    
    while (count < 11 && won == 0){
        printf("Word (1) or Lettr (0)?\n");
        scanf("%d", &act);
        
        if (act == 1)
            guess_word(word, &won);
        else
            guess_letter(word, str, &won, &count);
            
        count += 1;
    }
    
    if (won == 1)
        printf("Victory\n");
    else
        printf("Lose\n");
    
    return 0;
}
