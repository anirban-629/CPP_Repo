#include<stdio.h>
int main(){
// Address %x
// Value %d
// provide address &
//! Pointer holds the starting address of a variable
// Value <--------- Pointer
    int x=100;
    int *p;
    p=&x;
    printf("------------\n");
    printf("x=%d\n",x); // 100
    printf("p=%x\n",p); // Address of x
    printf("------------\n");
    
    int arr[]={10,20,30,40,50,60};
    int *ptr=&arr[3],*aptr;

    printf("*ptr=%d\n",*ptr); //40
    printf("*ptr+1=%d\n",*ptr+1);//40+1
    printf("*ptr-1=%d\n",*ptr-1);//40-1
    printf("------------\n");
    printf("ptr=%d\n",ptr);
    printf("ptr+1=%d\n",ptr+1);//40-1
    printf("ptr+1=%d\n",ptr-1);//40-1
    printf("------------\n");
    printf("*(ptr+1)=%d\n",*(ptr+1));//40-1
    printf("*(ptr+1)=%d\n",*(ptr-1));//40-1
    printf("------------\n");
    for(int i=0;i<5;i++){
        aptr=&arr[i];
        printf("aptr=%x\n",aptr);
        printf("*aptr=%d\n",*aptr);
    }
    printf("------------\n");
    int arr1[5];
    for(int i=0;i<5;i++){
        printf("HEX - &arr[%d]=%x\n" ,i,&arr1[i]);
        printf("UNSIGNED - &arr[%d]=%u\n" ,i,&arr1[i]);
    }
    printf("------------\n");
    return 0;
}