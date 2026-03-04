#ifndef _TRIANGLE_H
#define _TRIANGLE_H


#include "Shape2D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Triangle : public Shape2D<T> {
  public:
    inline virtual ShapeResultData<T> compute();

    inline string print();

    inline Triangle(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Triangle<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Triangle<T>::print() {
  return "";
}

template<class T>
inline Triangle<T>::Triangle(const ShapeParam<T> & param) : Shape2D<T>(param) {
}

#endif
