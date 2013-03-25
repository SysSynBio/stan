#ifndef __STAN__AGRAD__FUNCTIONS__OP_VD_VARI_HPP__
#define __STAN__AGRAD__FUNCTIONS__OP_VD_VARI_HPP__

#include <stan/agrad/vari.hpp>

namespace stan {
  namespace agrad {
    
    class op_vd_vari : public vari {
    protected:
      vari* avi_;
      double bd_;
    public:
      op_vd_vari(double f, vari* avi, double b) :
        vari(f),
        avi_(avi),
        bd_(b) {
      }
    };

  }
}
#endif
