/*
 */

#include <init.h>


static int board_sparkfun_thing_plus_apollo3_init(const struct device *dev)
{
	ARG_UNUSED(dev);

	return 0;
}

/* needs to be done after GPIO driver init */
SYS_INIT(board_sparkfun_thing_plus_apollo3_init, POST_KERNEL,
	 CONFIG_KERNEL_INIT_PRIORITY_DEFAULT);
