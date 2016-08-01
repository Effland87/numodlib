# ifndef MATHHELPER_H
# define MATHHELPER_H

# include <sys/stat.h>

namespace co {

// mathematical helper functions
template < typename RealType >
RealType sqr ( const RealType Arg ) {
    return Arg * Arg;
  }


}

#endif
