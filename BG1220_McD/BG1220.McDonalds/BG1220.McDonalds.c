#include <stdio.h>
#include <stdlib.h>
int delivery(float d2);
int customer(float c);

int main()
{
	FILE *fpt;
	int count, i, number=0;
	float c=0, profit, day=0;

	fpt=fopen("Data.txt", "w");
	printf("***            ***         *******         **********               *****     \n");
	printf("****          ****       ***********       ************           *********   \n");
	printf("*****        *****      *****    *****     ***      *****        ***     ***  \n");
	printf("******      ******     ****        ***     ***        ****      ***       *** \n");
	printf("*** ***    *** ***     ***                 ***         ***     ***         ***\n");
	printf("***  ***  ***  ***     ***                 ***         ***     ***         ***\n");
	printf("***   ******   ***     ****        ***     ***        ****      ***       *** \n");
	printf("***    ****    ***      *****    *****     ***      *****        ***     ***  \n");
	printf("***            ***       ***********       ************           *********   \n");
	printf("***            ***         *******         **********               *****     \n");
	printf("\n***==========================================================================***\n");
	printf("\t\t\tRAFAELLE FAUSTINE JIMENEZ PALMOS\n");
	printf("\t\t\t     NABA NORINE CHOWDHURY\n\n");
	printf("\t\t      FUNDAMENTALS OF COMPUTER PROCESSING\n");
	printf("\t\t  BG1220 SEC.62 - DR. SIRIKANLAYA CHANEKASIT\n");
	printf("\t\t\t\tPROJECT 1/2010\n");
	printf("\n***==========================================================================***\n");
	system("pause");
	system("cls");
	for(count=0;count!=-1;count++)
	{
		printf("\t1 to make new order\n\t0 to exit\n");
		printf("Choice: ");
		scanf("%d", &i);
		system("cls");
		printf("\n***==========================================================================***\n");
		if(i==1)
		{
			profit = customer(c);
			number++;
		}
		else
		{
			break;
		}
		day = day + profit;
	}
	printf("\nNUMBER OF CUSTOMERS TODAY: %d\n", number);
	fprintf(fpt, "NUMBER OF CUSTOMERS TODAY: %d\n", number);
	printf("DAILY PROFIT: %.2f\n\n\n", day);
	fprintf(fpt, "DAILY PROFIT: %.2f\n", day);
	fclose(fpt);
	printf("\t\t\t\t    ***      ***    \n");
	printf("\t\t\t\t   *****    *****   \n");
	printf("\t\t\t\t  *******  *******  \n");
	printf("\t\t\t\t **** ******** **** \n");
	printf("\t\t\t\t****   ******   ****\n");
	printf("\t\t\t\t***     ****     ***\n");
	printf("\t\t\t\t***      **      ***\n");
	printf("\t\t\t\t***      **      ***\n");
	printf("\n\t\t\t\t   I'M LOVIN' IT!\n\n\n");
	return 0;
}
int customer(float c)
{
	FILE *fpt;
	int order=0;
	float d2=0, sum=0.0, payment, change;
	char del, set, size;

	fpt=fopen("Receipt.txt", "w");
	do
	{
		printf("Is this a delivery order? (Y/N): ");
		scanf(" %c", &del);
		del = toupper(del);
		switch (del)
		{
		case 'Y':
			sum = delivery(d2);
			fprintf(fpt, "FOR DELIVERY\n\n");
			goto STOP;
		case 'N':
			sum = 0.0;
			goto STOP;
		default:
			printf("Invalid!\a\n");
		}
	} while (del!='Y'||'N');

STOP:
	printf("\n***==========================================================================***\n");
	printf("\n\tMAIN\t\t\t\tBREAKFAST\n01\tDouble Big Mac\t\t25\tMcD Chicken Porridge\n02\tDouble Filet\t\t26\tMcEgg Set\n03\tDouble Cheeseburger\t27\tSausage Burger Set\n04\tBig Mac\t\t\t28\tBacon & Egg Burger Set\n05\tJumbo Pork Burger\t29\tSausage Egg Burger Set\n06\tFilet-O-Fish\t\t30\tBig Breakfast w/Burger Set\n07\tMcChicken\t\t31\tDouble Sausage & Egg Burger Set\n08\tSamurai Pork Burger\t32\tMcEgg\n09\tDeluxe Cheeseburger\t33\tSausage Burger\n10\tCheeseburger\t\t34\tSausage Egg Burger\n11\tHamburger\t\t35\tBacon Egg Burger\n12\tPepper Chicken Burger\t36\tDouble Sausage Burger\n13\tPork Burger\t\t37\tBig Breakfast w/Burger\n14\t4pcs. Spicy McWings\n15\t6pcs. Spicy McWings\t\tBEVERAGES\n16\t12pcs. Spicy McWings\t38\tCoke/Coke Zero/Fanta/Sprite\n17\t2pcs. Fried Chicken\t39\tOrange Juice/Iced Coffee/Iced Ovaltine\n18\t3pcs. Chic Stick\t40\tFloat Coffee/Ovaltine/Coke/Fanta/Sprite\n19\t9pcs. Chic Stick\t41\tGourmet Hot Coffee\n20\t6pcs. McNuggets\t\t42\tCappucino/Latte/Mocha/Hot Chocolate\n21\t10pcs. McNuggets\t43\tHot Tea\n22\t20pcs. McNuggets\t44\tSingha Water\n23\tFrench Fries\t\t45\tCoke/Coke Zero in can\n24\tFresh Salad\t\t46\tCoke/Coke Zero 1.25L\n\n\tHAPPY MEAL\t\t\tDESSERTS\n100\tHamburger Set\t\t47\tSundae Strawberry/Chocolate\n101\tPork Burger Set\t\t48\tJelly Trio Strawberry/Chocolate\n102\tPepper Chicken Burger\t49\tMcFlurry Oreo\n103\tMcNuggets Happy Set\t50\tMcFlurry Choco Luv\n\t\t\t\t51\tCone\n\tPROMOTION\t\t52\tCone Dip\n104\tMcWings Tom Yam\t\t53\tCorn/Pineapple Pie\n");
	printf("\n***==========================================================================***\n");

	printf("\nWhat would you like to order? (-1 to end order)\n");
POINT:
	do
	{
		scanf("%d", &order);

		switch (order)
		{
		case 0:
			{
				break;
			}
		case 1:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("150.00\t\t\tDouble Big Mac Set (M)\n");
							fprintf(fpt, "150.00\t\t\tDouble Big Mac Set (M)\n");
							sum = sum + 150.00;
							goto POINT;
						case 'L':
							printf("160.00\t\t\tDouble Big Mac Set (L)\n");
							fprintf(fpt, "160.00\t\t\tDouble Big Mac Set (L)\n");
							sum = sum + 160.00;
							goto POINT;
						case 'X':
							printf("170.00\t\t\tDouble Big Mac Set (X)\n");
							fprintf(fpt, "170.00\t\t\tDouble Big Mac Set (X)\n");
							sum = sum + 170.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("99.00\t\t\tDouble Big Mac\n");
					fprintf(fpt, "99.00\t\t\tDouble Big Mac\n");
					sum = sum + 99.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 2:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("128.00\t\t\tDouble Fillet Set (M)\n");
							fprintf(fpt, "128.00\t\t\tDouble Fillet Set (M)\n");
							sum = sum + 128.00;
							goto POINT;
						case 'L':
							printf("138.00\t\t\tDouble Fillet Set (L)\n");
							fprintf(fpt, "138.00\t\t\tDouble Fillet Set (L)\n");
							sum = sum + 138.00;
							goto POINT;
						case 'X':
							printf("148.00\t\t\tDouble Fillet Set (X)\n");
							fprintf(fpt, "148.00\t\t\tDouble Fillet Set (X)\n");
							sum = sum + 148.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("85.00\t\t\tDouble Fillet\n");
					fprintf(fpt, "85.00\t\t\tDouble Fillet\n");
					sum = sum + 85.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 3:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("121.00\t\t\tDouble Cheeseburger Set (M)\n");
							fprintf(fpt, "121.00\t\t\tDouble Cheeseburger Set (M)\n");
							sum = sum + 121.00;
							goto POINT;
						case 'L':
							printf("131.00\t\t\tDouble Cheeseburger Set (L)\n");
							fprintf(fpt, "131.00\t\t\tDouble Cheeseburger Set (L)\n");
							sum = sum + 131.00;
							goto POINT;
						case 'X':
							printf("141.00\t\t\tDouble Cheeseburger Set (X)\n");
							fprintf(fpt, "141.00\t\t\tDouble Cheeseburger Set (X)\n");
							sum = sum + 141.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("73.00\t\t\tDouble Cheeseburger\n");
					fprintf(fpt, "73.00\t\t\tDouble Cheeseburger\n");
					sum = sum + 73.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 4:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("121.00\t\t\tBig Mac Set (M)\n");
							fprintf(fpt, "121.00\t\t\tBig Mac Set (M)\n");
							sum = sum + 121.00;
							goto POINT;
						case 'L':
							printf("131.00\t\t\tBig Mac Set (L)\n");
							fprintf(fpt, "131.00\t\t\tBig Mac Set (L)\n");
							sum = sum + 131.00;
							goto POINT;
						case 'X':
							printf("141.00\t\t\tBig Mac Set (X)\n");
							fprintf(fpt, "141.00\t\t\tBig Mac Set (X)\n");
							sum = sum + 141.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("73.00\t\t\tBig Mac\n");
					fprintf(fpt, "73.00\t\t\tBig Mac\n");
					sum = sum + 73.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 5:
			printf("73.00\t\t\tJumbo Pork Burger\n");
			fprintf(fpt, "73.00\t\t\tJumbo Pork Burger\n");
			sum = sum + 73.00;
			break;
		case 6:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("105.00\t\t\tFillet-O-Fish Set (M)\n");
							fprintf(fpt, "105.00\t\t\tFillet-O-Fish Set (M)\n");
							sum = sum + 105.00;
							goto POINT;
						case 'L':
							printf("115.00\t\t\tFillet-O-Fish Set (L)\n");
							fprintf(fpt, "115.00\t\t\tFillet-O-Fish Set (L)\n");
							sum = sum + 115.00;
							goto POINT;
						case 'X':
							printf("125.00\t\t\tFillet-O-Fish Set (X)\n");
							fprintf(fpt, "125.00\t\t\tFillet-O-Fish Set (X)\n");
							sum = sum + 125.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("57.00\t\t\tFillet-O-Fish\n");
					fprintf(fpt, "57.00\t\t\tFillet-O-Fish\n");
					sum = sum + 57.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 7:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("105.00\t\t\tMcChicken Set (M)\n");
							fprintf(fpt, "105.00\t\t\tMcChicken Set (M)\n");
							sum = sum + 105.00;
							goto POINT;
						case 'L':
							printf("115.00\t\t\tMcChicken Set (L)\n");
							fprintf(fpt, "115.00\t\t\tMcChicken Set (L)\n");
							sum = sum + 115.00;
							goto POINT;
						case 'X':
							printf("125.00\t\t\tMcChicken Set (X)\n");
							fprintf(fpt, "125.00\t\t\tMcChicken Set (X)\n");
							sum = sum + 125.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("57.00\t\t\tMcChicken\n");
					fprintf(fpt, "57.00\t\t\tMcChicken\n");
					sum = sum + 57.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 8:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("105.00\t\t\tSamurai Pork Burger Set (M)\n");
							fprintf(fpt, "105.00\t\t\tSamurai Pork Burger Set (M)\n");
							sum = sum + 105.00;
							goto POINT;
						case 'L':
							printf("115.00\t\t\tSamurai Pork Burger Set (L)\n");
							fprintf(fpt, "115.00\t\t\tSamurai Pork Burger Set (L)\n");
							sum = sum + 115.00;
							goto POINT;
						case 'X':
							printf("125.00\t\t\tSamurai Pork Burger Set (X)\n");
							fprintf(fpt, "125.00\t\t\tSamurai Pork Burger Set (X)\n");
							sum = sum + 125.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("57.00\t\t\tSamurai Pork Burger\n");
					fprintf(fpt, "57.00\t\t\tSamurai Pork Burger\n");
					sum = sum + 57.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 9:
			printf("53.00\t\t\tDeluxe Cheeseburger\n");
			fprintf(fpt, "53.00\t\t\tDeluxe Cheeseburger\n");
			sum = sum + 53.00;
			break;
		case 10:
			printf("39.00\t\t\tCheeseburger\n");
			fprintf(fpt, "39.00\t\t\tCheeseburger\n");
			sum = sum + 39.00;
			break;
		case 11:
			printf("23.00\t\t\hamburger\n");
			fprintf(fpt, "23.00\t\t\hamburger\n");
			sum = sum + 23.00;
			break;
		case 12:
			printf("23.00\t\t\tPepper Chicken Burger\n");
			fprintf(fpt, "23.00\t\t\tPepper Chicken Burger\n");
			sum = sum + 23.00;
			break;
		case 13:
			printf("23.00\t\t\tPork Burger\n");
			fprintf(fpt, "23.00\t\t\tPork Burger\n");
			sum = sum + 23.00;
			break;
		case 14:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("105.00\t\t\t4pcs. Spicy McWings Set (M)\n");
							fprintf(fpt, "105.00\t\t\t4pcs. Spicy McWings Set (M)\n");
							sum = sum + 105.00;
							goto POINT;
						case 'L':
							printf("115.00\t\t\t4pcs. Spicy McWings Set (L)\n");
							fprintf(fpt, "115.00\t\t\t4pcs. Spicy McWings Set (L)\n");
							sum = sum + 115.00;
							goto POINT;
						case 'X':
							printf("125.00\t\t\t4pcs. Spicy McWings Set (X)\n");
							fprintf(fpt, "125.00\t\t\t4pcs. Spicy McWings Set (X)\n");
							sum = sum + 125.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("56.00\t\t\t4pcs. Spicy McWings\n");
					fprintf(fpt, "56.00\t\t\t4pcs. Spicy McWings\n");
					sum = sum + 56.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 15:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("127.00\t\t\t6pcs. Spicy McWings Set (M)\n");
							fprintf(fpt, "127.00\t\t\t6pcs. Spicy McWings Set (M)\n");
							sum = sum + 127.00;
							goto POINT;
						case 'L':
							printf("137.00\t\t\t6pcs. Spicy McWings Set (L)\n");
							fprintf(fpt, "137.00\t\t\t6pcs. Spicy McWings Set (L)\n");
							sum = sum + 137.00;
							goto POINT;
						case 'X':
							printf("147.00\t\t\t6pcs. Spicy McWings Set (X)\n");
							fprintf(fpt, "147.00\t\t\t6pcs. Spicy McWings Set (X)\n");
							sum = sum + 147.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("79.00\t\t\t6pcs. Spicy McWings\n");
					fprintf(fpt, "79.00\t\t\t6pcs. Spicy McWings\n");
					sum = sum + 79.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 16:
			printf("149.00\t\t\t12pcs. Spicy McWings\n");
			fprintf(fpt, "149.00\t\t\t12pcs. Spicy McWings\n");
			sum = sum + 149.00;
			break;
		case 17:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("121.00\t\t\t2pcs. Fried Chicken Set (M)\n");
							fprintf(fpt, "121.00\t\t\t2pcs. Fried Chicken Set (M)\n");
							sum = sum + 121.00;
							goto POINT;
						case 'L':
							printf("131.00\t\t\t2pcs. Fried Chicken Set (L)\n");
							fprintf(fpt, "131.00\t\t\t2pcs. Fried Chicken Set (L)\n");
							sum = sum + 131.00;
							goto POINT;
						case 'X':
							printf("141.00\t\t\t2pcs. Fried Chicken Set (X)\n");
							fprintf(fpt, "141.00\t\t\t2pcs. Fried Chicken Set (X)\n");
							sum = sum + 141.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("77.00\t\t\t2pcs. Fried Chicken\n");
					fprintf(fpt, "77.00\t\t\t2pcs. Fried Chicken\n");
					sum = sum + 77.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 18:
			printf("45.00\t\t\t3pcs. Chic Stick\n");
			fprintf(fpt, "45.00\t\t\t3pcs. Chic Stick\n");
			sum = sum + 45.00;
			break;
		case 19:
			printf("121.00\t\t\tChic Stick\n");
			fprintf(fpt, "121.00\t\t\tChic Stick\n");
			sum = sum + 121.00;
			break;
		case 20:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("105.00\t\t\t6pcs. Chicken McNuggets Set (M)\n");
							fprintf(fpt, "105.00\t\t\t6pcs. Chicken McNuggets Set (M)\n");
							sum = sum + 105.00;
							goto POINT;
						case 'L':
							printf("115.00\t\t\t6pcs. Chicken McNuggets Set (L)\n");
							fprintf(fpt, "115.00\t\t\t6pcs. Chicken McNuggets Set (L)\n");
							sum = sum + 115.00;
							goto POINT;
						case 'X':
							printf("125.00\t\t\t6pcs. Chicken McNuggets Set (X)\n");
							fprintf(fpt, "125.00\t\t\t6pcs. Chicken McNuggets Set (X)\n");
							sum = sum + 125.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("59.00\t\t\t6pcs. Chicken McNuggets\n");
					fprintf(fpt, "59.00\t\t\t6pcs. Chicken McNuggets\n");
					sum = sum + 59.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 21:
			do
			{
				printf("Would you like a set meal? (Y/N): ");
				scanf(" %c", &set);
				set = toupper(set);
				if (set=='Y')
				{
					do
					{
						printf("What size would you like for your coke and fries? (M/L/X): ");
						scanf(" %c", &size);
						size = toupper(size);
						switch (size)
						{
						case 'M':
							printf("132.00\t\t\t10pcs. Chicken McNuggets Set (M)\n");
							fprintf(fpt, "132.00\t\t\t10pcs. Chicken McNuggets Set (M)\n");
							sum = sum + 132.00;
							goto POINT;
						case 'L':
							printf("142.00\t\t\t10pcs. Chicken McNuggets Set (L)\n");
							fprintf(fpt, "142.00\t\t\t10pcs. Chicken McNuggets Set (L)\n");
							sum = sum + 142.00;
							goto POINT;
						case 'X':
							printf("152.00\t\t\t10pcs. Chicken McNuggets Set (X)\n");
							fprintf(fpt, "152.00\t\t\t10pcs. Chicken McNuggets Set (X)\n");
							sum = sum + 152.00;
							goto POINT;
						default:
							printf("Invalid!\a\n");
							break;
						}
					} while (size!='M'||'L'||'X');
				}
				else if (set=='N')
				{
					printf("90.00\t\t\t10pcs. Chicken McNuggets\n");
					fprintf(fpt, "90.00\t\t\t10pcs. Chicken McNuggets\n");
					sum = sum + 90.00;
					break;
				}
				else
				{
					printf("Invalid!\a\n");
				}
			} while (set!='Y'||'N');
			break;
		case 22:
			printf("167.00\t\t\t20pcs. Chicken McNuggets\n");
			fprintf(fpt, "167.00\t\t\t20pcs. Chicken McNuggets\n");
			sum = sum + 167.00;
			break;
		case 23:
			do
			{
				printf("What size would you like for your French Fries? (S/M/L/X): ");
				scanf(" %c", &size);
				size = toupper(size);
				switch (size)
				{
				case 'S':
					printf("23.00\t\t\tFrench Fries (S)\n");
					fprintf(fpt, "23.00\t\t\tFrench Fries (S)\n");
					sum = sum + 23.00;
					goto POINT;
				case 'M':
					printf("43.00\t\t\tFrench Fries (M)\n");
					fprintf(fpt, "43.00\t\t\tFrench Fries (M)\n");
					sum = sum + 43.00;
					goto POINT;
				case 'L':
					printf("50.00\t\t\tFrench Fries (L)\n");
					fprintf(fpt, "50.00\t\t\tFrench Fries (L)\n");
					sum = sum + 50.00;
					goto POINT;
				case 'X':
					printf("56.00\t\t\tFrench Fries (X)\n");
					fprintf(fpt, "56.00\t\t\tFrench Fries (X)\n");
					sum = sum + 56.00;
					goto POINT;
				default:
					printf("Invalid!\a\n");
					break;
				}
			} while (size!='S'||'M'||'L'||'X');
		case 24:
			printf("53.00\t\t\tFresh Salad\n");
			fprintf(fpt, "53.00\t\t\tFresh Salad\n");
			sum = sum + 53.00;
			break;
		case 25:
			printf("29.00\t\t\tMcD Chicken Porridge\n");
			fprintf(fpt, "29.00\t\t\tMcD Chicken Porridge\n");
			sum = sum + 29.00;
			break;
		case 26:
			printf("74.00\t\t\tMcEgg Set\n");
			fprintf(fpt, "74.00\t\t\tMcEgg Set\n");
			sum = sum + 74.00;
			break;
		case 27:
			printf("89.00\t\t\tSausage Burger Set\n");
			fprintf(fpt, "89.00\t\t\tSausage Burger Set\n");
			sum = sum + 89.00;
			break;
		case 28:
			printf("99.00\t\t\tBacon & Egg Burger Set\n");
			fprintf(fpt, "99.00\t\t\tBacon & Egg Burger Set\n");
			sum = sum + 99.00;
			break;
		case 29:
			printf("99.00\t\t\tSausage Egg Burger Set\n");
			fprintf(fpt, "99.00\t\t\tSausage Egg Burger Set\n");
			sum = sum + 99.00;
			break;
		case 30:
			printf("109.00\t\t\tBig Breakfast w/Burger Set\n");
			fprintf(fpt, "109.00\t\t\tBig Breakfast w/Burger Set\n");
			sum = sum + 109.00;
			break;
		case 31:
			printf("120.00\t\t\tDouble Sausage & Egg Burger Set\n");
			fprintf(fpt, "120.00\t\t\tDouble Sausage & Egg Burger Set\n");
			sum = sum + 120.00;
			break;
		case 32:
			printf("35.00\t\t\tMcEgg\n");
			fprintf(fpt, "35.00\t\t\tMcEgg\n");
			sum = sum + 35.00;
			break;
		case 33:
			printf("49.00\t\t\tSausage Burger\n");
			fprintf(fpt, "49.00\t\t\tSausage Burger\n");
			sum = sum + 49.00;
			break;
		case 34:
			printf("59.00\t\t\tSausage Egg Burger\n");
			fprintf(fpt, "59.00\t\t\tSausage Egg Burger\n");
			sum = sum + 59.00;
			break;
		case 35:
			printf("59.00\t\t\tBacon Egg Burger\n");
			fprintf(fpt, "59.00\t\t\tBacon Egg Burger\n");
			sum = sum + 59.00;
			break;
		case 36:
			printf("79.00\t\t\tDouble Sausage Burger\n");
			fprintf(fpt, "79.00\t\t\tDouble Sausage Burger\n");
			sum = sum + 79.00;
			break;
		case 37:
			printf("89.00\t\t\tBig Breakfast w/Burger\n");
			fprintf(fpt, "89.00\t\t\tBig Breakfast w/Burger\n");
			sum = sum + 89.00;
			break;
		case 38:
			do
			{
				printf("What size would you like for your drink? (S/M/L/X): ");
				scanf(" %c", &size);
				size = toupper(size);
				switch (size)
				{
				case 'S':
					printf("23.00\t\t\tCoke/Coke Zero/Fanta/Sprite (S)\n");
					fprintf(fpt, "23.00\t\t\tCoke/Coke Zero/Fanta/Sprite (S)\n");
					sum = sum + 23.00;
					goto POINT;
				case 'M':
					printf("27.00\t\t\tCoke/Coke Zero/Fanta/Sprite (M)\n");
					fprintf(fpt, "27.00\t\t\tCoke/Coke Zero/Fanta/Sprite (M)\n");
					sum = sum + 27.00;
					goto POINT;
				case 'L':
					printf("33.00\t\t\tCoke/Coke Zero/Fanta/Sprite (L)\n");
					fprintf(fpt, "33.00\t\t\tCoke/Coke Zero/Fanta/Sprite (L)\n");
					sum = sum + 33.00;
					goto POINT;
				case 'X':
					printf("43.00\t\t\tCoke/Coke Zero/Fanta/Sprite (X)\n");
					fprintf(fpt, "43.00\t\t\tCoke/Coke Zero/Fanta/Sprite (X)\n");
					sum = sum + 43.00;
					goto POINT;
				default:
					printf("Invalid!\a\n");
					break;
				}
			} while (size!='S'||'M'||'L'||'X');
		case 39:
			do
			{
				printf("What size would you like for your drink? (S/M/L): ");
				scanf(" %c", &size);
				size = toupper(size);
				switch (size)
				{
				case 'S':
					printf("32.00\t\t\tOrange Juice/Iced Coffee/Iced Ovaltine (S)\n");
					fprintf(fpt, "32.00\t\t\tOrange Juice/Iced Coffee/Iced Ovaltine (S)\n");
					sum = sum + 32.00;
					goto POINT;
				case 'M':
					printf("42.00\t\t\tOrange Juice/Iced Coffee/Iced Ovaltine (M)\n");
					fprintf(fpt, "42.00\t\t\tOrange Juice/Iced Coffee/Iced Ovaltine (M)\n");
					sum = sum + 42.00;
					goto POINT;
				case 'L':
					printf("52.00\t\t\tOrange Juice/Iced Coffee/Iced Ovaltine (L)\n");
					fprintf(fpt, "52.00\t\t\tOrange Juice/Iced Coffee/Iced Ovaltine (L)\n");
					sum = sum + 52.00;
					goto POINT;
				default:
					printf("Invalid!\a\n");
					break;
				}
			} while (size!='S'||'M'||'L');
		case 40:
			do
			{
				printf("What size would you like for your drink? (S/L): ");
				scanf(" %c", &size);
				size = toupper(size);
				switch (size)
				{
				case 'S':
					printf("26.00\t\t\tFloat Coffee/Ovaltine/Coke/Fanta/Sprite (S)\n");
					fprintf(fpt, "26.00\t\t\tFloat Coffee/Ovaltine/Coke/Fanta/Sprite (S)\n");
					sum = sum + 26.00;
					goto POINT;
				case 'L':
					printf("40.00\t\t\tFloat Coffee/Ovaltine/Coke/Fanta/Sprite (L)\n");
					fprintf(fpt, "40.00\t\t\tFloat Coffee/Ovaltine/Coke/Fanta/Sprite (L)\n");
					sum = sum + 40.00;
					goto POINT;
				default:
					printf("Invalid!\a\n");
					break;
				}
			} while (size!='S'||'L');
		case 41:
			do
			{
				printf("What size would you like for your drink? (S/L): ");
				scanf(" %c", &size);
				size = toupper(size);
				switch (size)
				{
				case 'S':
					printf("25.00\t\t\tGourmet Hot Coffee (S)\n");
					fprintf(fpt, "25.00\t\t\tGourmet Hot Coffee (S)\n");
					sum = sum + 25.00;
					goto POINT;
				case 'L':
					printf("32.00\t\t\tGourmet Hot Coffee (L)\n");
					fprintf(fpt, "32.00\t\t\tGourmet Hot Coffee (L)\n");
					sum = sum + 32.00;
					goto POINT;
				default:
					printf("Invalid!\a\n");
					break;
				}
			} while (size!='S'||'L');
		case 42:
			printf("35.00\t\t\tGourmet Cappucino/Latte/Mocha/Hot Chocolate\n");
			fprintf(fpt, "35.00\t\t\tGourmet Cappucino/Latte/Mocha/Hot Chocolate\n");
			sum = sum + 35.00;
			break;
		case 43:
			printf("20.00\t\t\tHot Tea\n");
			fprintf(fpt, "20.00\t\t\tHot Tea\n");
			sum = sum + 20.00;
			break;
		case 44:
			printf("15.00\t\t\tSingha Water\n");
			fprintf(fpt, "15.00\t\t\tSingha Water\n");
			sum = sum + 15.00;
			break;
		case 45:
			printf("30.00\t\t\tCoke/Coke Zero in can\n");
			fprintf(fpt, "30.00\t\t\tCoke/Coke Zero in can\n");
			sum = sum + 30.00;
			break;
		case 46:
			printf("35.00\t\t\tCoke/Coke Zero 1.25L\n");
			fprintf(fpt, "35.00\t\t\tCoke/Coke Zero 1.25L\n");
			sum = sum + 35.00;
			break;
		case 47:
			printf("26.00\t\t\tSundae Strawberry/Chocolate\n");
			fprintf(fpt, "26.00\t\t\tSundae Strawberry/Chocolate\n");
			sum = sum + 26.00;
			break;
		case 48:
			printf("26.00\t\t\tJelly Trio Strawberry/Chocolate\n");
			fprintf(fpt, "26.00\t\t\tJelly Trio Strawberry/Chocolate\n");
			sum = sum + 26.00;
			break;
		case 49:
			printf("23.00\t\t\tMcFlurry Oreo\n");
			fprintf(fpt, "23.00\t\t\tMcFlurry Oreo\n");
			sum = sum + 23.00;
			break;
		case 50:
			printf("26.00\t\t\tMcFlurry Choco Luv\n");
			fprintf(fpt, "26.00\t\t\tMcFlurry Choco Luv\n");
			sum = sum + 26.00;
			break;
		case 51:
			printf("9.00\t\t\tCone\n");
			fprintf(fpt, "9.00\t\t\tCone\n");
			sum = sum + 9.00;
			break;
		case 52:
			printf("12.00\t\t\tCone Dip\n");
			fprintf(fpt, "12.00\t\t\tCone Dip\n");
			sum = sum + 12.00;
			break;
		case 53:
			printf("23.00\t\t\tCorn/Pineapple Pie\n");
			fprintf(fpt, "23.00\t\t\tCorn/Pineapple Pie\n");
			sum = sum + 23.00;
			break;
		case 100:
			printf("64.00\t\t\tHAPPY MEAL: Hamburger Set\n");
			fprintf(fpt, "64.00\t\t\tHAPPY MEAL: Hamburger Set\n");
			sum = sum + 64.00;
			break;
		case 101:
			printf("64.00\t\t\tHAPPY MEAL: Pork Burger Set\n");
			fprintf(fpt, "64.00\t\t\tHAPPY MEAL: Pork Burger Set\n");
			sum = sum + 64.00;
			break;
		case 102:
			printf("64.00\t\t\tHAPPY MEAL: Pepper Chicken Burger Set\n");
			fprintf(fpt, "64.00\t\t\tHAPPY MEAL: Pepper Chicken Burger Set\n");
			sum = sum + 64.00;
			break;
		case 103:
			printf("72.00\t\t\tHAPPY MEAL: McNugget Happy Set\n");
			fprintf(fpt, "72.00\t\t\tHAPPY MEAL: McNugget Happy Set\n");
			sum = sum + 72.00;
			break;
		case 104:
			printf("39.00\t\t\tPROMOTION: McWings Tom Yam\n");
			fprintf(fpt, "39.00\t\t\tPROMOTION: McWings Tom Yam\n");
			sum = sum + 39.00;
			break;
		case -1:
			goto FINISH;
		default:
			printf("Invalid!\a\n");
			break;
		}
	} while (order!=-1);
FINISH:
	printf("\nTOTAL AMOUNT: %.2f\n", sum);
	fprintf(fpt, "\n\nTOTAL AMOUNT:\t\t%.2f\n", sum);
	printf("PAYMENT: ");
	fprintf(fpt, "PAYMENT:\t\t");
	do
	{
		scanf("%f", &payment);

		if (payment>=sum)
		{
			fprintf(fpt, "%.2f\n", payment);
			change = payment - sum;
			printf("CHANGE DUE: %.2f\n\n", change);
			fprintf(fpt, "CHANGE DUE:\t\t%.2f\n", change);
		}
		else if (payment<sum)
		{
			printf("Invalid amount!\a\n");
		}
	} while (payment < sum);
	fclose(fpt);
	return sum;
}

int delivery(float d2)
{
	float sum1=0.0;
	sum1 = sum1 + 30.0;
	return sum1;
}