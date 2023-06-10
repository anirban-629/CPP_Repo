#include<stdio.h>
int main(){
    // Value <-------- Pointer <-------- Pointer
    // int a=10;
    // int *p1=&a; // Can hold a value of a variable
    // int **p2=&p1; // **p2 can only hold a value of a pointer variable

    // printf("a=%d\n",a); //10
    // printf("p1=%x\n",p1); // address of a
    // printf("*p1=%d\n",*p1); // 10
    // printf("p2=%x\n",p2); // address of p1
    // printf("*p2=%x\n",*p2); // *p2 means value of p1 as **p2=&p1 where p1 is address of a
    // printf("**p2=%d\n",**p2); //10 
    printf("-----------\n");
    int a[10]={100,200,300,400,500,600,700,800,900,1000};
    int *p[]={a,a+1,a+2,a+3,a+4,a+5,a+6,a+7,a+8,a+9,a+10};
    int **pp=p;
    printf("pp=%d\n",pp);
    pp++;
    printf("pp=%d\n",pp);
    printf("a=%x\n",a);
    printf("p=%x\n",p);
    printf("a[0]=%d\n",a[0]);
    printf("p[0]=%d\n",p[0]);
    printf("*(p[0])=%d\n",*(p[0]));
    printf("----------------\n");
    printf("%d-%d-%d\n",pp-p,*pp-a,**pp);
    return 0;
}
