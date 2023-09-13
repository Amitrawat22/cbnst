#include<stdio.h>
#include<math.h>
int main(){
    int size;
    printf("enter the size of matrix\n");
    scanf("%d",&size);
    float a[size][size], x[size];
    //argumented matrix creation;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size+1;j++){
            printf("a[%d][%d]",i,j);
            scanf("%f", &a[i][j]);
        }   
    }
    //applying gauss elimination method:
    int div=0;
    for(int i=1;i<=size;i++){
        if(a[i][i]==0){
            printf("wrong input");
        }
        for(int k=1;k<=size;k++){
            div = a[i][k]/a[i][i];
            if(i!=k){
                a[i][k] = a[i][k]-div;
            }
        }
    }
    //printing matrix;
    for(int i=1;i<=size;i++){
        x[i] = a[i][i+1]/a[i][i];
    }

    for(int i=1;i<=size;i++){
        printf("%0.3f \n", x[i]);
    }
    //convert to uper triangular matrix;
    // for(int i=0;i<size;i++){
    //     for(int j=0;j<size;j++){
    //         if(j>i){
    //             int ratio = a[j][i]/a[i][i];
    //             for(int k=0;k<size+1;k++){
    //                 a[j][k] = a[j][k]-(ratio * a[i][k]);
    //             }
    //         }
    //     }
    // }
    
}