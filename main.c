#include <stdio.h>
#include "header.h"
#define MAXLINE 500
int main() 
{
    int character;
    int max;
    char line[MAXLINE];
    char most[MAXLINE];
    
    max = 0;

    while ((character = count(line, MAXLINE)) > 0)
        if (character > max) 

        {
            max = character;
            copy(most, line);
        }

    if (max > 0)
    {
        printf("\nline with most punct characters : %s\n", most);
    }

    return 0;

}
