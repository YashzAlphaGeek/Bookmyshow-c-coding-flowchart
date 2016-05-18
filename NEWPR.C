#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int main(void)
{
FILE *fu;
int ch,tt,s,tcost,sel,mov,p,g,si,che,i,line=3; /*if line=1 password incorrect*/
float t;
char log[25],pass[25],str[25];
clrscr();
printf("Login id\n");
scanf("%s",log);
//printf("Password\n");
//scanf("%s",pass);
/*file creation */
fu=fopen("user.txt","r");
if(fu==NULL)
{
printf("Failed to open file\n");
return;
}
printf("Password:\n");
scanf("%s",pass);
//printf("Enter the line number:\n");
//scanf("%d",&line);
for(i=0;i<line;++i)
{
fgets(str,sizeof(str),fu);
}
str[strlen(str)-1]='\0';
if(strcmp(pass,str)==0)
{
printf("Matched...logged in\n");
}
else
{
printf("Try again...Check your password\n");
goto error;
}



printf("Cities\n1.Coimbatore\t2.Chennai\n");
printf("Enter your option for the city:\n");
scanf("%d",&tt);
switch(tt)
{
case 1:
printf("Coimbatore\n");
break;
case 2:
printf("Chennai\n");
break;
default:
printf("Wrong selection\n");
goto error;
}
/*length = strlen(city);
//printf("%d",length);
*/
if(tt==1)                                /*theatre */
{
printf("1.Kg Cinemas\n");
printf("2.The Cinemas Brookes\n");
printf("3.Fun Cinemas\n");
printf("4.Sarvam\n");
printf("Select the theatre\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Kg Cinemas\n");
break;
case 2:
printf("The Cinemas Brookes\n");
break;
case 3:
printf("Fun Cinemas\n");
break;
case 4:
printf("Sarvam\n");
break;
default:
printf("Wrong Selection\n");
goto error;
}
}
else if(tt==2)
{
printf("1.Sathyam Cinemas\n");
printf("2.Mayajal\n");
printf("3.Luxe\n");
printf("4.Imax\n");
scanf("%d",&che);
switch(che)
{
case 1:
printf("Sathyam Cinemas\n");
break;
case 2:
printf("Mayajal\n");
break;
case 3:
printf("Luxe\n");
break;
case 4:
printf("Imax\n");
break;
default:
printf("Wrong Selection\n");
goto error;
}
}
printf("Movies\n");                                   /*Movies */
printf("1.Theri\n2.24\n3.Jungle Book\n4.Captain America Civil war\n5.Baaghi(hindi)\n");
scanf("%d",&mov);
switch(mov)
{
case 1:
printf("Theri\n");
break;
case 2:
printf("24\n");
break;
case 3:
printf("Jungle Book\n");
break;
case 4:
printf("Captain America Civil war\n");
break;
case 5:
printf("Baaghi(hindi)\n");
break;
default:
printf("Wrong Selection\n");
goto error;
}                                                       /*Timings */
printf("Show timings\n");
printf("10.00am\t12.00pm\t3.00pm\t9.00pm\n");
scanf("%f",&t);
//printf("Selected time:%.2f\n",t);
if(t==10.00)
{
printf("10.00am show\n");
}
else if(t==12.00)
{
printf("12.00pm show\n");
}
else if(t==3.00)
{
printf("3.00pm show\n");
}
else if(t==9.00)
{
printf("9.00pm show\n");
}
else
{
goto error;
}
printf("Number of seats:\n");                              /*Seats */
scanf("%d",&s);
printf("Seats:%d\n",s);

printf("Ticket type:\n");
printf("1.Platinum\t2.Gold\t3.Silver\n");
scanf("%d",&sel);
switch(sel)
{
case 1:
printf("Booking Confirmation\n");
//printf("%d\n",ch);
if(ch==1)
printf("Kg Cinemas\n");
else if(ch==2)
printf("The Cinemas Brookes\n");
else if(ch==3)
printf("Fun Cinemas\n");
else if(ch==4)
printf("Sarvam\n");
else if(che==1)
printf("Sathyam Cinemas\n");
else if(che==2)
printf("Mayajal\n");
else if(che==3)
printf("Luxe");
else if(che==4)
printf("Imax\n");
printf("Platinum\n");
printf("Seats:\n");
for(p=1;p<=s;p++)
{
printf("P%d\n",p);
}
printf("Selected time: %.2f\n",t);
tcost=150*s;                                         /*Platinum = 150rs */
printf("Total cost: %d",tcost);
break;
case 2:
printf("Booking Confirmation\n");
if(ch==1)
printf("Kg Cinemas\n");
else if(ch==2)
printf("The Cinemas Brookes\n");
else if(ch==3)
printf("Fun Cinemas\n");
else if(ch==4)
printf("Sarvam\n");
else if(che==1)
printf("Sathyam Cinemas\n");
else if(che==2)
printf("Mayajal\n");
else if(che==3)
printf("Luxe");
else if(che==4)
printf("Imax\n");
printf("Gold\n");
printf("Seats:\n");
for(g=1;g<=s;g++)
{
printf("G%d\n",g);                                   /*Gold = 150rs */
}
printf("Selected time: %.2f\n",t);
tcost=110*s;
printf("Total cost: %d",tcost);
break;
case 3:
printf("Booking Confirmation\n");
if(ch==1)
printf("Kg Cinemas\n");
else if(ch==2)
printf("The Cinemas Brookes\n");
else if(ch==3)
printf("Fun Cinemas");
else if(ch==4)
printf("Sarvam\n");
else if(che==1)
printf("Sathyam Cinemas\n");
else if(che==2)
printf("Mayajal\n");
else if(che==3)
printf("Luxe");
else if(che==4)
printf("Imax\n");
printf("Silver\n");
printf("Seats:\n");
for(si=1;si<=s;si++)
{                                                      /*Silver = 150rs */
printf("S%d\n",si);
}
printf("Selected time:%.2f\n",t);
tcost=100*s;
printf("Total cost:%d",tcost);
break;
default:
printf("Booking Failed\n");
//printf("Cash refunded\n");
error:
printf("Try again");
}
fclose(fu);					     /*Mission completed */
getch();
return 0;
}
