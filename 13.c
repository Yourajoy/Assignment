#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=n-1; col>=row; col--) printf(" ");

        printf("*");

        if(row==n){
            for(col=1; col<row+row-2; col++){
            printf("*",col);
        }
        }
        else{
            for(col=1; col<row+row-2; col++){
            printf(" ");
            }
        }

        if(row!=1) printf("*");
        printf("\n");

    }
    
}
