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

// #include <stdio.h>
// int main(){
//     int a = 10;
//     int *b;
//     printf("%p", b);
// }