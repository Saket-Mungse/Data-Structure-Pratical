#include<stdio.h>
void main()
{
int i,n,a[10],high,low,mid,item,found;
printf("Enter how many elements you want in array:\n");
scanf("%d",&n);
printf("Enter sorted elements in array:\n");
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
}
printf("Enter the items you want to search:\n");
scanf("%d",&item);
low=0;
high=n-1;
mid=(low+high)/2;
for(i=0;i<n;i++){
 if(item==a[mid]){
 printf("%d item found at %d location",item,mid+1);
 break;
 }
 if(item<a[mid]){
 high=mid-1;
 }
 if(item>a[mid]){
 low=mid+1;
 }
mid=(low+high)/2;
}
if(found==0){
 printf("Item not found");
}
}