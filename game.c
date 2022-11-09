#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,numguesses=1;
    srand(time(0));
    number=rand()%100+1;//generrate random number between 1 to 100
    //printf("The number is %d\n",number);
    //keep running the loop until number is gussed
    do{
        printf("Guess the number between 1-100\n ");
        scanf("%d",&guess);
        if(guess>number){
            printf("Enter lower number\n");
        }
        else if(guess<number){
             printf("Enter highr number\n");
        }
        else{
            printf("You guested it right in %d attempts\n",numguesses);
        }
        numguesses++;
    }
    while(guess!=number);
    return 0;
}