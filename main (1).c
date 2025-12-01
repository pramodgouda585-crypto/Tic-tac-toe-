/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the value of m and n:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements");
    int a[m][n];
    for (int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p,q;
    printf("Enter the value of p and q:");
    scanf("%d%d",&p,&q);
    printf("Enter the elements");
    int b[p][q];
    for (int i=0;i<=p-1;i++){
        for(int j=0;j<=q-1;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int i,j;
    int c[i][j]=0;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=q-1;j++){
            for (int k=0;k=q-1;k++){
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    
}