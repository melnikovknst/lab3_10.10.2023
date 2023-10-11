#include <stdio.h>
#include <string.h>


void guess(char *num, int *won, int *count){
    char input[5];
    int bulls = 0, cows = 0;
    scanf("%s", input);
    
    for (int i = 0; i < 4; i++){
        if (num[i] == input[i]){
            bulls ++;
        }
        
        for (int k = 0; k < 4; k++)
            if (num[i] == input[k] && k != i)
                cows ++;
    }
    
    *count += 1;
    printf("%d bulls, %d cows\n", bulls, cows);
    
    if (bulls == 4){
        *won = 1;
        printf("Vuctory\n");
    }
    if (*count > 9){
        *won = 1;
        printf("Loose\n");
    }
}


int main(void) {
    char num[5];
    int won = 0, count = 0;
    fgets(num, sizeof(num), stdin);
    
    for (int i = 0; i < 25; i++)
            printf("\n");
    
    while (won == 0)
        guess(num, &won, &count);
    
    return 0;
}
