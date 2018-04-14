void WaitingTimecal(int Pburst_time[], int Qburst_time[], int Pnoq, int Qnoq)
{
	const int quantum=4;
	int q=Qnoq,p=Pnoq;
	int time=0, total_time=0;
	int Prem_bt[200], Qrem_bt[200], Prdq[200], Qrdq[200], Pwait[200], Qwait[200], Qtat[200], Ptat[200];
	for(int k=0;k<Qnoq;k++)
	{
		total_time+= Qburst_time[k];
		Qrdq[k]=Qburst_time[k];
	}
	for(int k=0;k<Pnoq;k++)
	{
		total_time+= Pburst_time[k];
		Prdq[k]=Pburst_time[k];
	}
	while (1)
    		{
		        bool done = true;
			for (int i = 0 ; i < q; i++)
			{
			        if (Qrdq[i] > 0)
            			{
			                done = false; 
			                if (Qrdq[i] > quantum)
			                {
				                time += quantum;
						Qrdq[i] -= quantum;
			                }
					else
			                {
				                time = time + Qrdq[i];
				                Qwait[i] = time - Qburst_time[i];
				                Qrdq[i] = 0;
                			}
            			}
        		}
			time++;
			if (done == true)
		        break;
		}
