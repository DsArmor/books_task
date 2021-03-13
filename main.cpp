#include <iostream>
using namespace std;

void transparent(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    system("chcp 65001>nul");
    srand(5);
    int const length=15;
    int mas[length];
    for (int & ma : mas){
        ma=4+rand()%30;
        cout << ma<< " ";
    }
    cout << endl;
    for (int i=0; i<length; i++){
        for (int j=0; j<length; j++){
            if (mas[i]%2==0) {
                if ((mas[i] < mas[j] && mas[j] % 2 == 0) || (mas[j]%2!=0 && i>j)) {
                    transparent(mas[i], mas[j]);
                }
            }
            else {
                if ((mas[i]>mas[j] || mas[j]%2==0) && (i<j)){
                    transparent(mas[i], mas[j]);
                }
            }
        }
    }
    for (int ma:mas){
        cout << ma << " ";
    }

}
