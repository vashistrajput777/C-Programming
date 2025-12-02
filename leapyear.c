#include <stdio.h>

int main(void){

    int year = 2004;
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("given year is leap year");
    }
    else{
        printf("given year is not a leap year");
    }
}