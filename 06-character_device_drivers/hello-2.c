#include <linux/module.h>
#include <linux/printk.h>

int hello_2_init(void);
void hello_2_exit(void);

int hello_2_init(void)
{
    pr_info("Hello, world 2.\n");

    return 0;
}

void hello_2_exit(void)
{
    pr_info("Goodbye world 2.\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");
