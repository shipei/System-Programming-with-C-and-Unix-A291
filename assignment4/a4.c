#include "student.c"

int option(struct person a[], struct record b[], int i, int num)
{
  if(num == 1) {
    printf("\nname? ");
    scanf("%s", &a[i].name);
  }
  else if(num == 2) {
    printf("\ncontact? ");
    scanf("%s", &a[i].contact);
  }
  else if(num == 3) {
    printf("\naddress? ");
    scanf("%s", &a[i].address);
  }
  else if(num == 4) {
    printf("\nassignment? ");
    scanf("%f", &b[i].assignment);
    b[i].total +=  b[i].assignment;
  }
  else if(num == 5) {
    printf("\nmidterm score? ");
    scanf("%f", &b[i].midterm);
    b[i].total += b[i].midterm;
  }
  else {
    printf("\nfinal? ");
    scanf("%f", &b[i].final);
    b[i].total += b[i].final;
  }
  return 0;
}

int average(struct record b[], int len) {
  double a = 0;
  double m = 0;
  double f = 0;
  double t = 0;
  int i = 0;
  int j = 0;
  int p = 0;
  int q = 0;
  while(i < len) {
    a += b[i].assignment;
    i++;
  }
  while(j < len) {
    m += b[j].midterm;
    j++;
  }
  while(p < len) {
    f += b[p].final;
    p++;
  }
  while(q < len) { 
    t += b[q].total;
    q++;
  }
  
  printf("The average of assignment is %f\n", a / len);
  printf("The average of midterm is %f\n", m / len);
  printf("The average of final is %f\n", f / len);
  printf("The average of total is %f\n", t / len);
  
  return 0;
}


int print(struct person a[], struct record b[], int len) {
  int i = 0;
  while(i < len) {
    printf("student: %d\n", i+1);
    printf("name: %s\n", a[i].name);
    printf("contact: %s\n", a[i].contact);
    printf("address: %s\n", a[i].address);
    printf("assignment: %f\n", b[i].assignment);
    printf("midterm: %f\n", b[i].midterm);
    printf("final: %f\n", b[i].final);
    printf("total: %f\n", b[i].total);
    i++;
  }
  return 0;
}		



