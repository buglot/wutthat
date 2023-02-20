#include<stdio.h>

float checkMember(char member,int p){
    float disprice=0;
    if(member=='Y'){
        disprice=p *(100-10)*0.01;
    }else{
        disprice =p;
    }
    return disprice;
}

int main(){
    printf("Please input your item's price :");
    int price;
    char mem;
    scanf("%d",&price);
    printf("Are you my member? :");
    scanf(" %c",&mem);
    float total_price = checkMember(mem,price); 
    printf("Your price is %.0f bath",total_price);

}