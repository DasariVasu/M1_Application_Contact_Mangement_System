#include <function.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
  
struct contact

{

    long ph;
    char name[20],add[20],email[30];

} list;

char query[20],name[20];

FILE *fp, *ft;

int i,n,ch,l,found;
//Start of main//
int main()

{

main:

    system("cls");    /* ************Main menu ***********************  */
    system("color 3f");
    printf("\n\t **** Knowledge 360 ****");
    printf("\n\t **** Welcome to Contact Management System ****");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a New Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for Contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter Your Choice: ");
