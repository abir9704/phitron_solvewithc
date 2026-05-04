#include <stdio.h>

int main(){


  // for(int i=1;i<=5;i++){

  //         for(int k=5;k>=0;k--){

  //         printf(" ");
          
  //       }

        

  // }

  int n=5;
  int star=1;
  int space=4;

     for(int i=1;i<=n;i++){//for loop for printing lines

      for(int j=1;j<=space;j++){
        printf(" ");
      }
            for(int j=1;j<=star;j++){//for printing stars
              printf("*");
            }
              printf("\n");

              star=star+2;
              space=space-1;
              
           }

   
     


                



            
            

        
      
   

    return 0;
}