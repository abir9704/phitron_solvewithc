#include <stdio.h>

int main(){
    int l;
    scanf("%d", &l);

    while(l--){

    int m1,m2,d;

    scanf("%d %d %d",&m1,&m2,&d);

    int totalfarmer = m1+m2;
    int singleworkerreqdays= m1*d;
    int reqdays = singleworkerreqdays/totalfarmer;
    int savingdays= d-reqdays;

    printf("%d\n",savingdays);

    }
  

    return 0;
}