#include <linux/module.h>
#include <linux/printk.h>

int hello_1_init(void);
void hello_1_exit(void);

int hello_1_init(void)
{
    pr_info("Hello, world 1.\n");

    return 0;
}

void hello_1_exit(void)
{
    pr_info("Goodbye world 1.\n");
}

module_init(hello_1_init);
module_exit(hello_1_exit);

MODULE_LICENSE("GPL");
