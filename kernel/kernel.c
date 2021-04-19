#define KERNEL_MEMORY_OFFSET 0x10000

#include "../lib/type.h"
#include "../lib/string.h"
#include "../drivers/display.h"
#include "messages.h"
#include "mem.h"

void init()
{
	kminit();
}

void main()
{
	// init
	knewline();
	kprints(ENTERED_KERNEL);
	init();
	kprints(KERNEL_WELCOME);
	// do
}
