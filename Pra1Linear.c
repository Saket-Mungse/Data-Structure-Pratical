#include<stdio.h>
void main(){
    int a[100],n,i,num,found=0;
    printf("Enter how many element you want in array :\n ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("Enter an element you want to search :\n ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num == a[i]){
            printf("Element %d is found at %d position.\n",num,i+1);
            found++;
        }
    }
    if(found == 0){
        printf("Search element is not found.");
    }
}