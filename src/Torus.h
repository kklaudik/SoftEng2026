#ifndef _TORUS_H
#define _TORUS_H


#include "Shape3D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Torus : public Shape3D<T> {
  public:
    inline virtual ShapeResultData<T> compute();

    inline string print();

    inline Torus(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Torus<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Torus<T>::print() {
  return "";
}

template<class T>
inline Torus<T>::Torus(const ShapeParam<T> & param) : Shape3D<T>(param) {
}

#endif
