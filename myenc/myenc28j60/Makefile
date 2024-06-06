obj-m := enc28j60.o
KDIR := /lib/modules/$(shell uname -r)/build
VERBOSE = 0
PWD := $(shell pwd)
all:
	$(MAKE) -C $(KDIR) M=$(PWD) KBUILD_VERBOSE=$(VERBOSE) CONFIG_DEBUG_INFO=y modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

insmod: all
	sudo insmod $(basename ${obj-m}).ko

rmmod:
	sudo rmmod $(basename ${obj-m})
