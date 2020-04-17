#ifndef _SNP_PIGTIME_H_
#define _SNP_PIGTIME_H_

// ----------------------------------------------------------------------------
// ---[ pigtime.h begin ]------------------------------------------------------
// ----------------------------------------------------------------------------


// ---[ list of included files ]-----------------------------------------------


// ---[ list of inner struct ]-------------------------------------------------

// the base struct -- PgNode
struct PgNode;


// ---[ list of interface function ]-------------------------------------------

// if there are not a pigtime database, then return false, or return true if
// the database is already inited.
int pg_is_inited(void);

// inited Pigtime database, (status code: return 1 means success, return 0 means
// fail)
int pg_init(void);

// delete or clear Pigtime datebase. (status code: return 1 means success,
// return 0 means fail)
int pg_clear(void);

// check if the PigTimes database is empty. (status code: return 1 means empty,
// return 0 means fail)
int pg_empty(void);

// get the PgNode* by simpty c-string
PgNode* pg_get(const char* path);


// ----------------------------------------------------------------------------
// ---[ pigtime.h end ]--------------------------------------------------------
// ----------------------------------------------------------------------------

#endif
