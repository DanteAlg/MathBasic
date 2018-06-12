#ifndef MATHBASIC
#define MATHBASIC

namespace mbasic {
  class MathBasic {
    public:
      // return v1 + v2
      static int Add(int v1, int v2);

      // return v1 - v2
      static int Dif(int v1, int v2);

      // return v1 * v2
      static int Mux(int v1, int v2);

      // return v1 / v2
      static int Div(int v1, int v2);
  };
}

#endif // MathBasic.h
