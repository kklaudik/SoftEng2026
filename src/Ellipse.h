#ifndef _ELLIPSE_H
#define _ELLIPSE_H


#include "Shape2D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Ellipse : public Shape2D<T> {
  public:
    inline ShapeResultData<T> compute();

    inline string print();

    inline Ellipse(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Ellipse<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Ellipse<T>::print() {
  return "";
}

template<class T>
inline Ellipse<T>::Ellipse(const ShapeParam<T> & param) : Shape2D<T>(param) {
}

#endif
