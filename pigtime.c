#include "pigtime.h"

// ---[ list of included files ]-----------------------------------------------
#include <asm-generic/errno-base.h>
#include <dirent.h>                    // check if directory exists
#include <errno.h>                     // compare with std errno


// ---[ list of the const value ]----------------------------------------------
const char* PIGTIME_DIR_NAME = ".pigtime";

// ---[ list of interface function ]-------------------------------------------

// if there are not a pigtime database, then return false, or return true if
// the database is already inited.
bool pg_inited(void) {
    DIR* dir = opendir(PIGTIME_DIR_NAME);
    if (dir) {
        // if the dir exists:
        return true;
    } else if (ENOENT == errno) {
        // if do not exists:
        return false;
    } else {
        // [WARNING] if opendir() failed or some other reason.
        return false;
    }
}


