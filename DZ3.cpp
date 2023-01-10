// DZ3.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ ïðèëîæåíèÿ
#include <iostream>
#include <math.h>

using namespace std;


pair<int*, int> mod_array(int arr[], const int& n) {
    int x;
    int len = 0;



    for (int i = 0; i < n; i++) {
        if (arr[i] > 5) {
            len = len + 1;
        }
    }
    cout << endl;
    cout << endl;
    cout << len << endl;
    int* tmp = new int[len];

    int count = 0;

    for (int i = 0; i < len; i++) {
        for (int j = count + 1; j < n; j++) {
            if (arr[j] > 5) {
                count = j;
                tmp[i] = arr[j];
                break;
            }
        }

    }
    return { tmp, len };
}


pair<int*, int> dyn_array(int arr[]) {
    int x;
    int len = 1;
    do {
        len++;
        cin >> x;
        int* tmp = new int[len];
        for (int i = 0; i < len - 1; i++) {
            tmp[i] = arr[i];
        }
        tmp[len - 1] = x;

        for (int i = 0; i < len; i++) {
            arr[i] = tmp[i];
        }
        delete[] tmp;
    } while (x != 0);
    return { arr, len };
}


int main() {


    /*
     * Çàäàíèå 1: íå èñïîëüçóÿ std::vector íàïèñàòü äèíàìè÷åñêèé ìàññèâ,
     * êóäà ïîëüçîâàòåëü ââîäèò íàòóðàëüíûå ÷èñëà, à îíè äîáàâëÿþòñÿ â êîíåö,
     * ïðè ýòîì ïîëüçîâàòåëü ìîæåò ââîäèòü ñêîëüêî óãîäíî çíà÷åíèé, ïîýòîìó
     * âûäåëèòü ïàìÿòü ïîä 100000, à ïîòîì ñêàçàòü, ÷òî ìíîãî íåëüçÿ. Óñëîâèÿ âûõîäà èç öèêëà: ïîëüçîâàòåëü ââåë 0.
     * Îôîðìèòü â âèäå ôóíêöèè, êîòîðàÿ âîçâðàùàåò ìàññèâ è åãî äëèíó.



     * Çàäàíèå 2: íàïèñàòü ôóíêöèþ, êîòîðàÿ èç ìàññèâà, ïîëó÷åííîãî â çàäàíèè 1, óäàëÿåò âñå çíà÷åíèÿ,
     * ìåíüøå ÷åì 5, è âîçâðàùåò îòðåäàêòèðîâàííûé ìàññèâ è åãî äëèíó.
     *
     * Âîçìîæíî ïðèãîäèòñÿ: ñèíòàêñèñ pair<int, int>
     * */
    std::pair<int, int> pair_name; //ïàðà int, int
    pair_name.first = 5;
    pair_name.second = 10;


    int arr[1] = { 0 };



    auto T = dyn_array(arr);


    for (int i = 0; i < T.second; i++) {
        cout << *(T.first + i) << ' ';
    }

    auto T_mod = mod_array(T.first, T.second);


    for (int i = 0; i < T_mod.second; i++) {
        cout << *(T_mod.first + i) << ' ';
    }


    return 0;
}
