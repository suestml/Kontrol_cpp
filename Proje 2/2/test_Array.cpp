#include "Array.h"

int main(){
    Array a1;
    a1.print();
    Array a2(5, 0);
    a2.print();
    int arr[] = {3, 3, 3, 3, 3};
    Array a3(5, arr); //yeni dizi tanımladı pointer değişkeni
    a3.print();
    Array a4(a3);
    a4.print();
    cout <<"a2.add(a3): ";
    a2.add(a3); //a3 olan 3 sayılarını a2 deki sıfırlar ile değiştirme yani ekleme yaptı
    a2.print();
    cout <<"a2.subtract(a3): ";
    a2.subtract(a3); // a2 de 3 olarak hesap yaptı 3-3 =0 şeklinde eski haline döndü
    a2.print();
    cout <<"a2.fill(1): ";
    a2.fill(1);
    a2.print();// 1 ile içini doldur 

    cout <<"a2.multiply(a3): ";
    a2.multiply(a3); 
    a2.print();

    cout <<"a2.product(a3): ";
    a3.product(a4);
    a3.print();

    cout << a3.product(a2) << endl; // 45
    cout << a3.getSize() << endl; // 5
    cout << a3.getData()[2] << endl; // 3
    a2.copy(a3);
    a2.print();

    return 0; 
}