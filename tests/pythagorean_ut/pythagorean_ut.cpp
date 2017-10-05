#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C"
{
#include "pythagorean.h"
}


TEST_GROUP(Pythagorean)
{
    void setup() {
    }


    void teardown() {
        mock().clear();
    }

};


TEST(Pythagorean, simpleTest)
{
    // test 1
    // arrange
    mock().expectOneCall("SquareRoot_sqrt")
        .withParameter("number", 25.0)
        .andReturnValue(5.0f);

    // act
    float hypotenuse = Pythagorean_hypotenuse(3, 4);

    // assert
    mock().checkExpectations();

    CHECK_EQUAL(5.0f, hypotenuse);
}


