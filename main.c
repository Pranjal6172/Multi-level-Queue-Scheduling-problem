int main()
{
	int Pburst_time[200], Qburst_time[200];
	char Pques[200][MAX_LIM], Qques[200][MAX_LIM];
	int choice,Pnoq=0, Qnoq=0;
	const int MAX_LIM=700;
	system("clear");
	while(choice!=3)
	{
		printf("1.\tEnter questions as Teacher\n2.\tEnter questions as Student\n3.\tEnd query session\n\tYour choice-");
		scanf("%d",&choice);
		while(getchar()!='\n');
		if(choice==1)
		{
			system("clear");
			printf("Enter Question Number.%d-",Qnoq);
			fgets(Qques[Qnoq],MAX_LIM,stdin);
			Qburst_time[Qnoq]=(strlen(Qques[Qnoq])/10);
			Qnoq++;
		}
		if(choice==2)
		{
			system("clear");
			printf("Enter Question Number.%d-",Pnoq);
			fgets(Pques[Pnoq],MAX_LIM,stdin);
			Pburst_time[Pnoq]=(strlen(Pques[Pnoq])/10);
			Pnoq++;
		}
	}	
	printf("\n\n\t\tEvaluating all questions\n");
	WaitingTimecal( Pburst_time, Qburst_time, Pnoq, Qnoq);
	return 0;
}
