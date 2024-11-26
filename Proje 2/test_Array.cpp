#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    Array a1;
    a1.print();
    Array a2(5, 0);
    a2.print();
    int arr[] = {3, 3, 3, 3, 3};
    Array a3(5, arr); //yeni dizi tanımladı pointer değişkeni
    a3.print();
    Array a4(a3);
    a4.print();
    a2.add(a3); //a3 olan 3 sayılarını a2 deki sıfırlar ile değiştirme yani ekleme yaptı
    a2.subtract(a3); // a2 de 3 olarak hesap yaptı 3-3 =0 şeklinde eski haline döndü
    a2.fill(1);// 1 ile içini doldur 
    a2.multiply(a3);  
    a3.product(a4);

    a3.getSize();
    a3.getData()[2];
    a2.copy(a3);
    a2.fill(1);
    a2.print();
    a1.print();
    a3.print();
    a4.print();

/*
    Array a1;
    cout << "a1: "<< a1.print() << endl;
    Array a2(5, 0);
    cout << "a2: "<< a2.print() << endl;
    int arr[] = {3, 3, 3, 3, 3};
    Array a3(5, arr); //yeni dizi tanımladı pointer değişkeni
    cout << "a3: "<< a3.print() << endl;
    Array a4(a3);
    cout << "a4: "<< a4.print() << endl;
    cout <<"a2.add(a3): "<< a2.add(a3)<<endl; //a3 olan 3 sayılarını a2 deki sıfırlar ile değiştirme yani ekleme yaptı
    cout <<"a2.subtract(a3): "<< a2.subtract(a3) << endl; // a2 de 3 olarak hesap yaptı 3-3 =0 şeklinde eski haline döndü
    cout <<"a2.fill(1): "<< a2.fill(1)<< endl:;// 1 ile içini doldur 
    cout <<"a2.multiply(a3): "<< a2.multiply(a3)<< endl;  
    cout <<"a3.product(a4): "<< a3.product(a4)<<endl;

    cout << "a3.getSize(): "<< a3.getSize() << endl;
    cout << "a3.getData()[2]: "<< a3.getData()[2] << endl;
    cout << "a2.copy(a3): " << a2.copy(a3)<< endl;
    cout << "a2.fill(1): "<<a2.fill(1) << endl;
    a2.print();
    a1.print();
    a3.print();
    a4.print();
*/
    //a2.subtract(a3);
    //a2.print(); // {0, 0, 0, 0, 0}

    //a2.fill(1);
    //a2.print(); // {1, 1, 1, 1, 1}

    //a2.multiply(a3);
    //a2.print(); // {3, 3, 3, 3, 3}

    //cout << a3.product(a2) << endl; // 45
    //cout << a3.getSize() << endl; // 5
    //cout << a3.getData()[2] << endl; // 3

    return 0;

//     Array a1;  // a1 ← {0} 
//     Array a2(5, 0);    // a2 ← {0, 0, 0, 0, 0} 
//     int arr[]={3,3,3,3,3}; 
//     Array a3(5, arr);  // a3 ← {3, 3, 3, 3, 3} 

//     Array a4(a3);     
//     a2.add(a3);      
//     a2.subtract(a3);  
//     a2.fill(1);     
//     a2.multiply(a3);  
//     // a4 ← {3, 3, 3, 3, 3} 
//     // a2 ← {3, 3, 3, 3, 3} 
//     // a2 ← {0, 0, 0, 0, 0} 
//     // a2 ← {1, 1, 1, 1, 1} 
//     // a2 ← {3, 3, 3, 3, 3} 
//     cout << a3.product(a4)<<endl;  
//     // 45 
//     cout << a3.getSize()<<endl;     
//     //5  
//     cout << a3.getData()[2]<<endl;  
//     a2.copy(a3);      
//     //3 
//     // a2 ← {3, 3, 3, 3, 3} 
//     a2.fill(1);     
//     a2.print();       
//     // a2 ← {1, 1, 1, 1, 1} 
//     // [1 1 1 1 1]   
    

    // Hint:  
    // Array::Array() 
    // { 
    //     Size=1; 
    //     data=new int[Size]; 
    //     for (int i=0; i<Size; i++) 
    //             data[i]=0; 
    // } 
    // this is how you apply  
    // dynamic memory allocation 
    // for the first constructor 
    // function 
}