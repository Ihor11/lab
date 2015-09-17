int show_all()
{
 struct worker a;
 int p,r;
 	p=0;
	fseek(f_worker,0,0);
	while (!feof(f_worker))
	{
		r=fread(&a,sizeof(a),1,f_worker);
		if (r<1) break;
		print_worker(a);
		p++;
	}
	cout<<endl<<"Знайдено "<<p<<" працiвникiв"<<endl<<endl;
        return p;
}
