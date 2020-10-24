#include<stdio.h>
#include<math.h>
//request a whole number from the user and print a square number
int main()
{
    int x,sqno;
    printf("Enter a number:");
    scanf("%d",&x);
    sqno=x*x;
    printf("The given number is %d and square of the given number is %d\n",x,sqno);
    time_t ti;
    time(&ti);
//the system time and the mac address to be displayed
    printf("The system time: %s", ctime(&ti));
    system("getmac");
	getch();
	return 0;
}

