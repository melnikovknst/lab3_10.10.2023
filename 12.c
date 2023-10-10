#include <stdio.h>
#include <string.h>


int key(char *var){
    char keywords[190] = "False None True and as assert async await break class continue def del elif else except finally for from global if import in is lambda nonlocal not or pass raise return try while with yield";
    char *comp = strtok(keywords, " ");

    while (comp != NULL) {
        if (strcmp(var, comp) == 0)
            return 1;
        comp = strtok(NULL, " ");
    }
    
    return 0;
}


int isVar(char *var){
    int correct = 1;
    for (int i = 0; i < (int)strlen(var); i++){
        if (!('A' <= var[i] && var[i] <= 'Z') || !('a' <= var[i] && var[i] <= 'z') || var[i] != '_' || !('0' <= var[i] &&  var[i] <= '9'))
            correct = 0;
    }
    
    if (('0' <= var[0] && var[0] <= '9') || correct || key(var))
        return 0;
    
    return 1;
}


int main(void) {
    char var[200];
    fgets(var, sizeof(var), stdin);
    var[(int)strlen(var) - 1] = '\0';
        
    if (isVar(var))
        printf("%s can be a var\n", var);
    else
        printf("%s can`t be a var\n", var);

    return 0;
}
