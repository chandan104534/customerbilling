#include <stdio.h>
#include<string.h>
#include<time.h>
#include "customerbilling.h"

int bill(int a);
int sum(int k);
void edit(int e);

struct billing
    {
        char item[100];
        float qty;
        float price;
    }b[100];

int i=1,c=1,m,h;
float amt,total=0;

char cur_time[128];

    time_t t;
     struct tm*  ptm;



int main()
{
    int n;
    float total;
    z: printf("press 1 to enter the item or press 0 to print the bill\n");
    scanf("%d",&n);
    if(n==1)
    {
        bill(n);
        i++;
        c++;
        goto z;
    }

    if(n==0);
    {
        sum(n);
        printf("press 2 to edit the bill or press 0 to print the bill\n");
        scanf("%d",&m);
        if(m==2)
        {
            edit(m);
        }
        if(m==0)
        {
            sum(m);
            printf("happy shopping!!!\nthank you...\nvisit again.\n");
        }
    }
}



int bill(int a)
{
    printf("enter the item\n");
    scanf("%s",b[i].item);
    printf("enter the qty\n");
    scanf("%f",&b[i].qty);
    printf("enter the price\n");
    scanf("%f",&b[i].price);
}


int sum(int K)
{




    printf("============================================================\n");


    printf("S U P E R  M A R K E T\n");
    puts("\n============================================================");
    printf("%-10s%15s%17s%17s\n", "Item", "Qty", "Price", "Amount");
    puts("------------------------------------------------------------");
    for(i=0;i<c;i++)
{
    amt=b[i].qty*b[i].price;
    total=total+amt;
    printf("%-9s %16.2f\t%10.2f\t%11.2f\n",b[i].item, b[i].qty,b[i].price, amt);
}
printf("Total Amount :\t\t\t\t\t%.3f\n",total);
puts("------------------------------------------------------------");



t = time(NULL);
ptm = localtime(&t);

strftime(cur_time, 128, "%d-%b-%Y %H:%M:%S", ptm);

printf("date and time: %s\n", cur_time);

}



void edit(int e)
{
    int x,h;
    w: printf("enter the item number to edit the bill or press 0 to print the bill\n");
    scanf("%d",&x);
    if(x!=0)
    {
        printf("press 1 to edit item,2 to edit quantity, 3 to edit price, 4 to edit all");
        scanf("%d",&h);
        switch(h)
        {
            case 1:
            printf("enter the item\n");
            scanf("%s",b[x].item);
            break;
            case 2:
            printf("enter the qty\n");
            scanf("%f",&b[x].qty);
            break;
            case 3:
            printf("enter the price\n");
            scanf("%f",&b[x].price);
            break;
            case 4:
            printf("enter the item\n");
            scanf("%s",b[x].item);
            printf("enter the qty\n");
            scanf("%f",&b[x].qty);
            printf("enter the price\n");
            scanf("%f",&b[x].price);
        }
        goto w;
    }
    else
    {
        sum(x);
        printf("happy shopping!!!\nthank you...\nvisit again.\n");
    }
}


int summ(int f1,int f2);


test_main(void);


