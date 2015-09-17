int clear_file()
{
	fclose(f_worker);
	if ((f_worker=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл запису бази даних працiвникiв !"<<endl;
 		return -1;
	}
	return 0;
}
