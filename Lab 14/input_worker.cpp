int input_worker()
{
    struct worker a;
    
	cout<<"����i�� ����i�����"<<endl;
	cout<<"����i�� I�� - "; gets(a.name);
	cout<<"����i�� ��i����� - "; gets(a.surname);
	cout<<"����� �������� - "; gets(a.number);
	
	fseek(f_worker,0,2);
	fwrite(&a,sizeof(a),1,f_worker);
	return 0;
}
