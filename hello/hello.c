// hello.ko
#include <linux/init.h>
#include <linux/module.h>

// extern int add_integar(int a, int b);
static char *buf = "driver";
module_param(buf, charp, S_IRUGO); //模块参数

static int __init hello_init(void) {
  int dat = 3; // int dat = add_integar(5, 6);
  printk(KERN_WARNING "hello world enter, %s, %d\n", buf, dat);
  return 0;
}
module_init(hello_init); //模块加载函数

static void __exit hello_exit(void) {
  printk(KERN_WARNING "hello world exit\n");
}
module_exit(hello_exit); //模块卸载函数
MODULE_AUTHOR("Aizhengwei");     //模块作者
MODULE_LICENSE("GPL v2");                //模块许可协议
MODULE_DESCRIPTION("a simple hello module"); //模块许描述
MODULE_ALIAS("a simplest module");           //模块别名