#include <stdio.h>
#define MAXLINE 500
int count(char s[], int lim);
void copy(char to[], char from[]);

int main(){
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
void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;

}
int count(char s[], int lim)
{
    int c, i, n;
    n = 0;
     
    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
    {
        if (c == ',' || c == '.')
        {
            ++n;
        }
        else{
        s[i] = c;
    }
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return n;

}
