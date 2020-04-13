#ifndef _SNP_PIGTIME_H_
#define _SNP_PIGTIME_H_

// ----------------------------------------------------------------------------
// ---[ pigtime.h begin ]------------------------------------------------------
// ----------------------------------------------------------------------------


// ---[ list of included files ]-----------------------------------------------


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


// ----------------------------------------------------------------------------
// ---[ pigtime.h end ]--------------------------------------------------------
// ----------------------------------------------------------------------------

#endif
