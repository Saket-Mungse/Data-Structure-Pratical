#include<stdio.h>
void main(){
    int a[5],i;
    
    printf("Enter array elements : \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array Elements are : \n");
    for(i=0;i<5;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }

    for(i=0;i<5;i++){
        a[i] = a[i+1];
    }

    printf("After Deleting first position, New array is : \n");
     for(i=0;i<4;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
}
