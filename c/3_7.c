#include <stdio.h>
float interrest(char b,int d){
    switch(b){
        case 'U':
            return d*1.2*0.01;
            break;
        case 'S':
            if(d>=0 && d<=500000){
                return d*0.5*0.01;
            }else if(d>=500001){
                return d*0.9*0.01;
            }else{
                return 0;
            }
    }
}
int main(){
    char bank;
    int deposit;
    printf("Enter Account Saving(S) or Ultra saving(U) : ");
    scanf("%c",&bank);
    printf("Enter deposit : ");
    scanf("%d",&deposit);
    printf("Your Interrest is %.2f baht",interrest(bank,deposit));


}