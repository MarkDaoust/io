/* Generated automatically by H5make_libsettings -- do not edit */



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * Copyright by the Board of Trustees of the University of Illinois.         *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Created:		Jan 25, 2020
 *
 * Purpose:		This machine-generated source code contains
 *			information about the library build configuration
 *
 * Modifications:
 *
 *	DO NOT MAKE MODIFICATIONS TO THIS FILE!
 *	It was generated by code in `H5make_libsettings.c'.
 *
 *-------------------------------------------------------------------------
 */

char H5libhdf5_settings[]=
	"	    SUMMARY OF THE HDF5 CONFIGURATION\n"
	"	    =================================\n"
	"\n"
	"General Information:\n"
	"-------------------\n"
	"                   HDF5 Version: 1.10.6\n"
	"                  Configured on: Sat Jan 25 19:53:02 UTC 2020\n"
	"                  Configured by: configure\n"
	"                    Host system: x86_64-unknown-linux-gnu\n"
	"              Uname information: Linux ip-172-31-28-49 4.15.0-1057-aws #59-Ubuntu SMP Wed Dec 4 10:02:00 UTC 2019 x86_64 x86_64 x86_64 GNU/Linux\n"
	"                       Byte sex: little-endian\n"
	"             Installation point: /hdf5-1.10.6/hdf5\n"
	"\n"
	"Compiling Options:\n"
	"------------------\n"
	"                     Build Mode: production\n"
	"              Debugging Symbols: no\n"
	"                        Asserts: no\n"
	"                      Profiling: no\n"
	"             Optimization Level: high\n"
	"\n"
	"Linking Options:\n"
	"----------------\n"
	"                      Libraries: static, shared\n"
	"  Statically Linked Executables: \n"
	"                        LDFLAGS: \n"
	"                     H5_LDFLAGS: \n"
	"                     AM_LDFLAGS: \n"
	"                Extra libraries: -lz -ldl -lm \n"
	"                       Archiver: ar\n"
	"                       AR_FLAGS: cr\n"
	"                         Ranlib: ranlib\n"
	"\n"
	"Languages:\n"
	"----------\n"
	"                              C: yes\n"
	"                     C Compiler: /usr/bin/gcc\n"
	"                       CPPFLAGS: \n"
	"                    H5_CPPFLAGS: -D_GNU_SOURCE -D_POSIX_C_SOURCE=200809L   -DNDEBUG -UH5_DEBUG_API\n"
	"                    AM_CPPFLAGS: \n"
	"                        C Flags: \n"
	"                     H5 C Flags:  -std=c99  -pedantic -Wall -Wextra -Wbad-function-cast -Wc++-compat -Wcast-align -Wcast-qual -Wconversion -Wdeclaration-after-statement -Wdisabled-optimization -Wfloat-equal -Wformat=2 -Wno-format-nonliteral -Winit-self -Winvalid-pch -Wmissing-declarations -Wmissing-include-dirs -Wmissing-prototypes -Wnested-externs -Wold-style-definition -Wpacked -Wredundant-decls -Wshadow -Wstrict-prototypes -Wswitch-enum -Wswitch-default -Wundef -Wunused-macros -Wunsafe-loop-optimizations -Wwrite-strings -Wlogical-op -Wlarger-than=2560 -Wsync-nand -Wframe-larger-than=16384 -Wpacked-bitfield-compat -Wstrict-overflow=5 -Wjump-misses-init -Wunsuffixed-float-constants -Wdouble-promotion -Wtrampolines -Wstack-usage=8192 -Wvector-operation-performance -Wdate-time -Warray-bounds=2 -Wc99-c11-compat -fstdarg-opt -s -Wno-inline -Wno-aggregate-return -Wno-missing-format-attribute -Wno-missing-noreturn -Wno-suggest-attribute=const -Wno-suggest-attribute=pure -Wno-suggest-attribute=noreturn -Wno-suggest-attribute=format -O3\n"
	"                     AM C Flags: \n"
	"               Shared C Library: yes\n"
	"               Static C Library: yes\n"
	"\n"
	"\n"
	"                        Fortran: no\n"
	"\n"
	"                            C++: yes\n"
	"                   C++ Compiler: /usr/bin/g++\n"
	"                      C++ Flags: \n"
	"                   H5 C++ Flags: -pedantic -Wall -Wextra -Wundef -Wshadow -Wpointer-arith -Wcast-qual -Wcast-align -Wwrite-strings -Wconversion -Wredundant-decls -Winline -Wsign-promo -Woverloaded-virtual -Wold-style-cast -Weffc++ -Wreorder -Wnon-virtual-dtor -Wctor-dtor-privacy -Wabi -Wfloat-equal -Wmissing-format-attribute -Wmissing-noreturn -Wpacked -Wdisabled-optimization -Wformat=2 -Wendif-labels -Winvalid-pch -Wvariadic-macros -Winit-self -Wmissing-include-dirs -Wswitch-default -Wswitch-enum -Wunused-macros -Wunsafe-loop-optimizations -Wstrict-overflow -Wlogical-op -Wlarger-than=2048 -Wvla -Wsync-nand -Wframe-larger-than=16384 -Wpacked-bitfield-compat -Wstrict-overflow=5 -Wdouble-promotion -Wsuggest-attribute=const -Wtrampolines -Wstack-usage=8192 -Wvector-operation-performance -Wsuggest-attribute=pure -Wsuggest-attribute=noreturn -Wsuggest-attribute=format -Wdate-time -Wopenmp-simd -Warray-bounds=2 -fstdarg-opt -s -O3\n"
	"                   AM C++ Flags: \n"
	"             Shared C++ Library: yes\n"
	"             Static C++ Library: yes\n"
	"\n"
	"                           Java: no\n"
	"\n"
	"\n"
	"Features:\n"
	"---------\n"
	"                   Parallel HDF5: no\n"
	"Parallel Filtered Dataset Writes: no\n"
	"              Large Parallel I/O: no\n"
	"              High-level library: yes\n"
	"                Build HDF5 Tests: yes\n"
	"                Build HDF5 Tools: yes\n"
	"                    Threadsafety: no\n"
	"             Default API mapping: v110\n"
	"  With deprecated public symbols: yes\n"
	"          I/O filters (external): deflate(zlib)\n"
	"                             MPE: no\n"
	"                      Direct VFD: no\n"
	"              (Read-Only) S3 VFD: no\n"
	"            (Read-Only) HDFS VFD: no\n"
	"                         dmalloc: no\n"
	"  Packages w/ extra debug output: none\n"
	"                     API tracing: no\n"
	"            Using memory checker: no\n"
	" Memory allocation sanity checks: no\n"
	"          Function stack tracing: no\n"
	"       Strict file format checks: no\n"
	"    Optimization instrumentation: no\n"
;

