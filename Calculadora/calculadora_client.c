/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"


void calculadora_1(char *host, int a, int b){
	CLIENT *clnt;
	int  *result_1;
	int sumar_1_a=a;
	int sumar_1_b=b;
	int  *result_2;
	int restar_1_a=a;
	int restar_1_b=b;

#ifndef	DEBUG
	clnt = clnt_create (host, calculadora, UNO, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = sumar_1(sumar_1_a, sumar_1_b, clnt);

	printf("sumando %d + %d = %d\n",sumar_1_a, sumar_1_b, *result_1);

	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = restar_1(restar_1_a, restar_1_b, clnt);
	
	printf("restando %d - %d = %d\n",restar_1_a, restar_1_b, *result_2);

	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	int a, b;

	char *host;

	if (argc < 4) {
		printf ("usar: %s dire_serv a b \n", argv[0]);
		exit (1);
	}
	if ((a = atoi(argv[2])) == 0 && *argv[2] != '0') {
        fprintf(stderr, "valores invalidos: %s\n", argv[2]);
	            exit(1);
	}

	if ((b = atoi(argv[3])) == 0 && *argv[3] != '0') {
	            fprintf(stderr, "valores invalidos: %s\n", argv[3]);
	            exit(1);
	}

	host = argv[1];
	calculadora_1 (host, a, b);
exit (0);
}