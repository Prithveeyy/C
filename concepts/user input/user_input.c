 #include <stdio.h>
 #include <string.h>

 int main(){
  char fullname [25];
  int age;
  printf("what's your name ?");
  fgets(fullname, 25 , stdin);
  fullname[strlen(fullname)-1] = '\0';


  printf("How old are you ?");
  scanf("%d", &age);
  
  printf("your name is %s",fullname);
  printf("\nyou are %d Years old" ,age);

  return 0;
  }
