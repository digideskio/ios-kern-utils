/*
 * kern.h - Libkern library.
 *
 * Copyright (c) 2014 Samuel Groß
 */

#ifndef LIBKERN_H
#define LIBKERN_H

#include <mach/vm_types.h>

#include "arch.h"

/*
 * Return the base address of the running kernel.
 */
vm_address_t get_kernel_base();

/*
 * Read data from the kernel address space.
 */
vm_size_t read_kernel(vm_address_t addr, vm_size_t size, unsigned char* buf);

/*
 * Write data into the kernel address space.
 */
vm_size_t write_kernel(vm_address_t addr, unsigned char* buf, vm_size_t size);


#endif