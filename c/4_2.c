#include <stdio.h>
 
int main(){
    char a[20], b[20];
    printf("Enter string #1: ");
    gets(a);
    printf("Enter string #2: ");
    gets(b);
    char kay1[20]="Kasetsart Sriracha";
    char kay2[20]="I Love KU";
    int k=0;
    for(int count=0;count<sizeof(a)/sizeof(a[0]);count++){
        if(a[count]=='a' || a[count]=='s' || a[count]=='h' || a[count]=='c')
            k=1;
            break;
    }
    for(int count=0;count<sizeof(b)/sizeof(b[0]);count++){
        if(b[count]=='a' || b[count]=='s' || b[count]=='h' || b[count]=='c')
            k=1;
            break;
    }
    if(k){
        for(int i=0;i<sizeof(kay1)/sizeof(kay1[0]);i++){
            int h=0;
            for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
                if(kay1[i]==a[j]){
                    printf("%c",a[j]);
                    a[j]='\0';
                    h=1;
                    break;
                }
            }
            if(h)continue;
            for(int j=0;j<sizeof(b)/sizeof(b[0]);j++){
                if(kay1[i]==b[j]){
                    printf("%c",b[j]);
                    b[j]='\0';
                    break;
                }
            }
        }
    }else{
        for(int i=0;i<sizeof(kay2)/sizeof(kay2[0]);i++){
            int h=0;
            for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
                if(kay2[i]==a[j]){
                    printf("%c",a[j]);
                    a[j]='\0';
                    h=1;
                    break;
                }
            }
            if(h)continue;
            for(int j=0;j<sizeof(b)/sizeof(b[0]);j++){
                if(kay2[i]==b[j]){
                    printf("%c",b[j]);
                    b[j]='\0';
                    break;
                }
            }
        }
    }

}