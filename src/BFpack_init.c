#include <R_ext/RS.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .Fortran calls */
extern void F77_NAME(draw_ju)(void *, void *, void *, void *, void *, void *);
extern void F77_NAME(estimate_postmeancov_fisherz)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(estimate_bct_ordinal)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(estimate_bct_ordinal_old)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(test_kind)(void *, void *);

static const R_FortranMethodDef FortranEntries[] = {
    {"draw_ju",                      (DL_FUNC) &F77_NAME(draw_ju),                       6},
    {"estimate_postmeancov_fisherz", (DL_FUNC) &F77_NAME(estimate_postmeancov_fisherz), 22},
    {"estimate_bct_ordinal", (DL_FUNC) &F77_NAME(estimate_bct_ordinal), 29},
    {"estimate_bct_ordinal_old", (DL_FUNC) &F77_NAME(estimate_bct_ordinal_old), 33},
    {"test_kind", (DL_FUNC) &F77_NAME(test_kind), 2},
    {NULL, NULL, 0}
};

void R_init_BFpack(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
