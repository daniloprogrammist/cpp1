#include <iostream>
using namespace std;
int main(){
    
    //Первый пример:

    // for (int i = 1; i < 5; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout << "#";
    //     }
    //     cout << "\n";
    // } 
    // for (int i = 1; i < 5; i++){
    //     for (int d = 4; d > i; d--){
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++){
    //         cout << "#";
    //     }
    //     cout << "\n";
    // }

    //Второй пример:

    // for (int number_strick = 1; number_strick < 5; number_strick++){
    //     for (int reshetka = 1; reshetka <= number_strick; reshetka++){
    //         cout << "#";
    //     }
    //     cout << "\n";
    // }   
    // for (int number_strick = 1; number_strick < 5; number_strick++){
    //     for (int d = 4; d > number_strick; d--){
    //         cout << "#";
    //     }
    //     cout << "\n";
    // }

    // ПРОГРАММА ВЫВОДИТ РОМБ ВЫСОТОЙ, ВЫБРАННОЙ ПОЛЬЗОВАТЕЛЕМ!
    
    int size = 10;
    cout << "Напиши свой размер ромба: ";
    cin >> size;
    for (int number_strick = 1; number_strick < size; number_strick++){
        for (int kolvo_prob = 1; kolvo_prob < size - number_strick; kolvo_prob++){
            cout << " ";
        }
        for (int reshetka = 1; reshetka < number_strick * 2; reshetka++){
            cout << "◊";
        }
        cout << "\n";
    }
    for (int number_strick = 1; number_strick < size; number_strick++){
        for (int kolvo_prob = 1; kolvo_prob <= number_strick -1; kolvo_prob++){
            cout << " ";
        }
        for (int reshetka = 1; reshetka < (size - number_strick) * 2; reshetka++){
            cout << "◊";
        }
        cout << "\n";
    }
}       

