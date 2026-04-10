#include <stdio.h>

int main() {
    // Write C code here
   long long int a;
   long long int b;
   scanf("%lld %lld", &a, &b);
   long long int c= a*b;
   printf("%lld",c);

   return 0;
}
Solved divisible 

#include <stdio.h>

int main() {
    // Write C code here
   int n;
   scanf("%d",&n);
   if(n%3==0){
       printf("YES");
   }
   else{
       printf("NO");
   }
   

   return 0;
}
Solved divisible 2
#include <stdio.h>

int main() {
    // Write C code here
   int n;
   scanf("%d",&n);
   for(int z=21;z<=n;z++){
   if(z%3==0 && z%7==0){
       printf("%d\n",z);
   }
   }
   

   return 0;
}
//shopping

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n>=1500){
        printf("I will buy Panjabi\nI will buy shoes\nAlisha will buy shoes");
    }
    else if(n>1000 && n<1500){
        printf("I will buy panjabi");
    }
    else{
        printf("Bad Luck");
    }
    return 0;
}

