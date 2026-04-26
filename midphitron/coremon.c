#include <stdio.h>
#include <string.h>

int main(){
    char s[100007];

    scanf("%s", s);

    int length=strlen(s);

    int count=0;
    int ans;

    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    } 

    ans=length-count;

    printf("%d", ans);

    return 0;
}