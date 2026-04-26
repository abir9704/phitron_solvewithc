#include <stdio.h>
#include <string.h>

int main(){
   int l;
   scanf("%d", &l);

   while(l--){

   char str[10007];
   scanf("%s", str);

   int len=strlen(str);
   int countupper=0;
   int countlower=0;
   int allletter=0;
   int digits=0;

   for(int i=0;i<len;i++){
       if(str[i]>=65 && str[i]<=90){
          countupper++;
   
       }
       else if(str[i]>=97 && str[i]<=122){

          countlower++;

       }
   }

   allletter=countlower+countupper;

   digits=len-allletter;

   printf("%d %d %d\n", countupper,countlower,digits);

   }
   


   return 0;
}