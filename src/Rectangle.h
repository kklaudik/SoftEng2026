#ifndef _RECTANGLE_H
#define _RECTANGLE_H


#include "Shape2D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Rectangle : public Shape2D<T> {
  public:
    inline virtual ShapeResultData<T> compute();

    inline string print();

    inline Rectangle(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Rectangle<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Rectangle<T>::print() {
  return "";
}

template<class T>
inline Rectangle<T>::Rectangle(const ShapeParam<T> & param) : Shape2D<T>(param) {
}

#endif
