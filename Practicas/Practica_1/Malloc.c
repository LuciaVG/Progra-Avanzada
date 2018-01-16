#include <stdio.h>
#include <string.h>

int doFullName(char *fName, char *lName, char **fullName){
  int sizeFName = strlen(fName);
  int sizeLName = strlen(lName);

  *fullName = (char *)malloc( (sizeFName + sizeLName + 1) * sizeof(char) );

  strcpy(*fullName, fName);
  strcpy(*fullName + sizeFName, " ");
  strcpy(*fullName + sizeFName + 1, lName);

  free(fullName);

  return 0;
}

int main(int argc, char const *argv[]) {

  char fName[] = "Luly";
  char lName[] = "Velasco";
  char *fullName;

  doFullName(fName, lName, &fullName);

  printf("%s\n", fullName);


  return 0;
}
