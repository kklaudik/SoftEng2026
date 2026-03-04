#ifndef _SHAPERESULTDATA_H
#define _SHAPERESULTDATA_H


#include <vector>
using namespace std;
#include "ShapeResultIndex.h"

template<class T>
class ShapeResultData {
  private:
    vector<T> attribs;


  public:
    inline T get(ShapeResultIndex ind);

    inline bool set(ShapeResultIndex ind, const T & val);

};
template<class T>
inline T ShapeResultData<T>::get(ShapeResultIndex ind) {
  return 0;
}

template<class T>
inline bool ShapeResultData<T>::set(ShapeResultIndex ind, const T & val) {
  return true;
}

#endif
