#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];

    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }

    long long int counttwo=0;
    long long int countthree=0;


     for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]%3!=0){
           counttwo++;
        }
        else if(arr[i]%3==0 && arr[i]%2!=0){
            countthree++;
        }
        else if(arr[i]%2==0 && arr[i]%3==0){
            counttwo++;
        }
    }

    printf("%lld %lld",counttwo,countthree);

 

    

    return 0;
}