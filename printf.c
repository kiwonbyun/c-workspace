#include <stdio.h>
#include <string.h>

struct entry{
  char fname[20];
  char lname[20];
  char phone[10];
};
struct entry list[4];
int i;

int main(){
  for(i=0; i<4; i++){
    printf("Enter first name :");
    scanf("%s", list[i].fname);
    printf("Enter last name :");
    scanf("%s", list[i].lname);
    printf("Enter phone number :");
    scanf("%s", list[i].phone);
    printf("\n");
  }
  printf("\n");
  for(i=0; i<4; i++){
    printf("Name: %s %s, phone: %s", list[i].lname,list[i].fname, list[i].phone);
  }
}

