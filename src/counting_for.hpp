#ifndef COMPARISON_H
#define COMPARISON_H
int counting_for_tele2(int* imax_fortele2, int* max_fortele2, int* tele2, int* mts, int* megafon, int* beeline, int* yota);
int counting_for_mts(
        int* imax_mts,
        int* max_mts,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota);
int counting_for_megafon(
        int* imax_megafon,
        int* max_megafon,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota);
int counting_for_beeline(
        int* imax_beeline,
        int* max_beeline,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota);
int counting_for_yota(
        int* imax_yota,
        int* max_yota,
        int* tele2,
        int* mts,
        int* megafon,
        int* beeline,
        int* yota);


int comparison(int* tele2, int* mts, int* megafon, int* beeline, int* yota);
#endif
