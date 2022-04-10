#include <stdio.h>
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
