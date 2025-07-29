#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static void stop_exit(void);

static void stop_exit(void)
{
    pr_info("Goodbye world stop.\n");
}

module_exit(stop_exit);

MODULE_LICENSE("GPL");
