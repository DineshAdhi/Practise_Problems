#include<stdio.h>
#include<string.h>
int customerCount=0;
char email[40];
char password[40];
int currentUserId;
struct customer
{
  char email[40];
  char password[40];
  char username[30];
  long int mobileNumber;
  int boardingPoint;
  int destinationPoint;
  int coach;
  int ticketStatus;
};
struct customer c[10];
void showInfo()
{
  char ch;
  system("clear");
  gotoxy(5,3);
  printf("Boarding Pass Information");
  gotoxy(6,5);
  printf("Email : %s",c[currentUserId].email);
  gotoxy(6,7);
  printf("Boarding point : ");
  if(c[currentUserId].boardingPoint==1)
  {
    printf("Chennai");
  }
  if(c[currentUserId].boardingPoint==2)
  {
    printf("Bangalore");
  }
  if(c[currentUserId].boardingPoint==3)
  {
    printf("Kolkatta");
  }
  if(c[currentUserId].boardingPoint==4)
  {
    printf("Mumbai");
  }
  if(c[currentUserId].boardingPoint==5)
  {
    printf("Delhi");
  }
  gotoxy(6,9);
  printf("Destination Point : ");
  if(c[currentUserId].destinationPoint==1)
  {
    printf("Chennai");
  }
  if(c[currentUserId].destinationPoint==2)
  {
    printf("Bangalore");
  }
  if(c[currentUserId].destinationPoint==3)
  {
    printf("Kolkatta");
  }
  if(c[currentUserId].destinationPoint==4)
  {
    printf("Mumbai");
  }
  if(c[currentUserId].destinationPoint==5)
  {
    printf("Delhi");
  }
  gotoxy(6,11);
  printf("Coach : ");
  if(c[currentUserId].coach==1)
  {
    printf("First Class");
  }
  if(c[currentUserId].coach==2)
  {
    printf("Business Class");
  }
  if(c[currentUserId].coach==3)
  {
    printf("Economic Class");
  }

  gotoxy(6,13);
  printf("The Boarding pass details have been sent to your mobile : %d \n",c[currentUserId].mobileNumber);
  gotoxy(6,15);
  printf("Do you want to go back to the main menu(Y/y)");
  scanf("%s",&ch);
  switch(ch)
  {
    case 'Y':
      loginSuccess(1);
      break;
    case 'y':
      loginSuccess(1);
      break;
  }

}
void listCoaches()
{
  system("clear");
  gotoxy(5,3);
  printf("Indian Airlines ticketing software system");
  gotoxy(6,5);
  printf("1. First Class");
  gotoxy(6,7);
  printf("2. Business Class");
  gotoxy(6,9);
  printf("3. Economic Class");
}
void listPlaces()
{
  system("clear");
  gotoxy(5,3);
  printf("Indian Airlines ticketing software system");
  gotoxy(6,5);
  printf("1. Chennai");
  gotoxy(6,7);
  printf("2. Bangalore");
  gotoxy(6,9);
  printf("3. Kolkatta");
  gotoxy(6,11);
  printf("4. Mumbai");
  gotoxy(6,13);
  printf("5. Delhi");
}
void booktickets()
{
  listPlaces();
  gotoxy(6,15);
  printf("Please Select your boarding point : ");
  scanf("%d",&c[currentUserId].boardingPoint);
  listPlaces();
  gotoxy(6,15);
  printf("Please Select your destination point : ");
  DestinationSection:
  scanf("%d",&c[currentUserId].destinationPoint);
  if(c[currentUserId].boardingPoint==c[currentUserId].destinationPoint)
  {
    printf("\n\t Boarding Point and Destination must not be same !");
    printf("\n\n\t Please Select your destination point :");
    goto DestinationSection;
  }
  listCoaches();
  gotoxy(6,11);
  printf("Please select the class : ");
  scanf("%d",&c[currentUserId].coach);
  c[currentUserId].ticketStatus=1;
  showInfo();
}
void viewTickets()
{
  if(c[currentUserId].ticketStatus==1)
  {
    showInfo();
  }
  else
  {
    gotoxy(6,18);
    printf("You do not have any boarding passes right now");
    loginSuccess(0);
  }

}
void cancelTickets()
{
  gotoxy(6,18);
  printf("Your tickets have been successfully cancelled");
  c[currentUserId].ticketStatus=0;
  loginSuccess(0);
}
void loginSuccess(int a)
{
  int choice;
  if(a==1)
  {
        system("clear");
  }
  gotoxy(5,3);
  printf("Welcome to Indian Airlines %s ",c[currentUserId].username);
  gotoxy(6,5);
  printf("1. Book Tickets");
  gotoxy(6,7);
  printf("2. View your Tickets");
  gotoxy(6,9);
  printf("3. Cancel Tickets");
  gotoxy(6,11);
  wrongChoiceJump:
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      booktickets();
      break;
    case 2:
      viewTickets();
      break;
    case 3:
      cancelTickets();
      break;
    default:
      gotoxy(6,13);
      printf("Please enter the correct choice\n\n");
      goto wrongChoiceJump;
  }
}
void verifyUser()
{
  int tempCount=0;
    for(int i=0;i<customerCount;i++)
    {
      if(strcmp(c[i].email,email)==0 && strcmp(c[i].password,password)==0)
      {
        printf("%d\n",i);
        currentUserId=i;
        printf("%d\n",currentUserId);
        loginSuccess(1);
        break;
      }
        tempCount++;
    }
    if(tempCount==customerCount)
    {
    signin(0);
    }
}
void gotoxy(int x,int y)
{
  printf("%c[%d;%df",0x1B,y,x);
}
void signin(int a)
{
  system("clear");
  if(a==0)
  {
    gotoxy(7,9);
    printf("You seem to have entered wrong email or password\n");
    gotoxy(7,11);
    printf("Please log in again.. \n");
  }
  gotoxy(5,3);
  printf("Sign in with the correct credentials...");
  gotoxy(7,5);
  printf("E- mail : ");
  scanf("%s",&email);
  gotoxy(7,7);
  printf("Password : ");
  scanf("%s",&password);
  verifyUser();
}
void signup()
{
  system("clear");
  gotoxy(5,3);
  printf("Welcome to Indian Airlines resrvation system");
  gotoxy(5,5);
  printf("Sign up with correct details...");
  gotoxy(6,7);
  printf("E-mail : ");
  scanf("%s",&c[customerCount].email);
  gotoxy(6,9);
  printf("Password : ");
  scanf("%s",&c[customerCount].password );
  gotoxy(6,11);
  printf("Username : " );
  scanf("%s",&c[customerCount].username );
  gotoxy(6,13);
  printf("Mobile : ");
  scanf("%d",&c[customerCount].mobileNumber);
  gotoxy(5,15);
  printf("Your Account has been successfully created");
  gotoxy(5,17);
  printf("Please press enter to sign in");
  customerCount++;
  main();
}
void main()
{
  system("clear");
  int choice;
  gotoxy(5,3);
  printf("Welcome to Indian Airlines resrvation system");
  gotoxy(7,5);
  printf("1. Sign in");
  gotoxy(7,7);
  printf("2. Sign up");
  gotoxy(7,9);
  ChoiceSection:
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      signin(1);
      break;
    case 2:
      signup();
      break;
    default:
      printf("\n \n \tPlease enter the correct choice\n\n \t");
      goto ChoiceSection;
  }



}
