#include <gtest/gtest.h>
#include "ShapeFactory.h"
#include "Rhombus.h" // Twój plik, z którego przed chwilą wysłałaś kod

TEST(test_rhombus, AddFunction)
{
    // 1. Tworzymy obiekt parametrów tak jak u Cb w kodzie
    ShapeParam<float> param;

    // Z Twojego pliku: klasa ma metodę set_attrib
    param.set_attrib(ShapeParamIndex::PARAM_DIAGONAL, 10.f);
    param.set_attrib(ShapeParamIndex::PARAM_DIAGONAL_2, 8.f);

    // Nie mamy dostępu do type=, więc przekazujemy to po prostu do Rombu
    Rhombus<float> shape(param);

    // 2. Pobranie danych wyniku: Z Twojego pliku klasa nazywa się
    // ShapeResult<T>
    ShapeResult<float> data = shape.compute();

    // Z Twojego pliku: metoda nazywa się get_attrib
    float area = data.get_attrib(ShapeResultIndex::RESULT_AREA);

    // (10 * 8) / 2 = 40
    ASSERT_FLOAT_EQ(area, 40.f);
}
