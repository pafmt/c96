/*
 * Copyright (C) 2014 Renesas Electronics Corporation
 * RENESAS ELECTRONICS CONFIDENTIAL AND PROPRIETARY.
 * This program must be used solely for the purpose for which
 * it was furnished by Renesas Electronics Corporation. No part of this
 * program may be reproduced or disclosed to others, in any
 * form, without the prior written permission of Renesas Electronics
 * Corporation.
 */

/*****************************************************************************/
/* CC-RL library                                                             */
/*****************************************************************************/

#ifndef _STDDEF_H
#define _STDDEF_H

typedef signed int ptrdiff_t;
typedef unsigned int size_t;

#ifndef NULL
#define NULL    ((void *)0)
#endif  /* !NULL */

#define offsetof(type,member)   ((size_t)&(((type *)0)->member))

#if defined(__CNV_NC30__) || defined(__CNV_IAR__)
typedef unsigned short wchar_t;
#endif

#define __attribute__(x) 

#endif  /* !_STDDEF_H */
