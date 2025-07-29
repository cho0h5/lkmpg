#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LKMPG");
MODULE_DESCRIPTION("A sample driver");

static int hello_4_init(void);
static void hello_4_exit(void);

static int hello_4_init(void)
{
    pr_info("Hello, world 4.\n");

    return 0;
}

static void hello_4_exit(void)
{
    pr_info("Goodbye world 4.\n");
}

module_init(hello_4_init);
module_exit(hello_4_exit);

MODULE_LICENSE("GPL");
