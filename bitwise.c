#if 0
#include <stdio.h>
int main(int argc, char *argv[])
{
    unsigned char cData = 0xF8;
    int iPos = 0;
    printf("Initially cData = 0x%x\n\n", cData);
    printf("Enter the position which you want toggle = ");
    scanf("%d", &iPos);
    // toggle the nth bit.
    cData ^= 1 << iPos;
    // Print the data
    printf("\n\n%dth Bit Set Now cData will be = 0x%x\n", iPos, cData);
    return 0;
}
#endif
#if 0
#include <stdio.h>
#define INT_BITS 8
#define ROTATE_LEFT(pos, data) ((data << pos) | (data >> (INT_BITS - pos)))
#define ROTATE_RIGHT(pos, data) ((data >> pos) | (data << (INT_BITS - pos)))
int main()
{
    int pos = 3;   // Number of rotation
    int data = 79; // data which will be rotate
    printf("%d Rotate Left by %d is ", data, pos);
    printf("%d \n", ROTATE_LEFT(pos, data));
    printf("%d Rotate Right by %d is ", data, pos);
    printf("%d \n", ROTATE_RIGHT(pos, data));
    return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 5, 7}, arr_result[3];
    int set, j, n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        set = 0;

        while (arr[i])
        {

            if (arr[i] & 1)
                set++;
            arr[i] = arr[i] >> 1;
            arr_result[i] = set;
        }
    }
    for (int i = 0; i < 4; i++)
        printf(" arr[%d] =%d \n", i, arr_result[i]);
}
#endif
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d \n", a[n]);
}