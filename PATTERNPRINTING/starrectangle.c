#include<stdio.h>
int main(){
    int n,m;
    printf("enter the value of row");
    scanf("%d",&n);
    printf("enter the value of column");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}