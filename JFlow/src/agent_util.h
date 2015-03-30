#ifndef AGENT_UTIL_H
#define AGENT_UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>

#include "jni.h"
#include "jvmti.h"

#ifdef __cplusplus
extern "C" {
#endif

void  stdout_message(const char * format, ...);
void  fatal_error(const char * format, ...);
char *get_token(char *str, char *seps, char *buf, int max);
int   interested(char *cname, char *mname, 
		    char *include_list, char *exclude_list);

void  check_jvmti_error(jvmtiEnv *jvmti, jvmtiError errnum, const char *str);
void  deallocate(jvmtiEnv *jvmti, void *ptr);
void *allocate(jvmtiEnv *jvmti, jint len);
void  add_demo_jar_to_bootclasspath(jvmtiEnv *jvmti, char *demo_name);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif

