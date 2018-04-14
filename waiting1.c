	while (1)
    		{
		        bool done = true;
			for (int i = 0 ; i < p; i++)
			{
			        if (Prdq[i] > 0)
            			{
			                done = false; 
			                if (Prdq[i] > quantum)
			                {
				                time += quantum;
						Prdq[i] -= quantum;
			                }
					else
			                {
				                time = time + Prdq[i];
				                Pwait[i] = time - Pburst_time[i];
				                Prdq[i] = 0;
                			}
            			}
        		}
			if (done == true)
		        break;
		}
	for (int k=0;k<Qnoq;k++)
        	Qtat[k] = Qburst_time[k] + Qwait[k];
	for (int k=0;k<Pnoq;k++)
	        Ptat[k] = Pburst_time[k] + Pwait[k];
	printf("Processes	Burst time	Waiting time	Turnaround time\n");
	for (int k=0;k<Qnoq;k++)
		printf("T%d\t\t%d\t\t%d\t\t%d\n",k,Qburst_time[k],Qwait[k],Qtat[k]);
	for (int k=0;k<Pnoq;k++)
		printf("S%d\t\t%d\t\t%d\t\t%d\n",k,Pburst_time[k],Pwait[k],Ptat[k]);
	printf("Total time spent- %d\n",total_time);
}

