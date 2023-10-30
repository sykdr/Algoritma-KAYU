/*
   SORU 1. Aşağıdaki C programını inceleyiniz. Programın çıktısında 8.00 sonucunu vermektedir.
   Ondalık olarak tanımlanan “a” ve “b” değerlerini kullanıcıdan isteyen C programını yazınız. (15p)

CEVAP 
	
#include<stdio.h>

int main() {
	float a, b;
	printf("İki adet sayı giriniz:\n");
	scanf("%f %f", &a, &b);
	printf("%.2f ve %.2f değerinin toplamı = %.2f", a, b, a + b);

	return 0;
}
*/

/*
	SORU 2. Aşağıda C programında verilen her komutun anlamını açıklayınız.(20p)
 CEVAP
	
// Ekrana Merhaba Nasılsın? yazan program        ==> Tek satır yorum işareti // ile bilgi verme amaçlı yorum satırı eklendi.

#include <stdio.h>                               ==> Kodumuzda kullanılacak fonksiyonlar için <stdio.h> kütüphanesini kodumuza ekledik.	
int main()                           ==> int main(){kodlar;} ile kodlarımızın çalıştırılmasını sağlayacak main() fonskiyonunu yazdık.
{

	printf("Merhaba \n");        ==> printf() fonskiyonu ile tırnaklar içerisindeki metni çıktı(output) olarak ekrana yazdırdık ve devamında bir alt satıra geçilmesi için \n escape karakterini kullandık. Noktalı virgül ; ile kod satırının bittiğini belirttik.
	printf("Nasılsın");          ==> Tekrar printf() fonskiyonunu kullandık ve istenilen metni yazdırdık.
	return 0;		     ==> return ile programın başarıyla tamamlanıp tamamlanmadığını öğrenmek için ekranda gözükmek üzere 0 değerini geri dönderdik.
}
*/


/*
 SORU 3. Aşağıdakilerden hangisi yanlış değişken ismidir? (10p)
CEVAP

a. Maas         	 ==> DOĞRU
b. Maas23		 ==> DOĞRU
c. maas$		 ==> YANLIŞ
d. 123_4		 ==> DOĞRU
e. MAAS			 ==> DOĞRU
f. double		 ==> YANLIŞ
g. maas_$		 ==> YANLIŞ
h. İf_123		 ==> YANLIŞ
i. Maas_23		 ==> DOĞRU
j. le			 ==> DOĞRU
k. 23_maas		 ==> YANLIŞ
l. İnt			 ==> YANLIŞ
*/

/*
 SORU 4. Tamsayı olarak tanımlanmış “toplam” değişkenini doğru bir şekilde ifade ediniz.(10p)
CEVAP

#include<stdio.h>
int main() {
	int toplam;
}
*/

/*
 SORU 5. Kullanıcıdan iki tamsayı alarak bu sayıların toplamını bulup ekranda gösteren bir C program yazınız. (15p)
CEVAP

#include<stdio.h>
int main() {
	int sayi1, sayi2, toplam;
	printf("Toplanacak iki sayıyı giriniz:\n");
	scanf("%d %d", &sayi1, &sayi2);
	toplam = sayi1 + sayi2;
	printf("%d ve %d sayılarının toplamı = %d", sayi1, sayi2, toplam);
	
	return 0;	
}
*/

/*
 SORU 6. Aşağıdaki seçeneklerden hangisinde tamsayı olarak tanımlanan toplam değişkenine ilk değer olarak 0 atanmıştır?(5p)
CEVAP
 
a. Toplam:integer=0;           ==> YANLIŞ
b. Toplam=0, int;	       ==> YANLIŞ
c. İnt toplam = 0;	       ==> DOĞRU
d. İnt=0, toplam;	       ==> YANLIŞ
*/

/*
 SORU 7. Aşağıdaki komutlar yürütüldüğünde a, b ve c’nin son değerleri ne olur?(10p)
CEVAP
 
İnt a,b,c;
a=8;
b=15;
c=a/b+b/a*2;    ==> a/b tamsayı bölme =0, b/a tamsayı bölme =1 * 2 = 2   0 + 2 = 2
b=b/2;
a=a+3; 			==> a=11   b=7	 c=2  OLUR.
*/

/*
 SORU 8. Aşağıdaki program parçasının çıktısı nedir? (15p)
CEVAP

#include<stdio.h>
int main()
{
	int a = 285;
	double y = -27.3789;     
	printf("%6.2f\n", y);    ==> -27.38 (2 ondalık basmağı alır.)
	printf("%7.1f\n", --y);  ==> 28.4   (başlangıçta y'yi 1 azaltır ve 1 ondalık basamak alır.)
	printf("%4d\n", a/11);	 ==> 25		
	printf("%2d\n", a+=5);	 ==> 290
}
*/























