/* engine configuration for aapbf */

/* WITH_FAST: non-zero if a fast version of the engine is available
   in addition to the full-featured version.  */
#define WITH_FAST 0

/* WITH_SCACHE_PBB_AAPBF: non-zero if the pbb engine was selected.  */
#define WITH_SCACHE_PBB_AAPBF 0

/* HAVE_PARALLEL_INSNS: non-zero if cpu can parallelly execute > 1 insn.  */
#define HAVE_PARALLEL_INSNS 0
#define WITH_PARALLEL_READ 0
#define WITH_PARALLEL_WRITE 0
#define WITH_PARALLEL_GENWRITE 0

/* Functions defined in the generated mainloop.c file
   (which doesn't necessarily have that file name).  */

extern ENGINE_FN aapbf_engine_run_full;
extern ENGINE_FN aapbf_engine_run_fast;
