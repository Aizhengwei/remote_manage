// hello.ko
#include <linux/init.h>
#include <linux/module.h>

// extern int add_integar(int a, int b);
static char *buf = "driver";
module_param(buf, charp, S_IRUGO); //ģ�����

static int __init hello_init(void) {
  int dat = 3; // int dat = add_integar(5, 6);
  printk(KERN_WARNING "hello world enter, %s, %d\n", buf, dat);
  return 0;
}
module_init(hello_init); //ģ����غ���

static void __exit hello_exit(void) {
  printk(KERN_WARNING "hello world exit\n");
}
module_exit(hello_exit); //ģ��ж�غ���
MODULE_AUTHOR("Aizhengwei");     //ģ������
MODULE_LICENSE("GPL v2");                //ģ�����Э��
MODULE_DESCRIPTION("a simple hello module"); //ģ��������
MODULE_ALIAS("a simplest module");           //ģ�����