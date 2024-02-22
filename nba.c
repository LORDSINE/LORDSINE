
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
nba.c [unix] (19:04 22/02/2024)                                                                       0,0-1 All
"nba.c" 0L, 0B

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
nba.c [unix] (19:04 22/02/2024)                                                                       0,0-1 All
"nba.c" 0L, 0B
// C program to reverse an array
#include <stdio.h>
int reverse_array(int array[],int reverse_arra[]);// passing the parameter to the functions
int main(){
    int array[5]={1,2,3,4,5};
    int reverse_arra[10];
    printf("%d\n",array[4]);
    reverse_array(array,reverse_arra);
    printf("%d\n",array[4]);
     for(int i=0;i<5;i++){
        printf("%d,",reverse_arra[i]);
    }
    return 0;
}
int reverse_array(int array[],int reverse_arra[]){

    int j,i;
    for(int i=0,j=4;i<5;i++,j--){
        reverse_arra[i]=array[j];
    }
     array[4]=600;

}
