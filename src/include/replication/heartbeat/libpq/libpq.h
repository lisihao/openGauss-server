/* ---------------------------------------------------------------------------------------
 * 
 * libpq.h
 *	  POSTGRES LIBPQ buffer structure definitions.
 *
 *
 * Portions Copyright (c) 1996-2009, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 * Portions Copyright (c) 2010-2012 Postgres-XC Development Group
 * 
 * 
 * IDENTIFICATION
 *        src/include/replication/heartbeat/libpq/libpq.h
 *
 * ---------------------------------------------------------------------------------------
 */
#ifndef CM_LIBPQ_H
#define CM_LIBPQ_H

#include <sys/types.h>
#include <netinet/in.h>
#include "replication/heartbeat/libpq/libpq-be.h"

namespace PureLibpq {
extern int StreamServerPort(int family, char* hostName, unsigned short portNumber, int ListenSocket[], int MaxListen);
extern int StreamConnection(int server_fd, Port* port);
extern void StreamClose(int sock);

extern void pq_comm_reset(void);
extern int pq_getbytes(Port* myport, char* s, size_t len);

extern int pq_getbyte(Port* myport);

extern int pq_flush(Port* myport);
extern int pq_putmessage(Port* myport, char msgtype, const char* s, size_t len);
extern int pq_putbytes(Port* myport, const char* s, size_t len);
}  /* namespace PureLibpq */
#endif /* LIBPQ_H */
