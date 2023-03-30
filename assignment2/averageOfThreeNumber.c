#include<stdio.h>
int main(){
    int num1,num2,num3;
    float total;
    printf("Enter Three Numbers");     
    scanf("%d %d %d",&num1,&num2,&num3);
    total = (num1+num2+num3)/3;
    printf("total: %f",total); 
    return 0; 
}