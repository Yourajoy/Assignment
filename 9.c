#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);
    for(row=n; row>=1; row--){
        for(col=n-1; col>=row; col--) printf(" ");
        for(col=1; col<=(row+row-1); col++){
            printf("*",col);
        }
        printf("\n");
    }


    
}
