#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int start_init(void);

static int start_init(void)
{
    pr_info("Hello, world start.\n");

    return 0;
}

module_init(start_init);

MODULE_LICENSE("GPL");
