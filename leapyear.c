#include <stdio.h>

int main() {
    int year;
    for(int i=1900;i<=2100;i++){
        if(i%4==0&& i%400&&i%100!=0){
            printf("the year %d is a leap year \n",i);
        }
        else{
        printf("the year  %dis not aleap year \n",i);}
    }
    return 0;
}