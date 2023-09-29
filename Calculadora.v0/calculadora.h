/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct sumar_1_argument {
	int a;
	int b;
};
typedef struct sumar_1_argument sumar_1_argument;

struct restar_1_argument {
	int a;
	int b;
};
typedef struct restar_1_argument restar_1_argument;

#define calculadora 88888888
#define UNO 1

#if defined(__STDC__) || defined(__cplusplus)
#define sumar 1
extern  int * sumar_1(int , int , CLIENT *);
extern  int * sumar_1_svc(int , int , struct svc_req *);
#define restar 2
extern  int * restar_1(int , int , CLIENT *);
extern  int * restar_1_svc(int , int , struct svc_req *);
extern int calculadora_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define sumar 1
extern  int * sumar_1();
extern  int * sumar_1_svc();
#define restar 2
extern  int * restar_1();
extern  int * restar_1_svc();
extern int calculadora_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_sumar_1_argument (XDR *, sumar_1_argument*);
extern  bool_t xdr_restar_1_argument (XDR *, restar_1_argument*);

#else /* K&R C */
extern bool_t xdr_sumar_1_argument ();
extern bool_t xdr_restar_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */