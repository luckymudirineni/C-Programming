#if 0
#include <stdio.h>
typedef unsigned int UINT;
void fun(UINT*,UINT*,UINT*);
typedef struct x{
UINT reg1;
UINT reg2;
UINT reg3;
}DRIVER;
void fun(UINT *a,UINT *b,UINT *c){
*a=*a+*b+*c;
*b=*a-*b-*c;
*c=*a-*b-*c;
*a=*a-*b-*c;
}
int main(){
DRIVER Driver1={100,200,300};
printf("%d %d %d \n",Driver1.reg1,Driver1.reg2,Driver1.reg3);
fun(&Driver1.reg1,&Driver1.reg2,&Driver1.reg3);
printf("%d %d %d ",Driver1.reg1,Driver1.reg2,Driver1.reg3);
}
#endif
#if 0
#include <stdio.h>
typedef unsigned int UINT;
struct x{
UINT reg1;
UINT reg2;
UINT reg3;
};
void fun(struct x Driver1){
printf("%d %d %d \n",Driver1.reg1,Driver1.reg2,Driver1.reg3);
}
void fun2(struct x Driver2){
printf("%d %d %d \n",Driver2.reg1,Driver2.reg2,Driver2.reg3);
}
int main(){
struct x Driver1={100,200,300},Driver2={400,500,600};
fun(Driver1);
fun2(Driver2);
}
#endif
#if 0
#include <stdio.h>
typedef unsigned int UINT;
typedef struct x{
UINT reg1;
UINT reg2;
UINT reg3;
}Driver;
Driver Driver1={100,200,300};
struct fun(Driver Driver1){
Driver1.reg2=400;
Driver1.reg1=200;
Driver1.reg3=600;
return Driver1;
}
int main(){
Driver1=fun(Driver Driver1);
printf("%d %d %d",Driver1.reg1,Driver1.reg2,Driver1.reg3);
}
#endif
#include <stdio.h>
typedef unsigned int UINT;
 struct x
{
    UINT reg1;
    UINT reg2;
    UINT reg3;
};

struct fun(struct x Driver)
{
    Driver1.reg2 = 400;
    Driver1.reg1 = 200;
    Driver1.reg3 = 600;
    return Driver1;
}

struct fun2(struct x Driver)
{
    Driver2.reg2 = 1200;
    Driver2.reg1 = 800;
    Driver2.reg3 = 1600;
    return Driver2;
}
int main()
{
    struct x Driver1 = {100, 200, 300};
    struct x Driver2 = {400, 500, 600};
    Driver1 = fun(struct x Driver1);
    printf("%d %d %d \n", Driver1.reg1, Driver1.reg2, Driver1.reg3);
    Driver2 = fun2(struct x Driver2);
    printf("%d %d %d \n", Driver2.reg1, Driver2.reg2, Driver2.reg3);
}
