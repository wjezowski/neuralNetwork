//
// Created by Wojtek on 2018-07-19.
//


#include <boost/test/unit_test.hpp>
#include "Input.h"
using namespace std;

BOOST_AUTO_TEST_SUITE(InputTest)
    BOOST_AUTO_TEST_CASE(DefaultWeightTest)
    {
        shared_ptr<Input> testInput = make_shared<Input>(5.3);

        BOOST_CHECK_EQUAL(testInput->getValue(), 5.3);

        bool defaultWeightInterval = false;
        if (testInput->getWeight() >= -0.5 && testInput->getWeight() <= 0.5)            defaultWeightInterval = true;

        BOOST_CHECK_EQUAL(defaultWeightInterval, true);
    }

    BOOST_AUTO_TEST_CASE(AllConstructorArgumentsTest)
    {
        shared_ptr<Input> testInput = make_shared<Input>(5.3, 1.2);

        BOOST_CHECK_EQUAL(testInput->getValue(), 5.3);
        BOOST_CHECK_EQUAL(testInput->getWeight(), 1.20);
    }
BOOST_AUTO_TEST_SUITE_END()