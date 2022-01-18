#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100
void bil()
{
    int i,val1,val2,val3,val4,val5,val6;


    printf("ENTER NUMBER OF PRODUCTS:");
    scanf("%d",&val2);

    char *name[MAX][MAX];
    int mlty[100];
    int price[100];
    for (i=0;i<val2;i++){
        printf("ENTER THE NAME OF THE PRODUCT:");
        scanf("%s",name[i]);
        printf("ENTER THE MULTIPLES:");
        scanf("%d",&mlty[i]);
        printf("ENTER THE PRICE:");
        scanf("%d",&price[i]);
    }

         int t1;
         int t2;
         int total_m[100];
         int sum;
         sum=0;
         for (i=0;i<val2;i++)
            {
                t1 = price[i];
                t2 = mlty[i];
                total_m[i]= t1*t2 ;
            }
        for (i=0;i<val2;i++)
        {
            sum=sum+total_m[i];
        }
        //printf("%d \n",mlty[0]);
        //printf("%d \n",price[0]);
        printf("PRESS ANY KEY TO GO TO THE INVOICE PAGE:");
        scanf("%d",&val3);
        system("cls");
        printf("------------------INVOICE------------------ \n");
        printf("------------------------------------------- \n");
        printf("------PRODUCT------NO.OF--------PRICE------ \n");

        for(i=0;i<val2;i++){
        printf("------ %s -------- %d ---------- %d ------- \n",name[i],mlty[i],price[i]);
        }
        printf("--------------------THE TOTAL IS %d -------- \n",sum);
        printf("-------------------------------------------- \n");
        printf("-------------------------------------------- \n");
}

int main()
{
    int cho1,cho2,cho3;
    printf("_________________________________________________ \n");
    printf("-------------------BILLING SYESTEM---------------\n");
    printf("------------------------------------------------- \n");
    printf("MAKE A NEW BILL ---------1. \n");
    printf("EXIT PROGRAM ------------2. \n");
    printf("------------------------------------------------- \n");
    printf("________________ENTER THE OPTION_____________ ");
    scanf("%d",&cho1);
    if(cho1==1){
        system("cls");
        int val1;
        printf("------------------------------------------------\n");
        printf("----------------WELCOME TO BILLING--------------\n");
        printf("ENTER -- 1. TO START \\\ 2. TO TERMINTE: ");
        scanf("%d",&val1);
        if(val1=1){
         bil();

         }
    }else{
        printf("---------------------GOOD BYE-------------------");
    }

    return 0;
}
