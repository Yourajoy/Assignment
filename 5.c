#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);

    //upper part
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("*",col);
        }
        printf("\n");
    }

    //lower part
    for(row=n-1; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("*",col);
        }
        printf("\n");
    }

    //Alraaafi
}
