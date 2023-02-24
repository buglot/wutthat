#include <stdio.h>
int main()
{
    float A[] = {1.1,2.2,3.3,4.4,5.5}, B[] = {1.5, 1.4, 1.3, 1.2, 1.1};
    float sum=0,mlt=1;
    for(int i=0;i<5;i++){
        sum+=A[i];
        mlt*=B[i];
    }
    printf("Sum of A = %.2f \n",sum);
    printf("Multiple of B = %.2f \n",mlt);
    printf("A - B = %.2f \n",sum-mlt);

    return 0;
}
