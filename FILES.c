#if 0
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("l.c", "");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}
#endif
// #include <stdio.h>
// int main(){
//     int a = 10;
//     int *b;
//     printf("%p", b);
// }
// #include <stdio.h>
// int main()
// {
//     FILE *fp = fopen("l.c", "r");
//     char c;
//     int n = 0;
//     c = fgetc(fp);
//     while ((c = fgetc(fp)) != EOF)
//     {
//         if (c == '\n')
//             n++;
//     }
//     fclose(fp);
//     printf("%d", n);
// }
#include <stdio.h>
#include <iostream>
int main()
{
    FILE *fp;
    char ch;
    int n = 0;
    fp = fopen("l.c", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\0')
            n++;
    }
    printf("%d", n);
    fclose(fp);
}