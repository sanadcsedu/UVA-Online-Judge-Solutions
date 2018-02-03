#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], pt[100][100];
    char *p;
    int i = 0;
    gets(a);

    p = strtok(a, " ");

    while ( p != NULL ) {
    strcpy(pt[i++], p);
    p = strtok(NULL, " ");
    }
    int j;
    for ( j = 0; j < i; j ++ )
    printf("%s\n", pt[j]);
    return 0;
}
