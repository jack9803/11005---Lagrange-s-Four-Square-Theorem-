#include<stdio.h>
#include<stdlib.h>
int A[5000000][4]={0};

int main(){

int T,i,j,k,l,N;
int index,sum_origen,sum_ans;
int seed=150;
for(i=0;i<seed;i++){
    //printf("%d\n",i);
    for(j=0;j<seed;j++){
        for(k=0;k<seed;k++){
            for(l=0;l<seed;l++){
                index=(i*i)+(j*j)+(k*k)+(l*l);
                sum_origen= A[index][0]+A[index][1]+A[index][2]+A[index][3];
                if((i+j+k+l)>=sum_origen){
                    A[index][0]=i;
                    A[index][1]=j;
                    A[index][2]=k;
                    A[index][3]=l;
                }
            }
        }
    }
}

/*for(i=0;i<100;i++){
        printf("%d : ",i);
    for(j=0;j<4;j++){
        printf("%d ",A[i][j]);
    }
        printf("\n");
}*/
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%d",&N);
    sum_ans=A[N][0]+A[N][1]+A[N][2]+A[N][3];
    printf("%d\n",sum_ans);
}

return 0;
}
