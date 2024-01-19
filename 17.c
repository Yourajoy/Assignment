#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);

    //upper part
    for(row=1; row<=n; row++){

        for(col=n-1; col>=row; col--) printf(" ");

        for(col=row; col>=1; col--){
        printf("%d",col);
        }

        for(col=2; col<=row; col++){
        printf("%d",col);
        }

        printf("\n");

    }

    //Lawer part
    for(row=n-1; row>=1; row--){

        for(col=n-1; col>=row; col--) printf(" ");

        for(col=row; col>=1; col--){
        printf("%d",col);
        }

        for(col=2; col<=row; col++){
        printf("%d",col);
        }

        printf("\n");

    }

    
}
