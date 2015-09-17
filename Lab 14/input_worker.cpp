int input_worker()
{
    struct worker a;
    
	cout<<"Введiть працiвника"<<endl;
	cout<<"Введiть Iмя - "; gets(a.name);
	cout<<"Введiть Прiзвище - "; gets(a.surname);
	cout<<"Номер телефону - "; gets(a.number);
	
	fseek(f_worker,0,2);
	fwrite(&a,sizeof(a),1,f_worker);
	return 0;
}
