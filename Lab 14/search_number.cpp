int search_number()

{char number[15];
 struct worker a;
 int p,r;
 	p=0;
	cout<<"����� ��� ������ : ";
	gets(number);
	fseek(f_worker,0,0);
	while (!feof(f_worker))
	{
		r=fread(&a,sizeof(a),1,f_worker);
		if (r<1) break;
		if (strcmp(a.number, number) == 0) 
		{
			print_worker(a);
			p++;
		}
	}
	if (p==0) cout<<"������ ������ �� ��������"<<endl; 
	else cout<<endl<<"�������� "<<p<<" �����i�"<<endl<<endl;
        return p;
}
