#include<stdio.h>
int main(){ 
    int n,m;
    printf("enter the row size \n");
    scanf("%d",&n);
     m = n+1;
    float a[n][m],x[m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("a[%d][%d]",i,j);
            scanf("%f", &a[i][j]);
        }   
    }
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=m;j++){
            if(i!=j){
                int ratio = a[j][i]/a[i][i];
                for(int k=0;k<m+1;k++){
                    a[j][k] = a[j][k]-(ratio * a[i][k]);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        x[i] = a[i][n+1]/a[i][i];
    }
    for(int i=1;i<=m;i++){
        printf("%.3f \n", x[i]);
    }
    
    
}