#ifndef _PYRAMID_H
#define _PYRAMID_H


#include "Shape3D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Pyramid : public Shape3D<T> {
  public:
    inline ShapeResultData<T> compute();

    inline string print();

    inline Pyramid(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Pyramid<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Pyramid<T>::print() {
  return "";
}

template<class T>
inline Pyramid<T>::Pyramid(const ShapeParam<T> & param) : Shape3D<T>(param) {
}

#endif
