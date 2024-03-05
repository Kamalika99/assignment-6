#include <stdio.h>
int main(){
    int r,c;
    printf("enter the no of rows of the matrix");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&c);
    int a[r][c];
    printf("ENter the matrix");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Before swapping\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     printf("After swapping\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}