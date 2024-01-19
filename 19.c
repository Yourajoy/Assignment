#include<stdio.h>
int main(){
    int n,row,col,k=0;
    scanf("%d",&n);

    k = n*2-2;
    //upper part
    for(row=n; row>=1; row--){

        for(col=n; col>=row; col--) printf("*");

        for(col=1; col<=k; col++){
            printf(" ",col);
        }

        for(col=n; col>=row; col--) printf("*");

        k-=2;
        printf("\n");
    }

        k+=2;
        //lower part
        for(row=1; row<=n; row++){
            if(row==1){
                k+=2;
                continue;
            }

        for(col=n; col>=row; col--) printf("*");

        for(col=1; col<=k; col++){
            printf(" ",col);
        }

        for(col=n; col>=row; col--) printf("*");

        k+=2;
        printf("\n");
    }

    
}
