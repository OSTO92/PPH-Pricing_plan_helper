#include "Menu.hpp"
#include "about_operators.hpp"
#include <iostream>

using namespace std;

int counting_for_tele2(
        int* imax_fortele2,
        int* max_fortele2,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota)
{
    int i;
    *imax_fortele2 = 0;
    *max_fortele2 = tele2[0];

    for (i = 0; i < 6; i++) {
        if (tele2[i] > *max_fortele2)
            *max_fortele2 = tele2[i], *imax_fortele2 = i;
    }

    return 0;
}

int counting_for_mts(
        int* imax_mts,
        int* max_mts,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota)
{
    int i;
    *imax_mts = 0;
    *max_mts = mts[0];

    for (i = 0; i < 7; i++) {
        if (mts[i] > *max_mts)
            *max_mts = mts[i], *imax_mts = i;
    }

    return 0;
}

int counting_for_megafon(
        int* imax_megafon,
        int* max_megafon,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota)
{
    int i;
    *imax_megafon = 0;
    *max_megafon = megafon[0];

    for (i = 0; i < 7; i++) {
        if (megafon[i] > *max_megafon)
            *max_megafon = megafon[i], *imax_megafon = i;
    }

    return 0;
}

int counting_for_beeline(
        int* imax_beeline,
        int* max_beeline,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota)
{
    int i;
    *imax_beeline = 0;
    *max_beeline = beeline[0];

    for (i = 0; i < 8; i++) {
        if (beeline[i] > *max_beeline)
            *max_beeline = beeline[i], *imax_beeline = i;
    }

    return 0;
}

int counting_for_yota(
        int* imax_yota,
        int* max_yota,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota)
{
    int i;
    *imax_yota = 0;
    *max_yota = yota[0];

    for (i = 0; i < 3; i++) {
        if (yota[i] > *max_yota)
            *max_yota = yota[i], *imax_yota = i;
    }

    return 0;
}
