#include "BasicFunctions.h"
#include "LinkedList.h"
#include "parser.h"
#include "Employee.h"
#include <unistd.h>


int controller_firstObligatoryLoad(int* verification);
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);

int controller_addEmployee(LinkedList* pArrayListEmployee, char* path);

int controller_editEmployee(LinkedList* pArrayListEmployee);

int controller_removeEmployee(LinkedList* pArrayListEmployee);
int controller_ListEmployee(LinkedList* pArrayListEmployee);
int controller_sortEmployee(LinkedList* pArrayListEmployee);

int controller_saveAsText(char* path , LinkedList* pArrayListEmployee);
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);

int controller_readIdFromFile(char* path, int* id);
int controller_saveIdToFile(char* path, int id);


