#include "pigtime.h"

// ---[ list of included files ]-----------------------------------------------
#include <asm-generic/errno-base.h>
#include <sys/stat.h>                  // support for create folder
#include <sys/types.h>                 // support for create folder
#include <stdio.h>                     // support for remove folder
#include <errno.h>                     // compare with std errno


// ---[ list of the const value ]----------------------------------------------
const char* PIGTIME_DIR_NAME = ".pigtime";


// ---[ list of inner struct ]-------------------------------------------------

// the list of PgNode:
// NULL <-[prev, node, next]-> ... <-[prev, node, next]-> NULL
struct PgNodeList {
    struct PgNode* node;
    struct PgNodeList* prev;
    struct PgNodeList* next;
};

// the base struct -- PgNode
struct PgNode {
    struct PgNodeList* list;
};


// ---[ list of interface function ]-------------------------------------------

// if there are not a pigtime database, then return 0, or return 1 if the
// database is already inited.
int pg_is_inited(void) {
    struct stat sb;
    if (stat(PIGTIME_DIR_NAME, &sb) == 0 && S_ISDIR(sb.st_mode)) {
        // if the dir exists: 
        return 1;
    } else {
        // if do not exists: (or it is not a folder)
        return 0;
    }
}

// inited Pigtime database, (status code: return 1 means success, return 0 means
// fail)
int pg_init(void) {
    // try to mkdir, if error => result: -1, if succese => result: 0.
    int result = mkdir(PIGTIME_DIR_NAME, 0777);
    if (result && errno != EEXIST) {
        // https://stackoverflow.com/a/49028514/13031497
        // if something is not right happend.
        return 0;
    } else {
        // else succese
        return 1;
    }
}

// delete or clear Pigtime datebase. (status code: return 1 means success,
// return 0 means fail)
int pg_clear(void) {
    if (remove(PIGTIME_DIR_NAME) == 0) {
        // this means success
        return 1;
    } else {
        return 0;
    }
}


