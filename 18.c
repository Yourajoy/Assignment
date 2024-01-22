#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

        for(row=2; row<=n; row++){

        if(row!=1){
            for(col=n; col>=row; col--) printf("*");
        }

        for(col=1; col<=k; col++){
            printf(" ",col);
        }

        if(row!=1){
            for(col=n; col>=row; col--) printf("*");
        }

        k+=2;
        printf("\n");
    }
        k-=2;
        for(row=n; row>=2; row--){

        for(col=n; col>=row; col--) printf("*");

        for(col=1; col<=k; col++){
            printf(" ",col);
        }

        for(col=n; col>=row; col--) printf("*");

        k-=2;
        printf("\n");
    }

    
}
