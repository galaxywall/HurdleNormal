#ifndef DEBUG
#define ASSERT(x, y)
#else
#define ASSERT(x, y)				\
 if (x != y) \
 { \
   Rcout << "ASSERT" << #x << "=" << ((char) x) << "!=" << #y << "=" << ((char) y) << " failed\n"; \
    Rcout << " on line " << __LINE__  << "\n"; \
    Rcout << " in file " << __FILE__ << "\n";  \
 }
#endif

#ifndef DEBUG
#define ASSERT_TRUE(x)
#else
#define ASSERT_TRUE(x)				\
  if (!(x))					\
 { \
   Rcout << "ASSERT " << #x << "==" << ((char) x)  << " failed\n"; \
    Rcout << " on line " << __LINE__  << "\n"; \
    Rcout << " in file " << __FILE__ << "\n";  \
 }
#endif

#ifdef DEBUG
#define DEXEC(x) x
#else
#define DEXEC(x)
#endif

#ifdef DEBUG
#  define DPRINT(x) Rcerr << x
#else
#  define DPRINT(x)
#endif
