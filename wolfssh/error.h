/* error.h
 *
 * Copyright (C) 2014 wolfSSL Inc.
 *
 * This file is part of wolfSSH.
 *
 * wolfSSH is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */


#pragma once

#include <wolfssh/settings.h>

#ifdef __cplusplus
extern "C" {
#endif

/* add new error strings to error.c */


/* main public return values */
enum WS_ReturnValues {
    WS_SUCCESS         =  0,            /* function success */
    WS_FATAL_ERROR     = -1,            /* general function failure */
    WS_BAD_ARGUMENT    = -2,            /* bad function argument */
    WS_MEMORY_E        = -3,            /* memory allocation failure */
    WS_BUFFER_E        = -4,            /* input/output buffer size error */
    WS_PARSE_E         = -5,            /* general parsing error */
    WS_NOT_COMPILED    = -6,            /* feature not compiled in */
    WS_OVERFLOW_E      = -7,            /* would overflow if continued */
    WS_BAD_USAGE       = -8,            /* bad example usage */
    WS_SOCKET_ERROR_E  = -9,
    WS_WANT_READ       = -10,
    WS_WANT_WRITE      = -11,
    WS_RECV_OVERFLOW_E = -12,
    WS_VERSION_E       = -13,           /* Peer using wrong version of SSH */
    WS_SEND_OOB_READ_E = -14,
    WS_INPUT_CASE_E    = -15
};


/* I/O Callback default errors */
enum WS_IOerrors {
    WS_CBIO_ERR_GENERAL    = -1,     /* general unexpected err */
    WS_CBIO_ERR_WANT_READ  = -2,     /* need to call read  again */
    WS_CBIO_ERR_WANT_WRITE = -2,     /* need to call write again */
    WS_CBIO_ERR_CONN_RST   = -3,     /* connection reset */
    WS_CBIO_ERR_ISR        = -4,     /* interrupt */
    WS_CBIO_ERR_CONN_CLOSE = -5,     /* connection closed or epipe */
    WS_CBIO_ERR_TIMEOUT    = -6      /* socket timeout */
};



#ifdef __cplusplus
}
#endif
