#include<stdio.h>
#include <math.h>
int main(){
    int N,arr1[100],arr2[100], finalArr[100][100],i,j,k,dec,rem,suggestions;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr1[i]);
        arr2[i] = arr1[i];
    }
    for(i=0;i<N;i++){
        for(j=N-1;j>=0;j--){
             
            finalArr[i][j] = arr1[i] % 10;
            arr1[i] = arr1[i] / 10;
        }
    }
    for(i = 0;i<N;i++){
        dec = 0,k=0;
        while(arr2[i] !=0){
            rem = arr2[i] % 10;
            arr2[i] /= 10;
            dec += rem * pow(2,k);
            ++k;
        }
        //printf("\n%d",dec);
        arr1[i] = dec;
    }
    /*
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
             
            printf("%d\t",finalArr[i][j]);
        }
        printf("\n");
    }*/
    suggestions = 0;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(finalArr[i][i] != 1){
                //printf("%d\t%d",finalArr[i],finalArr[j]);
                if (arr1[i] && arr1[j]){
                    suggestions+=2;
                    break;
                }
            }
        }
    }
    printf("%d",suggestions);

    
}