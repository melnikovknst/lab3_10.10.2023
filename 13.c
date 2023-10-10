#include <stdio.h>
#include <string.h>


int sum(char *ticket, int start, int end){
    int res = 0;
    for (int i = start; i < end; i++)
        res += ticket[i] - '0';
    return res;
}


int main(void) {
    char ticket[200];
    int count = 0, lucky = 0;
    while (!lucky){
        fgets(ticket, sizeof(ticket), stdin);
        int len = (int)strlen(ticket) - 1;
        ticket[len] = '\0';

        if ((len % 2 == 0) && (sum(ticket, 0, len / 2) == sum(ticket, len / 2, len)))
            lucky = 1;

        count++;
    }
    
    printf("%d\n", count);
    return 0;
}
