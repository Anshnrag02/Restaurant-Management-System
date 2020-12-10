/* ONLINE FOOD ORDERING DOMAIN FOR ENTERPRISE (for the project sample name is
CENTRAL PERK).

AIM:11th class final project

HIGHLIGHTS:
	    1. PRINTING "*" for password.
	    2. USE of dos.h header file for delay,textcolor.
	    3. RANDOM Number generation using srand,rand function.
	    4. use of time.h header file and stdlib.h header file.
	    5. use of gotoxy.
	    6. modular programming.
	       Most segments of the project are distributed in
	       various modules.

The program takes input in numbers and gives bill.
One can add on to bill, terminate the bill,start new bill.

username 1- an.x.h
user- ansh
password- pr0725sd

username 2- fightingmovie
user- ayush
password- ayush

COUPON CODE TO BE USED AS INPUT
PIZZA50 : Get 50 percent off on pizzas.
COKEJOKE : Get a free coke on order more than INR500.
BREADDED : Get a garlic bread free on order more than INR600.
MEAL20 : Get 20 percent off on meal.

AUTHORS- Ansh Anurag & Ishan Bhateja.
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
#include<time.h>
		      //HEADER FILES
void username(void);
void mainst(void);
void menu(int);
void main(void);
void loading_scr(void);
void pizzawin(int &);
void beverwin(int &);
void sidewin(int &);                 //FUNCTION PROTOYPES
void window(int &);
void billi(void);
void menu(int);
void displaymain(void);
void display1(void);
void display2(void);
void randomthings(void);
void refresh(void);
void credentials(void);
void finbil(void);
void couponcode(void);
			//DECLARATION OF GLOBAL VARIABLE
char usser[30],pwd[30];
char yeet[10]="BREADDED",heet[10]="COKEJOKE",neet[10]="PIZZA50",geet[10]="MEAL20",testu2[30]="fightingmovie",testp2[30]="ayush\r",testu1[30]="an.x.h",testp1[30]="pr0725sd\r";
int P=0,num1=0,num2=0,val=0;
int input,pizza,bevragesf,sideordf;
int quant_pizza=0,quant_sideord=0,quant_bev=0;
int amt[15];
char code[15];
char adress[100],landmark[100],phone[100],area[100];
int total=0;

struct final
{
	char item[30];          //structure initialisation
}
bill[30];

void randomthings()
{
	srand(time(NULL));
	int coup=rand();
	coup=coup%5;              //PRINTING OF RANDOM NUMBERS USING
	if (coup==0)              //srand() and rand()
		cout<<"Sorry No fun Coupons. Better Luck Next Time.";
	else
	{
		cout<<"Congratulations. You just won a fun coupon. Redeem on your next order."<<endl;
		switch (coup)
		{       /*switch case to print fun coupons using generated
		       random number%5*/
			case 1: cout<<"PIZZA50 : Get 50 percent off on pizzas.";break;
			case 2: cout<<"COKEJOKE : Get a free coke on order more than INR500.";break;
			case 3: cout<<"BREADDED : Get a garlic bread free on order more than INR600.";break;
			case 4: cout<<"MEAL20 : Get 20 percent off on meal.";break;
		}
	}
	cout<<endl<<"Press any key to Proceed"<<endl;
	getch();
}

void pizzawin(int &pizzaf)
			/*call by reference from window function
			  pizza input window
			  if else ladder
			  limit on commodity 10	*/

{
	if(pizzaf==1)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string[]="Cheese Pizza";
			strcpy(bill[P].item,string);
			amt[P]=quant_pizza*200;
			val+=amt[P];
			P++;
			clrscr();
			mainst(); //calling function main menu
		}
	}
	else if(pizzaf==2)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string1[]="Paneer Tikka Pizza";
			strcpy(bill[P].item,string1);
			amt[P]=quant_pizza*400;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==3)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string2[]="Mushroom Corn Jalapeno";
			strcpy(bill[P].item,string2);
			amt[P]=quant_pizza*450;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==4)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string3[]="Pork Pepperoni";
			strcpy(bill[P].item,string3);
			amt[P]=quant_pizza*500;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==5)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string4[]="Farmhouse";
			strcpy(bill[P].item,string4);
			amt[P]=quant_pizza*450;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==6)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string5[]="Hawaiian Pizza";
			strcpy(bill[P].item,string5);
			amt[P]=quant_pizza*500;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==7)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string6[]="All the seas Pizza";
			strcpy(bill[P].item,string6);
			amt[P]=quant_pizza*650;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==8)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_pizza;
		if(quant_pizza>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num2+=quant_pizza;
			char string7[]="Mutton Seekh Pizza";
			strcpy(bill[P].item,string7);
			amt[P]=quant_pizza*500;
			val+=amt[P];
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(pizzaf==9)
	{
		clrscr();
		mainst();
	}
	else
	{
		cout<<"Please enter a valid choice!";
		getch();
		mainst();          //calling function main menu
	}
}

void beverwin(int &bevrages)
{
			/*call by reference from window function
			  beverage input window
			  if else ladder
			  limit on commodity 10	*/
	if(bevrages==1)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_bev;
		if(quant_bev>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			char string[]="Pepsi";
			strcpy(bill[P].item,string);
			amt[P]=quant_bev*40;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(bevrages==2)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_bev;
		if(quant_bev>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			char string1[]="Diet Coke";
			strcpy(bill[P].item,string1);
			amt[P]=quant_bev*40;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(bevrages==3)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_bev;
		if(quant_bev>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			char string2[]="Mocktails";
			strcpy(bill[P].item,string2);
			amt[P]=quant_bev*50;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(bevrages==4)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_bev;
		if(quant_bev>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			char string3[]="Coffee";
			strcpy(bill[P].item,string3);
			amt[P]=quant_bev*50;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(bevrages==5)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_bev;
		if(quant_bev>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			char string4[]="Iced Tea";
			strcpy(bill[P].item,string4);
			amt[P]=quant_bev*50;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	 }

	 else if(bevrages==6)
	 {
		clrscr();
		mainst();
	 }
	 else
	 {
		cout<<"Please enter a valid choice!";
		getch();
		mainst();          //calling function main menu
	 }
}

void sidewin(int &sideord)
{
			/*call by reference from window function
			  side order input window
			  if else ladder
			  limit on commodity 10	*/
	if(sideord==1)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_sideord;
		if(quant_sideord>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num1+=quant_sideord;
			char string[]="Garlic Bread";
			strcpy(bill[P].item,string);
			amt[P]=quant_bev*80;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(sideord==2)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_sideord;
		if(quant_sideord>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
		num1+=quant_sideord;
		char string1[]="Choco Lava Cake";
		strcpy(bill[P].item,string1);
		amt[P]=quant_sideord*90;
		P++;
		clrscr();
		mainst();          //calling function main menu
		}
	}
	else if(sideord==3)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_sideord;
		if(quant_sideord>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num1+=quant_sideord;
			char string2[]="Extra Cheese";
			strcpy(bill[P].item,string2);
			amt[P]=quant_sideord*100;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(sideord==4)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_sideord;
		if(quant_sideord>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num1+=quant_sideord;
			char string3[]="Lasagna";
			strcpy(bill[P].item,string3);
			amt[P]=quant_sideord*80;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(sideord==5)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_sideord;
		if(quant_sideord>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num1+=quant_sideord;
			char string4[]="Pretzels";
			strcpy(bill[P].item,string4);
			amt[P]=quant_sideord*90;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}
	else if(sideord==6)
	{
		cout<<"\n ENTER THE QUANTITY"<<endl;
		cin>>quant_sideord;
		if(quant_sideord>10)
			cout<<"Not possible to deliver more than 10 quantities!";
		else
		{
			num1+=quant_sideord;
			char string5[]="Tandoori Momos";
			strcpy(bill[P].item,string5);
			amt[P]=quant_sideord*100;
			P++;
			clrscr();
			mainst();  //calling function main menu
		}
	}

	else if(sideord==7)
	{
		clrscr();
		mainst();
	}                          //calling function main menu
	else
	{
		cout<<"Please enter a valid choice!";
		getch();
		mainst();
	}                          //calling function main menu
}
void billi()
{           		/*call by reference from window function
			  billing output window*/
	clrscr();
	cout<<"Billing........."<<endl;
	delay(2500);
	cout.setf(ios::left);
	cout<<"ITEM \t \t \t COST";
	for(int i=0;i<P;i++)
	{         //for loop to print bill stored in ith element of bill
		cout<<endl;
		cout.setf(ios::left);
		cout<<bill[i].item<<"\t ||    ";
	//	cout.setf(ios::right);
		cout<<amt[i]<<endl;
		total=total+amt[i];
	}
	delay(2000);
	if(total!=0)
	{
		cout.setf(ios::left);
		cout<<"\n TOTAL = RS " <<total;
		  delay(2000);
		cout<<"\nORDER MORE?\nPress y for yes.";
		cout<<"\nPress t to terminate.";
		cout<<"\nPress any other key for no.\n";
		char c;
		cin>>c;
		if(c=='y'||c=='Y')
		{
			cout<<endl<<"1.ADD ON TO THE BILL";
			cout<<endl<<"2.START A FRESH BILL.";
			cout<<endl<<"(ENTER THE CHOICE)\n";
			int choi;
			cin>>choi;
			if (choi==1)
			{
				mainst();       //calling function main menu
			}                           //nested if else
			else if(choi==2)
			{
				credentials();  /*calling function to receive
						address*/
				finbil();       /*calling function to print
						inovice*/
				refresh();
		//calling function to refresh global values
				mainst();       //calling function main menu
			}
		}
		else if(c=='t'||c=='T')
		{
			refresh();
			//calling function to refresh global values
			mainst;       //calling function main menu
		}
		else
		{
			credentials();   /*calling function to receive
						address*/
			finbil();     /*calling function to print
						inovice*/
			exit(0);      //exit program
		}
	}
	else
	{    //for no item bought
		cout<<endl<<"You have nothing in your cart";
		getch();
		mainst();
	}
}
void window(int &x)         //call by reference from mainst(the main menu)
{
	   if(x==1)
	   {
		clrscr();
		menu(1);  //display pizza menu
		cout<<endl;
		cin>>pizza;
		pizzawin(::pizza);      //call by value
	   }
	   else if(x==2)
	   {
		clrscr();
		menu(2);     //display beverage menu
		cout<<endl;
		cin>>bevragesf;
		beverwin(::bevragesf);  //call by value
	   }
	   else if(x==3)
	   {
		clrscr();
		menu(3);      //display sides menu
		cout<<endl;
		cin>>sideordf;
		sidewin(::sideordf);    //call by value
	   }
	   else if(x==4)
		billi();         //bill menu
	   else if(x==5)
		exit(0);
	   else
		cout<<"Please enter a valid choice";
		getch();
		mainst();               //calling function main menu
}

void displaymain()         //main menu DISPLAY
{
	cout<<setw(30)<<"WELCOME TO CENTRAL PERK";
	if(strcmp(pwd,testp1)==0)
	{
		cout<<"\n\nWelcome Mr. Ansh";
	}
	else if(strcmp(pwd,testp2)==0)
	{
		cout<<"\n\nWelcome Mr. Ayush";
	}
	cout<<"\n\n1. Pizza's";
	cout<<"\n\n2. Bevrages";
	cout<<"\n\n3. Side orders";
	cout<<"\n\n4. Create Bill";
	cout<<"\n\n5. Exit";
}

void display1()
{                               //pizza menu
	cout<<"\nIt's about what the Pizzas represent- ALL FOOD";
	cout<<"\nPizza"<<setw(50)<<"\t Price";
	cout<<"\n1.--> Cheese Pizza"<<setw(43)<<"\t Rs. 200";
	cout<<"\n2.--> Paneer Tikka Pizza"<<setw(37)<<"\t Rs. 400";
	cout<<"\n3.--> Mushroom Corn Jalapeno Pizza"<<setw(28)<<"\t Rs. 450";
	cout<<"\n4.--> Pork Pepperoni Pizza"<<setw(35)<<"\t Rs. 500";
	cout<<"\n5.--> Farmhouse Pizza"<<setw(40)<<"\t Rs. 450";
	cout<<"\n6.--> Hawaiian Pizza"<<setw(41)<<"\t Rs. 500";
	cout<<"\n7.--> Seas Pizza"<<setw(45)<<"\t Rs. 650";
	cout<<"\n8.--> Mutton Seekh Pizza"<<setw(37)<<"\t Rs. 500";
	cout<<"\n9.--> HOME";
}
void display2()
{                               //bevrages menu
	cout<<"\nOn a Break? We've got the best drinks for you!";
	cout<<"\nBEVERAGES"<<setw(40)<<"\t Price";
	cout<<"\n1.--> Pepsi"<<setw(44)<<"\t Rs. 40";
	cout<<"\n2.--> Diet Coke"<<setw(40)<<"\t Rs. 40";
	cout<<"\n3.--> Mocktails"<<setw(40)<<"\t Rs. 50";
	cout<<"\n4.--> Coffee"<<setw(43)<<"\t Rs. 50";
	cout<<"\n5.--> Iced Tea"<<setw(41)<<"\t Rs. 50";
	cout<<"\n6.--> HOME";
}
void display3()
{                            //side menu
	cout<<"\nYou need Someone by your Side.";
	cout<<"\nSIDE ORDERS"<<setw(45)<<"\t Price";
	cout<<"\n1.--> Garlic Bread(4 piece)"<<setw(35)<<"\t Rs. 80";
	cout<<"\n2.--> Choco Lava Cake"<<setw(41)<<"\t Rs. 90";
	cout<<"\n3.--> Extra Cheese"<<setw(44)<<"\t Rs. 100";
	cout<<"\n4.--> Lasagna"<<setw(50)<<"\t Rs. 80";
	cout<<"\n5.--> Pretzels"<<setw(49)<<"\t Rs. 90";
	cout<<"\n6.--> Tandoori Momos"<<setw(42)<<"\t Rs. 100";
	cout<<"\n7.--> HOME";
}

void menu(int x)  //value from mainst
{
	switch(x)      //switch to print display screens
	{
		case 0 : displaymain();break;
		case 1 : display1();break;
		case 2 : display2();break;
		case 3 : display3();break;
	}
}
void main()
{
	clrscr();
	loading_scr();
	username();            //this main function
	mainst();
}

void mainst()           //main menu
{
	textcolor(WHITE);
	clrscr();
	menu(0);
	cout<<"\n Please, enter a choice!"<<endl;
	cin>>input;
	window(::input);           //call by value
	cout<<"Press any key to exit"<<endl;
	getch();
}

void loading_scr()                                 //LOADING SCREEN FUNCTION
{
	textcolor(GREEN);
	int x=0;
			//LOGO PRINTING and use of delay to make sequential

	cout<<"                           ______________	"<<endl;
	  delay(150);
	cout<<"                          ________________	"<<endl;
	  delay(150);
	cout<<"                        ...______________...      "<<endl;
	  delay(150);
	cout<<"                       '+++,,,,,,,,,,,,,,+++'	"<<endl;
	  delay(150);
	cout<<"                         ++++++++++++++++++ "<<endl;
	  delay(150);
	cout<<endl<<"                            CENTRAL PERK"<<endl;
	  delay(150);
	cout<<"                     THE ONE WHERE IT ALL STARTED";
	  delay(2500);
	clrscr();
			    //loader function using delay and gotoxy
	gotoxy(30,13);
	cout<<"LOADING...";

	for(int i=1; i<=10; i++)
	{
		gotoxy(30+x,14);
		delay(500);

		cout<<"__";
		x+=2;

		gotoxy(52,14);
		cout<<i*10<<"%";
	}

	gotoxy(35,17);
	cout<<"COMPLETE!";

	gotoxy(50,21);
	cout<<"PRESS ANY KEY TO CONTINUE";
	getch();
}

void username()
{             //username input function
	textcolor(WHITE);
	clrscr();
	cout<<"\n\n\n\n\n\n\t\t\tUSERNAME:\t";
	cin>>usser;
	cout<<endl<<"\t\t\tPASSWORD:\t";
	char a;
	int b=0;
	for(b=0;;)
	{
		a=getch();             //donot print a on screen
		if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'||a<='9'))
		{
			pwd[b]=a;
			b++;
			cout<<"*";         //printing if asterisk
		}
		if(a=='\b'&&b>=1)
		{
			cout<<"\b\b";
			b--;
		}
		if(a==13)
		{
			pwd[b]='\0';
			break;
		}
	}
	//comparision of strings using strcmp
	if((strcmp(usser,testu1)==0) && (strcmp(pwd,testp1)==0))
			mainst();
	else if((strcmp(usser,testu2)==0) && (strcmp(pwd,testp2)==0))
			mainst();
	else
	{
		cout<<"\n\t\t\tInvalid USERNAME/PASSWORD";
		getch();
		username();
	}

}

void refresh()
{
	total=0;                 //function to refresh value
	P=0;
	num1=0;
	num2=0;
	val=0;
	input=0;
	pizza=0;
	bevragesf=0;
	sideordf=0;
	quant_pizza=0;
	quant_sideord=0;
	quant_bev=0;
	for(int k=0;k!=0;k++)
	{
		amt[k]=0;
	}
}

void credentials()       //address and phone number input function
{
	clrscr();
	cout<<"Enter your address."<<endl;
	gets(adress);
	cout<<"Enter Area/locality."<<endl;
	gets(area);
	cout<<"Enter landmark."<<endl;
	gets(landmark);
	char check='y';
	while(check=='y')
	{
		cout<<"Enter Phone number."<<endl;
		gets(phone);
		if(strlen(phone)!=10) //exception handling-10 digit number
			cout<<"Enter a valid number.\n";
		else
			check='l';
	}
}

void finbil()
{              //printing the inovice
	clrscr();
	cout<<"Enter a coupon code in the exact same case. Press Enter if none."<<endl;
	gets(code);   //input coupon code
	clrscr();
	cout<<"WAIT... Final Bill is Being Generated"<<endl;
	delay(5000);
	cout.setf(ios::left);
	cout<<"ITEM \t \t \t COST";
	for(int i=0;i<P;i++)
	{
		cout<<endl;
		cout.setf(ios::left);
		cout<<bill[i].item<<"\t ||    ";
	//	cout.setf(ios::right);
		cout<<amt[i]<<endl;
	}
	couponcode();//calling to generate random coupon code
	srand(time(NULL));
	int coup=rand();
	cout<<"\nBILL NUMBER IS "<<coup; //printing random bill number
	cout<<"\n\n\t\t TOTAL BILL Rs "<<total;
	cout<<"\n\t\t TAXES: Rs "<<total*0.05;
	cout<<"\n\t\t NET PAYABLE AMOUNT: Rs "<<total*1.05;
	cout<<"\nTHANK YOU FOR ORDERING";
	  delay(2000);
	if ((num1+num2)<=6)
		cout<<"\nORDER WILL BE DELIIVERED WITHIN 30mins";
	else
		cout<<"\nBULK ORDER!!! ORDER WILL BE DELIVERED AROUND 60mins";
	  delay(2000);
	cout<<"\nThe Order will be delivered to "<<adress;
	cout<<"\n"<<area;
	cout<<"\n near "<<landmark;
	cout<<"\nContact number: "<<phone<<endl<<endl;
	if(total>=1000)
		randomthings();
     //	cout<<"\n\n\t\t\t\t\tPRESS ANY KEY TO CONTINUE";
	getch();
	clrscr();
}

void couponcode()
{                           //generation of couponcode
	if (strcmp(code,heet)==0)
	{
		if(total>=500)
		cout<<endl<<"You get an Extra Coke"<<endl;
	}
	else if(strcmp(code,yeet)==0)
	{
		if(total>=600)
		cout<<endl<<"You get an Extra Garlic Bread"<<endl;
	}
	else if (strcmp(code,neet)==0)
		total=total-(val/2);
	else if (strcmp(code,geet)==0)
		total=total*0.8;
	else
		cout<<endl<<"Coupon code not entered/not found.";

}