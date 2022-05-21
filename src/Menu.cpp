#include "about_operators.hpp"
#include "questions.hpp"
#include <iostream>
using namespace std;

void mainMenu()
{
    int tele2[6]; //баллы для каждого из тарифов оператора Теле 2
                  // 0-Мой онлайн
                  // 1-Мой онлайн+
                  // 2-Мой разговор
                  // 3-Лайт
                  // 4-Безлимит
                  // 5-Премиум
    for (int i = 0; i < 6; i++) {
        tele2[i] = 0;
    }
    int mts[7]; //баллы для каждого из тарифов оператора Мтс
    // 0-Тарифище
    // 1-Мой Smart
    // 2-Наш Smart
    // 3-Тариф «X»
    // 4-Smart
    // 5-Smart Top
    // 6-ULTRA
    for (int i = 0; i < 7; i++) {
        mts[i] = 0;
    }
    int megafon[7]; //баллы для каждого из тарифов оператора Мегафон
    // 0-Максимум
    // 1-Всё
    // 2-Интернет
    // 3-Звонки
    // 4-Минимум
    // 5-VIP
    // 6-Премиум
    for (int i = 0; i < 7; i++) {
        megafon[i] = 0;
    }
    int beeline[8]; //баллы для каждого из тарифов оператора Билайн
    // 0-Не один дома
    // 1-Не один дома-2
    // 2-Близкие люди 1
    // 3-Близкие люди 2
    // 4-Близкие люди 3
    // 5-Близкие люди 4
    // 6-Близкие люди 5
    // 7-Близкие люди 6
    for (int i = 0; i < 8; i++) {
        beeline[i] = 0;
    }
    int yota[3]; //баллы для каждого из тарифов оператора Yota
    // 0-больше интернета
    // 1-больше минут
    // 2-ещё больше минут и интернета
    // 0
    for (int i = 0; i < 3; i++) {
        yota[i] = 0;
    }

    //вывод пунктов меню
    system("cls");

    cout << "\t   Dvadtsatov, Zyuzev, Boyarintsev - IP 115      " << endl;

    cout << "\t1-для запуска ассистента!" << endl
         << "\t2-инструкция." << endl
         << "\t3-сведенья об операторах." << endl
         << "\t4-Выход." << endl;

    bool check_input_data = 0;

    int choice; //для выбора пункта меню
    while (!check_input_data) {
        cout << ">";
        cin >> choice;

        if (choice < 1 || choice > 4)

            cout << "Ошибка,такого пункта не существует!" << endl;
        else
            check_input_data = 1;
    }

    switch (choice) {
    case 1:
        question1(tele2, mts, megafon, beeline, yota);
        break;
    case 2:

        system("cls");

        cout << "\nДля запуска ассистента, помогающего выбрать тариф нажмите - "
                "1"
             << endl
             << "Чтобы узнать информацию об операторах нажмите - 3 " << endl
             << "Курсовая работа была создана: by Zyuzev and Boyarintsev"
                " Dvadtsatov- "
                "ИП-115"
             << endl
             << "" << endl
             << endl;
        system("pause");
        mainMenu();
        break;
    case 3:

        system("cls");
        about_operators(tele2, mts, megafon, beeline, yota);
        break;

    case 4:
        exit(0); //выход
    }
}
