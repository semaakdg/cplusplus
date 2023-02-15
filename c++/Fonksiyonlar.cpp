

#include <iostream>

/*void mesaj() {
    std::cout << "test";
}


int topla(int sayi1, int sayi2) { // c++'ta iç içe fonksiyonlar yazmaya çalışırsak hata alırız. Çünkü c++ iç içe fonksiyonları desteklemiyor.
    mesaj();                                 //ama bir fonksiyon başka bir fonksiyonu çağırabilir,  
    return sayi1 + sayi2;

}


int main()
{
   std::cout<< topla(2,2);//std::cout<< yazmazsam fonksiyon döndürülür ama ekranda herhangi bir şey yazmaz. Ama yazdığım zaman 2+2 yi yani 4 ün ekranda yazdığını görürüm.
}
*/


                   /*İleriye Dönük Bildirim


          'derleme' işlemi yukarıdan aşağıya doğru gerçekleşir!!!



/ bildirim ve tanımlama
/ declaration defination


int topla(int sayi1, int sayi2); / bildirim yani declaration olarak ifade ettiğimiz şey budur. 
                                 / aşağıda süslü parentezli olan hali ise defination yani tanımlamadır..

int main() 
{
    int a = 10;
    int b = 10;
    std::cout << topla(a, b);
}

int topla(int sayi1, int sayi2) { / buradaki topla fonksiyonunu alıp main fonksinonunun altına getirdim ve sistem derlemedi, hata verdi.
    return sayi1 + sayi2;         / bu hatayı gidermek için declare etmem yani bildirmem lazım. Bu işlemide yukarıda süslü parantezsiz haliyle yaptım.
}*/



                                         // fonksiyonların aşırı yüklenmesi(overloading)
/* Fonksiyonların aşıırı yüklenmesi belki de adından dolayı bazen kafaları karıştırmaktadır.İnsanlar aşırı yüklenmeyi gereğinden fazla iş yaptımak gibi algılıyorlar. 
Yani bir kamyonun alabileceği yük miktarı iki ton iken ona beş ton yüklenmesi gibi sanıyorlar. Aslında durum böyle değildir.

Aşırı yükleme aynı ada sahip fonksiyonların farklı parametrelerle oluşturulması ve kullanılmasıdır. Aşağıda ki örnekte ana foksiyonumuz 'topla'dır. Biz bu fonksiyonu double, int 
gibi farklı parametreler oluşturarak kullanabiliyoruz.    



int topla(int sayi1, int sayi2) { 
    std::cout << "int";
    return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2) {
    std::cout << "double";
    return sayi1 + sayi2;
}

int main()
{
    double a = 10; /Buradaki intlerin yerine double yazarak değiştirerek 'double topla' yı çağırabiliriz ama '=' sonrasındaki saylara virgül ekleyi unutmamalıyım. diğer türlü doble 
    double b = 10;/olmazlar zaten ve derleyici derleme yaparken kendine en uygun olanı seçeceği için double istememe rağmen consolea int toplamı yani burası için 20 yazdırılabilir.
    std::cout << topla(a, b);//Buna dikkat etmem gerekir.  ( Yani 10  10.5,10.7 gibi sayılara dönüşmelidir.)

}
 */





