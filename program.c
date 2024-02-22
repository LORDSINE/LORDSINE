// Replacing every a by p in c 
#include <stdio.h>
#include <string.h>
int replace(char str[]);
int main(){
    char string[100];
    printf("---Enter your name----\n");
    fgets(string,sizeof(string),stdin);
     replace(string);
    printf("The new string is ~~~%s~~~",string);
}
int replace(char str[]){
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a' || str[i] == 'A'){
            str[i] = 'p';
        }
    }
}
