#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int date,month,year;
int ac=50, acc=30, non =60;
int adult ,child ,Totals ,Acp= 1200 ,Accp=0,Nonp=0,Adultp=0,Childp=0,totals=0;
int seat,seate;

void availseat();
void seatcnt();
void Ac();
void Acc();
void None();

void showticket();

void main()
{
    printf("\t\t<----- Welcome to Tiger Express Ticket Management System ---> \n\n");
    printf("\nEnter The travel Date : \n ");
    scanf("%d %d %d",&date,&month,&year);
    if((date>31||date<1)||(month>12||month<1)||(year<2020||year>2021))
    {
        printf(" \n\n\n\t\t\a!!!Input Error !!!\a\n \t\t!!!Try again!!!\n\n ");
    }
    else
    {
        availseat();
    }
}
void availseat()
{
    int choice;
    printf("\n\n\n\t\t The Available seats are : \n 1.AC(seat) : %d \n 2.AC(Chair) : %d \n 3.NON-AC : %d \n 4.Exit",ac,acc,non);
    printf("\n\nEnter your option : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
         seatcnt();
            Ac();
        break;
    case 2 :
         seatcnt();
            Acc();
        break;
    case 3 :
         seatcnt();
            None();
        break;
    case 4 :
        exit(0);
    }
}
void seatcnt()
{
    printf("Enter number of seats (adult child) : ");
    scanf("%d""%d",&adult,&child);
    Totals = adult + child;
}
void Ac()
{
    ac-=Totals;
    Adultp = Acp;
    Childp = (Acp/100)*50;
    totals = (adult*Adultp)+(child*Childp);
    srand(time(0));
    seat = rand()%50;
    seate = seat + Totals - 1;
    showticket();
}
void Acc()
{
    acc-=Totals;
    Adultp = (Acp/100)*75;
    Childp = (Adultp/100)*50;
    totals = (adult*Adultp)+(child*Childp);
    srand(time(0));
    seat = rand()%30;
    seate = seat + Totals - 1;
    showticket();
}
void None()
{
    non-=Totals;
    Adultp = (Acp/100)*50;
    Childp = (Adultp/100)*50;
    totals = (adult*Adultp)+(child*Childp);
    srand(time(0));
    seat = rand()%60;
    seate = seat + Totals - 1;
    showticket();
}
void showticket()
{
    if(Totals==0)
    {
        printf("-------ERROR-------");

    }
       else
       {
         printf("\n---------------------------------------------------------\n\n");
    printf("Your Ticket (Tiger Express) \n");
    printf("\tDate of Journey: %d/%d/%d \n",date,month,year);
    printf("\tThe number of seat(s): %d \n",Totals);
    printf("\tTotal fare= : %d * %d + %d * %d = %d \n",adult,Adultp,child,Childp,totals);

        if (Totals!=1)
        {
            printf("\tThe Seat Numbers : %d - %d",seat,seate);
        }

       else
         printf("\tThe Seat Numbers : %d ",seat);

        printf("\n\n");
       }




}
