ifeq ($(KERNELRELEASE),)
KDIR := /home/book/100ask_imx6ull-sdk/Linux_code/Linux-4.9.88
PWD := $(shell pwd)
modules:
    $(MAKE) -C $(KDIR) M=$(PWD) modules
modules_install:
    $(MAKE) -C $(KDIR) M=$(PWD) modules_install
clean:
    rm -rf *.o *.ko .depend *.mod.o *.mod.c modules.*
.PHONY:modules modules_install clean
else
obj-m :=hello.o
endif