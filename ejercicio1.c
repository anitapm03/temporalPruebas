#include <stdlib.h>
#include <stdio.h>

int main(){
	
 	for(int i=1;i<11;i++) { //este bucle va a crear 10 hijos

    		if(fork() == 0){
			printf("soy el hijo %d y hago la tabla del numero %d \n",getpid(),i);
            		//escribe las tablas de multiplicar
            		for (int j=0;j<10;j++){
            			int num=i*j;
            			
            			printf("%d x %d = %d \n",i,j,num);
            			//write();
            		}

            		exit(0);
    		}
    		wait(NULL);//espera a que cada hijo termine de imprimir su tabla
	}  

    	for(int i=0;i<11;i++){ //espera a los hijos

    		wait(NULL);

    	}

}
