int clear_file()
{
	fclose(f_worker);
	if ((f_worker=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"��������� �������� ���� ������ ���� ����� ����i����i� !"<<endl;
 		return -1;
	}
	return 0;
}
