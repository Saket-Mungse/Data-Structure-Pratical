#include <stdio.h>
void main (){
int a[100], n, i, j, temp;
printf("Enter no. of elements \n");
 scanf("%d", &n);
printf("Enter elements in array\n");
 for (i=0; i<n; i++){
scanf("%d",&a[i]);
 }
for(i=0; i<n-1;i++){
for (j=0;j<n-1-i; j++){
if (a[j] > a[j+1]){
temp = a[j];
a[j]=a[j+1];
a[j+1] = temp;
   }
  }

 }
printf("sorted array\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}




}