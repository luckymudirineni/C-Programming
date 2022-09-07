#include<stdio.h>
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
