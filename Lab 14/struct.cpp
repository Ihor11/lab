#include <iostream>    
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
using namespace std; 

struct worker 
{ char name[15];
  char surname[20];
  char number[15];
  
};
FILE * f_worker;
const char file_name[]="baza.bin";
