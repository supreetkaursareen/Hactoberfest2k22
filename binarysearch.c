#include<stdio.h>
void main(){
    int a[50],i,n,t,b=0,mid,c;
    printf("Enter No. of terms :\n");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Which element you want to search\n");
    scanf("%d",&c);
    t=n-1;
    mid=(t+b)/2;
    while(b<=t){
        if(a[mid]==c){
            printf("Element found at: %d",mid+1);
            break;
        }
        else if(c<a[mid]){
            t=mid-1;
        }
        else if(c>a[mid]){
            b=mid+1;
        }
        else
            printf("Element not found");
        mid=(b+t)/2;
    }
}