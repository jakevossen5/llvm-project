//===-- Definition of macros from sys/wait.h ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef __LLVM_LIBC_MACROS_LINUX_SYS_WAIT_MACROS_H
#define __LLVM_LIBC_MACROS_LINUX_SYS_WAIT_MACROS_H

// Wait status info macros
#define WTERMSIG(status) (((status)&0x7F))
#define WIFEXITED(status) (WTERMSIG(status) == 0)
#define WEXITSTATUS(status) (((status)&0xFF00) >> 8)

#endif // __LLVM_LIBC_MACROS_LINUX_SYS_WAIT_MACROS_H
