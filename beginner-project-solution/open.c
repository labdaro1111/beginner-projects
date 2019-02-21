#include<stdio.h>
int cal()
{
	int money,price,Remain;
	printf("Enter the your money:\n ");
	scanf("%d",&money);
	printf("Enter the money the Price of Goods: \n");
	scanf("%d",&price);
		
	
		if(money>price)
		{
			Remain=money-price;
			printf("Your remain money are: %d\n\n",Remain);
		}
		else if(money<price)
		{
			printf("Your money is not enough\n\n");
		}
		else if(money==price)
		{
			printf("No Remain money!!!\n\n");
		}
	
}
int main()
{
	char i ;
	do{
	cal();	
	printf("Do you want to continue? (Y/N)");
	scanf(" %c",&i);
	}while(i!='N');
		
}
