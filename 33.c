#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++) {
                k++;
                k%2==0?printf("%c ",k+64):printf("%c ",k+96);
        }
        
        printf("\n");
    }



}
