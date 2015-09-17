#include <cstdlib>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() 
{
char str1[100];
char str2[100];
gets(str1);
int j=0;
for(int i=0;i<strlen(str1);i++)
if(str1[i]!='*')
str2[j++]=str1[i];
str2[j]=0;
strcpy(str1,str2);
puts(str1);
getch();
return 0;
}
