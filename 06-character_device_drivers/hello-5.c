#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");

static short int myshort = 1;
static int myint = 420;
static long int mylong = 9999;
static char *mystring = "blah";
static int myintarray[2] = { 420, 420 };
static int arr_argc = 1;

module_param(myshort, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myshort, "A short integer");
module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(myint, "An integer");
module_param(mylong, long, S_IRUSR);
MODULE_PARM_DESC(mylong, "A long integer");
module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "A character string");
module_param_array(myintarray, int, &arr_argc, 0000);
MODULE_PARM_DESC(myintarray, "An array of intergers");

static int hello_5_init(void);
static void hello_5_exit(void);

static int hello_5_init(void)
{
    pr_info("Hello, world 5. ========\n");
    pr_info("myshort:\t%hd\n", myshort);
    pr_info("myint:\t%d\n", myint);
    pr_info("mylong:\t%ld\n", mylong);
    pr_info("mystring:\t%s\n", mystring);

    for (int i = 0; i < ARRAY_SIZE(myintarray); i++) {
        pr_info("myintarray[%d]:\t%d\n", i, myintarray[i]);
    }

    return 0;
}

static void hello_5_exit(void)
{
    pr_info("Goodbye world 5.\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);

MODULE_LICENSE("GPL");
