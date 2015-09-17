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
 		cout<<"��������� �������� ���� ������ ���� ����� ����i����i� !"<<endl;
 		return -1;
	}
		cout<<" �������� ����� ���� ���� ����� ����i����i� !"<<endl;
 	}
 	do
 	{
 		cout<<"�����i�� ����� ������"<<endl;
 		cout<<"1 - ��i� ����i�����"<<endl;
 	    cout<<"2 - ����� �� i�����"<<endl;
		cout<<"3 - ����� �� ���������"<<endl;
        cout<<"4 - �������� ��� ����"<<endl;
        cout<<"5 - ������� ���� �����"<<endl;
    	cout<<"0 - ���i�"<<endl;
    	
 		c=getch();
 		switch(c)
 		{
		    case '0': cout<<"������ ���������"<<endl; fclose(f_worker); return 0;
 		 	case '1': input_worker(); break;
 	 		case '2': search_name(); break;
		    case '3': search_number(); break;
  		 	case '4': show_all(); break;
   			case '5': clear_file(); break;
 	 	}
 	} while (1);	
}
