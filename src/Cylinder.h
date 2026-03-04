#ifndef _CYLINDER_H
#define _CYLINDER_H


#include "Shape3D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Cylinder : public Shape3D<T> {
  public:
    inline virtual ShapeResultData<T> compute();

    inline string print();

    inline Cylinder(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Cylinder<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Cylinder<T>::print() {
  return "";
}

template<class T>
inline Cylinder<T>::Cylinder(const ShapeParam<T> & param) : Shape3D<T>(param) {
}

#endif
