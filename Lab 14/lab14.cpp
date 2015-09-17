#include "struct.cpp"    
#include "input_worker.cpp"
#include "print_worker.cpp"
#include "search_name.cpp"
#include "search_number.cpp"
#include "show_all.cpp"
#include "clear_file.cpp"

int main() 
{   
    setlocale(LC_ALL, "Ukr");
	char c;
 	if ((f_worker=fopen(file_name,"rb+"))==NULL)
 	{
 	if ((f_worker=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл запису бази даних працiвникiв !"<<endl;
 		return -1;
	}
		cout<<" Створено новий файл бази даних працiвникiв !"<<endl;
 	}
 	do
 	{
 		cout<<"Виберiть режим роботи"<<endl;
 		cout<<"1 - Ввiд працiвника"<<endl;
 	    cout<<"2 - Пошук за iменем"<<endl;
		cout<<"3 - Пошук за телефоном"<<endl;
        cout<<"4 - Показати всю базу"<<endl;
        cout<<"5 - Очистка бази баних"<<endl;
    	cout<<"0 - Вивiд"<<endl;
    	
 		c=getch();
 		switch(c)
 		{
		    case '0': cout<<"Роботу завершено"<<endl; fclose(f_worker); return 0;
 		 	case '1': input_worker(); break;
 	 		case '2': search_name(); break;
		    case '3': search_number(); break;
  		 	case '4': show_all(); break;
   			case '5': clear_file(); break;
 	 	}
 	} while (1);	
}
