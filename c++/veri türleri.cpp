
#include <iostream>

int main()
{
	/* char d = 65; // karakter veri türünün içerisinde aslında sayılar tutulur bu sayılar bazı karakterleri lanse eder. Yani 'char'ın içerisinde 65 'A' harfine denk geldiği için çalıştırdığımızda çıktımızı 'A' olarak alırız. 
	// 'char d = 120' yazıp çalıştırdığımızda 'x' çıktısını alırız...
	
	std::cout << d;*/

	
	
	/* signed int s = -1;
	unsigned int u = 1;

	if (s < u) {
		std::cout << "kucuk";
	}
	else {
		std::cout << "kucuk degil"; // çalıştırdığımız zaman consola 'kucuk' ibaresi yerine 'kucuk değil' ibaresi yazılır. 
		//Burada şöyle bir olay gerçekleşiyor; unsigned ve signed veri türlerini bir if içerisinde karşılatırırken unsigned olan yani işaretsiz olan 
		//sayı işaertli sayıya döndürülüyor. Yani 1'de -1'e dönüştürülüyor ve burada -1<-1 diye sormuş oluyoruz...
	} */

	/*unsigned short x (65535);
	std::cout << "x degeri:" << x << '\n';

	x = 65536;
	std::cout << "x yeni degeri:" << x << '\n';

	x = 65537;
    std::cout << "x son degeri:" << x << '\n'; // tam sayı taşması ile ilgili bir örnek.. Taşma olduğunda ikinci değeri yani 65536'yı 'max deger+1' e bölüp kalan çıktı olarak verilir.
	// 65535 e +1 eklediğimiz çıkan sonucu 65536 ya böldüğümüzde kalan 0 olduğu için çıktıda "x yeni degeri" 0 olarak görürüz.. */


	/* unsigned int x[3];
	unsigned int y[5];

	std::cout << x - y << '/n'; // buradan aldığımız çıktı '3-5' in çıktısı değildir. Onun yerine farkllı bir çıktı alıırız. Çünkü program 'bana iki tane unsigned sayı yani işaretsiz bir tam sayı verildi 
	//ve bunların sonuçları da işaretsiz bir tam sayı olmalıdır' diye düşünür.. Bundan dolsyı ds sonucu işaretsiz tamsayı olarak tutmaya çalışıyor ama tutamadığı için bambaşka bir sonuç elde ediyoruz..
	*/



	/*int8_t d = 115;

	std::cout << d << '/n'; // Burda sonucun s ile başlamasının sebebi programın bunu bir 'char' sanamasıdır.*/



	//int8_t b = 6;
	//int8_t a = 6;

	//std::cout << a+b << '/n'; // Ama burada bir işlem söz konusu olduğu için consoleda herhangi bir harf ya da karakter çıkmaz. Toplama işleminin sonucunu bizlere verir.
	// Mesela a+b yerine sadece a nın çıktısını isteseydik bize bir simge verecekti ama orta bir işlem söz konusu olduğu için çıktımız bir tam sayı oldu.


	////(Literal Constants)
	//	bool isActive{ true };
	//std::cout << "Hello World!"; //btk akademi c++ veri türleri6 daki videoyu izle burasını anlamak için


	////(Symbolic Constants)
	//	conts int x{ 4 };
	//    //x = 15;
	//    //conts double pi{ 3.14 }; //btk akademi c++ veri türleri6 daki videoyu izle burasını anlamak için

	// tür dönüşümü dediğimiz şey bir veri türünü başka bir veri türüne dönüştürmek istediğimiz zaman yaptığımız eylem.
	// mesela int bir değeri doublea dönüştürmek için, ya da float bir değeri inte dönüştürmek için, vs...
	// şu an için bilmemiz gereken iki tür vardır. Bunlar kapalı tür dönüşümü ve açık tür dönüşümü..
	
	
	/* kapalı tür dönüşümü: derleyicinin kendi kendine, bizim müdahale etmediğimiz işlemdir.
	int a = 10;
	a = 1.4;
	std::cout << a; // buarda ondalıklı bir sayı(float, double) tutamayan bir veri türünün içerisine ondalıklı bir veri yazdık.
	çalıştırdığımızda bize 1.4 değil 1 çıktısını verdi.. Çünkü başta a yı int olarak tanımladık ve derleyici ikinci satırdaki 1,4 ü yani ondalıklı veriyi
	bizim müdahalemiz olmadan int bir değere çevirerek çıktıyı öyle verdi..
	/Uyarı	C4244	'=': 'double' - 'int' dönüşümü; veri kaybı olabilir.. AAyrıca bu şeklilde bir uyarı alırız..*/


	/* açık tür dönüşümü : derleyiciye bizim söylediğimiz yani al bunu dönüştür dediğimiz işlemdir.
	int a = 10;
	a = static_cast<int>(5.9);   
    std::cout << a; // yukarıda derleyicinin yaptığı şeyi burada biz bile isteye yapıyoruz. Bu yüzden de bir öncekinde olduğu gibi hata ya da uyarı alamdık.
	bu bile isteye yapma işleminide 'static_cat' ifadesiyle yapmış olduk. Burada bu ifadeden sonra gelen '<int>' ifadesi;
	ben yazdığım yeni değeri (5.9) bir int olarak almak istiyorum demiş oluyorum. Ve bu yüzden hata almıyorum.
	( derleyici yazan yani benim veri kaybı yaşayabileceğimi bildiğimi düşünüyor, kendim müdahale ettiğim için, bu yüzden hata yok)*/





}

