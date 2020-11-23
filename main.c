#include <stdio.h>
int eventcount;
int crimes=0;
int eventnum;
int polices=0;
int untreatedcrimes;
int sum=0;


int main() {

    scanf("%d",&eventcount);
    while (eventcount>0){

        scanf("%d",&eventnum);
        eventcount--;
        if (eventnum>0&&sum>=0){
            sum+=eventnum;
        } else if (eventnum<0&&sum>0){
           sum+=eventnum;
       }else if (eventnum<0&&sum<=0){
           sum+=eventnum;
           untreatedcrimes+=eventnum;
           sum=0;
       } else{
            sum=sum;
        }


    }


        printf("%d",-untreatedcrimes);



    return 0;
}
