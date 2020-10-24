#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>
void tiempo(){
	time_t horario; 
	time(&horario);  //definimos la variable horario
	printf("Señal SIGUSR1 recibida: %s\n", ctime(&horario)); //hacemos una funcion tiempo en donde nos muestra el horario del computador y lo imprime
}
void signal_handler( int signal_num ) { 
	static int trials = 0;
	trials++;
	printf("Interrupt signal is (%d).\n", signal_num);
  	if(trials == 2){
		exit(signal_num);   //Aca se hace la interrupcion, si apretamos 1 vez Ctrl+c se interrumpe, si son 2 el programa se sale
	} 
} 
int main(int argc, const char *argv[])
{  
	signal(SIGTERM, signal_handler);   
	signal(SIGINT, signal_handler);
	signal(SIGUSR1, tiempo);    
	printf("Programa hora ejecutandose. PID=%d.\n", getpid());   	  
	while(1) { 
		printf("Listo para recibir la señal SIGUSR1.\n");
		sleep(2000);		
	}	
	return EXIT_SUCCESS;
}