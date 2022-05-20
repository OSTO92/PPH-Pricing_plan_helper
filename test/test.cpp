#define CATCH_CONFIG_MAIN
#include "../src/Menu.hpp"
#include "../src/about_operators.hpp"
#include "../src/comparison.hpp"
#include "../src/counting_for.hpp"
#include "../src/questions.hpp"
#include "../thirdparty/catch.hpp"
#include <iostream>
#include <string.h>
using namespace std;

TEST_CASE(
        "check counting_for_tele2 for max element and index",
        "[counting_for_tele2]")
{
    const int n = 6;
    int max, imax, tele2[n], m[n], b[n], c[n], e[n];
    tele2[0] = 1;
    tele2[1] = 2;
    tele2[2] = 132;
    tele2[3] = 3;
    tele2[4] = 4;
    tele2[5] = 5;

    counting_for_tele2(&imax, &max, tele2, m, b, c, e);

    REQUIRE(imax == 2);
    REQUIRE(max == 132);
}

TEST_CASE(
        "check counting_for_mts for max element and index",
        "[counting_for_mts]")
{
    const int n = 7;
    int max, imax, tele2[n], m[n], b[n], c[n], e[n];
    m[0] = 1;
    m[1] = 2;
    m[2] = 3;
    m[3] = 3333;
    m[4] = 4;
    m[5] = 5;
    m[6] = 7;
    counting_for_mts(&imax, &max, tele2, m, b, c, e);

    REQUIRE(imax == 3);
    REQUIRE(max == 3333);
}

TEST_CASE(
        "check counting_for_megafon for max element and index",
        "[counting_for_megafon]")
{
    const int n = 7;
    int max, imax, tele2[n], m[n], b[n], c[n], e[n];
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    b[3] = 33;
    b[4] = 4;
    b[5] = 5;
    b[6] = 5657;
    counting_for_megafon(&imax, &max, tele2, m, b, c, e);

    REQUIRE(imax == 6);
    REQUIRE(max == 5657);
}

TEST_CASE(
        "check counting_for_beeline for max element and index",
        "[counting_for_beeline]")
{
    const int n = 8;
    int max, imax, tele2[n], m[n], b[n], c[n], e[n];
    c[0] = 1;
    c[1] = 2;
    c[2] = 3;
    c[3] = 33;
    c[4] = 4;
    c[5] = 5;
    c[6] = 6;
    c[7] = 73;
    counting_for_beeline(&imax, &max, tele2, m, b, c, e);

    REQUIRE(imax == 7);
    REQUIRE(max == 73);
}

TEST_CASE(
        "check counting_for_yota for max element and index",
        "[counting_for_yota]")
{
    const int n = 3;
    int max, imax, tele2[n], m[n], b[n], c[n], e[n];
    e[0] = 1;
    e[1] = 7;
    e[2] = 3;

    counting_for_yota(&imax, &max, tele2, m, b, c, e);

    REQUIRE(imax == 1);
    REQUIRE(max == 7);
}
