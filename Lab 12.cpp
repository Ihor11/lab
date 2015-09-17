#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

struct Service
{
	int apartment;
	char surname_owner[100];
	int number_of_residents;
}st;


void Menu(int);
void inp(Service st);
void out(Service st);
void output(Service st);

FILE *f;

int main(){
	setlocale(LC_ALL, "Ukrainian" );
	int c;
	cout<<"Введiть 0 для запису, 1 для виводу, 2 для вiдображення iнформацiї, 3 для виходу:"<<endl;
	cin>>c;
	switch(c)
				{
				case 0:inp(st);break;
				case 1:out(st);break;
				case 2:output(st);break;
				case 3:
					{
						return 0;
					}
				}
	getch();
	return 0;
}

void inp(Service st)
{
	f=fopen("baza.txt","a+");
	cout<<"№ квартири:";
	cin>>st.apartment;
	cout<<"Прiзвище власника: ";
	cin>>st.surname_owner;
	cout<<"Кiлькiсть проживаючих: ";
	cin>>st.number_of_residents;
	fwrite(&st,sizeof(Service),1,f);
	fclose(f);
}

void out(Service st)
{
	f=fopen("baza.txt","ab+");
	int c;
	int k = 0;
	while((c=fread(&st,sizeof(Service),1,f))!=NULL)
	{
		cout<<"№ квартири: "<<st.apartment<<endl;
		cout<<"Власник: "<<st.surname_owner<<endl;
		cout<<"Кiлькiсть проживаючих: "<<st.number_of_residents<<endl;;
		cout<<endl;
		for(int i = 0; i < 50; i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	fclose(f);
}

int max(Service st)
{
	f = fopen("baza.txt","ab+");
	int c;
	int max_number_of_residents = 0;
    while((c=fread(&st,sizeof(Service),1,f))!=NULL){    
		if(max_number_of_residents < st.number_of_residents)
			max_number_of_residents = st.number_of_residents;
	}
	return max_number_of_residents;	
}

void output(Service st)
{
	f = fopen("baza.txt","ab+");
	int c;
	int number_of_residents = 0;
	char surname_owner[100];
	int number_of_owners = 0;
	for (int i = 0; i<max(st); i++){
		
	    while((c=fread(&st,sizeof(Service),1,f))!=NULL){    
			if(i == st.number_of_residents){
				number_of_owners += 1;				
			}
		}
		cout<<"The "<< number_of_owners << " have "<< i << " residents."<<endl;
	}

}
