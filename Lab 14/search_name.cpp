int search_name()
{char name_worker[15];
 struct worker a;
 int p,r;
 	p=0;
	cout<<"Iмя для пошуку : ";
	gets(name_worker);
	fseek(f_worker,0,0);
	while (!feof(f_worker))
	{
		r=fread(&a,sizeof(a),1,f_worker);
		if (r<1) break;
		if (strcmp(a.name, name_worker)== 0)
		{
			print_worker(a);
			p++;
		}
	}
	if (p==0) cout<<"Такого iменi немає"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" працiвникiв"<<endl<<endl;
        return p;
}
