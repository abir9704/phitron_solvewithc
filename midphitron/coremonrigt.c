#include <stdio.h>
#include <string.h>

int main(){
    char str[10009];
    int freqarr[140]={0};

    scanf("%s",str);

    int slength = strlen(str);

    for(int i=0;i<slength;i++){

         int val=str[i];
         freqarr[val]++;
                



    }

    for(int i=97;i<=122;i++){

        if(freqarr[i]>0){

             printf("%c - %d\n",i,freqarr[i]);

        }

       

    }

    return 0;
}