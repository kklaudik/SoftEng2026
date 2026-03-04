#ifndef _SPHERE_H
#define _SPHERE_H


#include "Shape3D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Sphere : public Shape3D<T> {
  public:
    inline virtual ShapeResultData<T> compute();

    inline string print();

    inline Sphere(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Sphere<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Sphere<T>::print() {
  return "";
}

template<class T>
inline Sphere<T>::Sphere(const ShapeParam<T> & param) : Shape3D<T>(param) {
}

#endif
