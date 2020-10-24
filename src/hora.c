#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
void signal_handler( int signal_num ) { 
	static int trials = 0;
	trials++;
	printf("Interrupt signal is (%d).\n", signal_num);
  	if(trials == 2){
		exit(signal_num);  
	} 
} 
int main(int argc, const char *argv[])
{
	int count = 0;  
	signal(SIGTERM, signal_handler);   
	signal(SIGINT, signal_handler);    
	printf("Programa hora ejecutandose. PID=%d.\n", getpid());   	  
	while(1) { 
		printf("Listo para recibir la señal SIGUSR1.\n");
		sleep(2000);
	}	
	return EXIT_SUCCESS;
}