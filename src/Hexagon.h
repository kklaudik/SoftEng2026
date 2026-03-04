#ifndef _HEXAGON_H
#define _HEXAGON_H


#include "Shape2D.h"
#include "ShapeResultData.h"
#include <string>
using namespace std;
#include "ShapeParam.h"

template<class T>
class Hexagon : public Shape2D<T> {
  public:
    inline ShapeResultData<T> compute();

    inline string print();

    inline Hexagon(const ShapeParam<T> & param);

};
template<class T>
inline ShapeResultData<T> Hexagon<T>::compute() {
  return ShapeResultData<T>();
}

template<class T>
inline string Hexagon<T>::print() {
  return "";
}

template<class T>
inline Hexagon<T>::Hexagon(const ShapeParam<T> & param) : Shape2D<T>(param) {
}

#endif
