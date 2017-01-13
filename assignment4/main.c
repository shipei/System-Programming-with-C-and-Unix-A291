#include "a4.c"

int main(void) {
  int num;
  printf("Enter the no of students to be created: \n");
  scanf("%d", &num);
  printf("%d students created.\n", num);
  struct person p[num];
  struct record r[num];
  int i = 0;
  while(i < num)
    {
      sprintf(p[i].name, "", 99);
      sprintf(p[i].contact, "", 99);
      sprintf(p[i].address, "", 99);
      r[i].assignment = 0;
      r[i].midterm = 0;
      r[i].final = 0;
      r[i].total = 0;
      i++;
    }
  
  int opt = 0;
  int update = 0;
  int s;
  while(opt != 4)
    {	
      printf("1. Update record\n");
      printf("2. Print all student record\n");
      printf("3. Find out average pf class\n");
      printf("4. Exit\n");
      scanf("%d", &opt);
      
      if(opt == 1)
	{
	  printf("Enter student no: \n");
	  scanf("%d", &s);
	  while(s > num || s < 1)
	    {
	      printf("wrong input!\n");
	      printf("Reenter the student no: ");
	      scanf("%d", &s);
	    }
	  
	  while(update != 7)
	    {			
	      printf("Update record for student %d\n", s);
	      printf("Enter your option\n");
	      printf("1. name\n");
	      printf("2. contact no\n");
	      printf("3. address\n");
	      printf("4. assignment\n");
	      printf("5. mid term\n");
	      printf("6. final\n");
	      printf("7. Go back\n");
	      scanf("%d", &update);
	      
	      if(update >= 1 && update <= 6)
		{ 
		  option(p, r, s - 1, update);
		}
	      else if(update == 7)
		{ 
		  
		}
	      else 
		{
		  printf("The option is not valid!\n");
		}
	    }
	  update = 0;
	  
	}
      
      else if(opt == 2)
	{
	  print(p, r, num);
	}
      else if(opt == 3)
	{
	  average(r, num);
	}
      else if(opt == 4) {}
      else
	{
	  printf("The option is not valid!\n");
	}
    }
  return 0;
}
