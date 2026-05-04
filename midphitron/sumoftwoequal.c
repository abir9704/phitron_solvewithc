#include <stdio.h>

int main(){
    int arr[5]={2,7,5,10,3};
    int x=8;
    int result;

    for(int i=0;i<4;i++){

        for(int j=i+1;j<5;j++){


            result=arr[i]+arr[j];
            if(result==x){
                printf("%d %d",arr[i],arr[j]);
            }
            // printf("%d\n", result);
            
        }
        // printf("space\n");

    }

    return 0;
}