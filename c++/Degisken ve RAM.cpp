

#include <iostream>

int main()
{
    /*int a = 10;

    std::cout << a;// bu şekilde çalıştırdığımızda 10 değerini alırız 
    // ama a'nın önüne &(ampersand) işaretini eklersek biz a'nın değerini değil bellek adresini istemiş olacağımız için bizlere çıktır olarak a'nın bellek adresini verir.
    // çıkan sonuç 10 sayısının bellekte hangi hücrede tutulduğu ile ilgili bize bir adrestir. Biz bu adrese ne zaman başvurursak başvuralım 10 sayısına ulaşırız.(bu örnek üzerinde tabi)
    */






                            /*  NOT: "POİNTER" BİR BELLEK ADRESİ TUTAR VE BİZ BU BELLEK ADRESİ ÜZERİNDEN BELİRTTİĞİMİZ DEĞERE ULAŞABİLİRİZ!!!*/

   
    /*        "pointer"
    *  bellek adreslerini saklamak için de c++ ta pointer kavramını kullanırız. 
    *  Pointer: işaretçi. Peki aşağıda neyi işater ediyor? a'yı referans verdiğimix için a'nın bellek adresini işater ediyor.
    

    int a = 10;

    int aPtr = &a; 

    std::cout << &a;
    // bellek adresini tutmak için normal bir tanımlama şekli ni kullanamayaız, bize uyarı verir.
    Bu yüzden de biz içerisinde tutacağımız türün(int, char, bool gibi) yanına, sağına '*'koyarız bu şekilde sistem tutacağımız verinin bir bellek adresi olduğunu anlar ve uyarı vermez.


    int a = 10;
    int* aPtr = &a;

    std::cout << aPtr; // bu  şekilde çalıştırdığımda çıktı olarak a'nın bellek adresini alırım


    // bunu  yaparak bellek adresine ulaştık. 10 sayısına ulabilmek içinde aPtr'nin soluna '*' işareti koymalıyız. bu şekilde çıktımız 10 olacaktır.
    int a = 10;
    int* aPtr = &a;

    std::cout << *aPtr;
    


    int a = 10;
    int* aPtr = &a; // buradaki yıldızın solda, sağda ya da ortada olmasının pekte bir önemi yok. Zaten derleyici sembolü görünce işlemin ne olduğunu anlıyor ve ona göre hareket ediyor.
    // ki zaten örnek olarak göstermek için '*' işaretinin hem solda hem orta olduğu hallerini yazmaya çalışsamda sistem buna izin vermedi ve otomatik olarak anlayacağı şekilde düzeltti.
    // Farklı yerlerde, kodlarda solda ya da orta da gördüğünde yanlış olduğunu düşünme, derleyici işareti gördüğünü sürece çıktıyı istenilen şekilde verecektir.

    std::cout << aPtr;
    */


    /*
    int a = 10;

    std::cout << *&a;  / &'ın yanına '*' eklediğimizde bize bellke adresini değil direkt olarak 10 verir.
    / mesela yukarıda yazdığımız '*&a' değerinin önüne & yazarsak bize tekrar bellek adresini verir. 'std::cout<< &*&a' bunun önünede * eklersek tekrar 10 çıktısını alırız ve bu böyle devam eder.

    std::cout << &*&a;/ bellek adresini verir
    std::cout << *&*&a;/ 10 çıktısını verir
    std::cout << &*&*&a;/ bellek adresini verir
    */



}


