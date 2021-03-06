/*******************************************************
*   ---------------- page.h -------------------        *
********************************************************/

#ifndef PAGE_H
#define PAGE_H

#include <stdio.h>
#include <stdlib.h>

#include "clist.h"

/*******************************************************
*   Define a structure for information about pages     *
********************************************************/

typedef struct Page_ {
	int			number;
	int			reference;
} Page;


/*******************************************************
*   ------------- Public Interface ------------------- *
********************************************************/

int replace_page(CListElmt **current);

#endif // !PAGE_H
