#include <stdio.h>

int main(){
    int arr[4]={10,3,1,18};
    int temp;

    for(int i=0;i<=2;i++){
        for(int j=i+1;j<=3;j++){
        //    printf("%d %d\n",arr[i],arr[j]);

           if(arr[i]>arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
           }
        }
    }

    for(int i=0;i<=3;i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}