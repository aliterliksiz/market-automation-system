#include<stdio.h> // standart input output dosyalar�n� ekler.
#include<string.h> //karakter dizileri ile ilgili fonksiyon, veri t�r� ve makro tan�mlamalar� i�erir.
#include<conio.h> //�o�unlukla MS-DOS derleyicileri taraf�ndan konsol girdi/��kt� i�lemleri i�in sunulan bir ba�l�k dosyas�d�r.
#include<stdbool.h> //ikili say� sistem veri t�r� de�erleri ile ilgili tan�mlamalar C99 standartlar� ile birlikte standart k�t�phaneye kat�lan stdbool.h ba�l�k dosyas�nda yap�lm��t�r.
#include<ctype.h> //karakterlerle ilgili fonksiyon tan�mlamalar� Standart K�t�phanedeki ctype.h ba�l�k dosyas�nda yer almaktad�r.
#include<stdlib.h> //dinamik bellek y�netimi, rasgele say� �retimi, �evre ile ileti�im, tamsay� aritmeti�i, arama, s�ralama ve d�n��t�rme gibi �e�itli genel ama�l� fonksiyonlar tan�mlanm��t�r.


	FILE *fo,*fg,*fp,*fp1; 
//FILE, stdio.h dosyas� i�inde tan�mlanm�� olup dosyan�n boyutu, aktif konumu ve giri� modlar� gibi dosya hakk�ndaki de�i�ik de�erleri i�eren bir yap�d�r.
//fgetc() ve fputc() fonksiyonlar�: genel yap�s� fp*,fonksiyonu kullanarak dosyaya bir karakter yazabilir veya dosyadan bir karakter okuyabiliriz
//fgetc() fonksiyonu, a�a��da belirtilen 2 farkl� durumda, EOF de�erini geri verir:
//1. Bir hata meydana geldi�inde
//2. Dosya sonuna gelindi�inde
//fgetc() fonksiyonu EOF de�erini geri verdi�inde, yukar�daki durumlardan hangisine g�re bu de�eri geri verdi�ini bilemeyiz. EOF de�erinin fgetc() fonksiyonu taraf�ndan hangi nedenle geri verildi�ini anlayabilmek amac�yla a�a��da ana yap�lar� verilen feof() ve ferror() fonksiyonlar�n� programlar�m�zda kullanabiliriz


struct urunler //T�rleri farkl� olan verileri tek bir isim alt�nda toplayabilmemiz i�in ise, yap� (structure) ad� verilen kullan�c� tan�ml� veri t�rlerini kullanabiliriz.
{
	int kodu;
	int durum;
	char adi[15];
	char cinsi[15];
	float alis;
	float satis;
}; struct urunler urun,gec;

struct musteri
{
	int hesap;
	int durum;
	char adi[20];
	char soyadi[20];
	char adres[50];
	char mail[20];
	long long int telefon;
}; struct musteri islem1, gec1;


 void input();  //Fonksiyon prototipi
 void writefile();
 void search();
 void output();

 void urun_listeleme();

 struct tarih{
	   int ay;
	   int gun;
	   int yil;
	   };

  struct hesap {
	int sayi;
	char ad[100];
	char subeAdi[100];
	char hesapdurumu;
	float toplamtutar;
	float kalantutar;
	float odeme;
	struct tarih odemetarihi;
  }musteri;
  int tl,sl,ts;   




void urun_kayit()
{
    int secim1;

    printf("\n\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BURADAN URUNLERINIZI KAYIT EDEBILIRSINIZ\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");

    printf ("\n * * * * * * * * * * * * * * * *\n\n");
    fo = fopen("urun.txt", "a"); //"a" komutu = Bir metin dosyas�n� ekleme yapmak i�in a�ar. Dosya yok ise olu�turulur.

    printf("Urunun Kodu :");
    scanf("%d", &urun.kodu);

    printf("Urunun Adi :");
    scanf("%s", &urun.adi);

    printf("Urunun Cinsi :");
    scanf("%s", &urun.cinsi);

    printf("Urunun Alis Fiyati :");
    scanf("%f", &urun.alis);

    printf("Urunun Satis Fiyati :");
    scanf("%f", &urun.satis);

    fprintf(fo, "\n %d %s %s %.2f %.2f 1", urun.kodu, urun.adi, urun.cinsi, urun.alis, urun.satis);  //Fprintf() fonksiyonu dosya ak���na yaz�lan karakter say�s�n� int bir de�er olarak geri d�nd�r�r. Bir ��k�� veya kodlama hatas� meydana gelirse, negatif bir say� geri d�nd�r�r.
    printf ("\n * * * * * * * * * * * * * * * *\n");
    fclose(fo);
    system("cls"); //konsol ekran�n� temizlemek i�in kullan�lan komut
    printf("\n\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BURADAN URUNLERINIZI KAYIT EDEBILIRSINIZ\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
    printf ("\n * * * * * * * * * * * * * * * *\n");
    printf("\n Kayit basariyla olusturuldu.\n Baska ne yapmak istersiniz?\n\n");
    printf("1-Yeni Kayit \n");
    printf("2-Ana Menu\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    scanf("%d", &secim1);
    if (secim1 == 1)
    {
        system("cls");
        urun_kayit();
    }
    if (secim1 == 2)
    {
        system("cls");
        int main();
    }


}
void urun_guncelleme()
{
	int kodu;
	int secim5;
	int bas=1, urun_varmi=0;
	fo = fopen("urun.txt", "r"); //"r" = Okuma i�in bir metin dosyas� a�ar. Dosya mevcut olmal�d�r.

		printf("Guncellenecek urunun kodunu girin :");
		scanf("%d", &kodu);
// fscanf = Dosya ak���ndan (stream) veri okur. 
//Dosya ak���ndan okunan de�erleri, format parametresi ile g�sterilen karakter dizisindeki format tan�mlay�c�lar�n�n s�ras�na ve veri yap�s�na uygun olarak, �� nokta (...) ile ifade edilen ve format parametresinden sonra ayn� s�rayla yer alan de�i�ken parametrelere aktar�r.
		
			while(fscanf(fo, "%d %s %s %f %f %d", &urun.kodu, &urun.adi, &urun.cinsi, &urun.alis, &urun.satis, &urun.durum)!= EOF) //EOF dosyan�n bitti�i haberini bize vermektedir.
			{
				if(urun.kodu=kodu && urun.durum==1)
				{
					printf("Urun Basari ile Eslesti\n");
					urun_varmi=1;
					break;
				}
				else
					printf("Urun Eslesmedi Bekleyin...\n");
			}
		printf("Arama islemi sona erdi.\n");

	fclose(fo);

	fo=fopen("urun.txt","r");
	fg=fopen("gecici.txt","w+"); //"w+" = Okuma ve yazma i�in bir metin dosyas� olu�turur.

		if(urun_varmi==1)
		{
			printf("Yeni ad :");
			scanf("%s", &gec.adi);

			printf("Yeni cins :");
			scanf("%s", &gec.cinsi);

			printf("Yeni alis fiyati :");
			scanf("%f", &gec.alis);

			printf("Yeni satis fiyati :");
			scanf("%f", &gec.satis);

				while(fscanf(fo, "%d %s %s %f %f %d", &urun.kodu, &urun.adi, &urun.cinsi, &urun.alis, &urun.satis, &urun.durum)!= EOF)
				{
					if(urun.kodu=kodu && urun.durum==1) //�r�n kodunun e�le�ip e�lemedi�inin kontrol� burada yap�l�r.
					continue;

					if(bas==1)
					{
						fprintf(fg, "\n%d %s %s %f %f 1", kodu, gec.adi, gec.cinsi, gec.alis, gec.satis);
						bas=0;
					}
				fprintf(fg, "\n%d %s %s %f %f %d", urun.kodu, urun.adi, urun.cinsi, urun.alis, urun.satis, urun.durum);
			}

	fclose(fo);
	fclose(fg);
	printf("\n Kayit guncellendi\n\n");
	remove("urun.txt");
	rename("gecici.txt","urun.txt");   //g�ncelleme i�lemi yeni dosyaya yazd�r�lr.

	}
    printf("\n Baska ne yapmak istersiniz?\n\n");
    printf("1-Yeni Guncelleme \n");
    printf("2-Ana Menu\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    scanf("%d", &secim5);
    if (secim5 == 1)
    {
        system("cls");
        urun_guncelleme();
    }
    if (secim5 == 5)
    {
        system("cls");
        int main();
    }
}

void urun_silme()
{
	bool kayit=false; //Bool veri tipi: �Do�ru� ve �Yanl��� olmak �zere iki de�er alan veri tipidir.  Uygulama i�erisinde true(do�ru) ve false(yanl��) de�er atamas� yap�lmaktad�r. Kontrol i�lemlerinde s�kl�kla kullan�lmaktad�r. 
	int kodu;
	int secim3;
	fo=fopen("urun.txt","r");
	fg=fopen("gecici.txt","w+");
	printf("Dikkat bu islem asla geri alinamaz!!!\nSilmek istediginiz urunun kodunu giriniz:");
	scanf("%d", &kodu);

		while(fscanf(fo, "%d %s %s %f %f %d", &urun.kodu, &urun.adi, &urun.cinsi, &urun.alis, &urun.satis, &urun.durum)!= EOF)
		{

		if (kodu==urun.kodu && urun.durum==1)
			{
				kayit=true;
				fprintf(fg, "\n%d %s %s %f %f 0", urun.kodu, urun.adi, urun.cinsi, urun.alis, urun.satis);
                system("cls");
				printf("Kayit basariyla silindi.");
                printf("\n Baska ne yapmak istersiniz?\n\n");
                printf("1-Yeni Silme Islemi \n");
                printf("2-Ana Menu\n");

                printf ("\n * * * * * * * * * * * * * * * *\n");
                scanf("%d", &secim3);
                if (secim3 == 1)
                {
                    system("cls");
                    urun_silme();
                }
                if (secim3 == 2)
                {
                    system("cls");
                    int main();
                }
			}
		else
			{
				fprintf(fg, "\n%d %s %s %f %f %d", urun.kodu, urun.adi, urun.cinsi, urun.alis, urun.satis, urun.durum);
			}

		}
	if(kayit==false)
		{
            system("cls");
			printf("Boyle bir urun yok!\n");
            printf("\n Baska ne yapmak istersiniz?\n\n");
            printf("1-Yeni Silme Islemi \n");
            printf("2-Ana Menu\n");

            printf ("\n * * * * * * * * * * * * * * * *\n");
            scanf("%d", &secim3);
            if (secim3 == 1)
            {
                system("cls");
                urun_silme();
            }
            if (secim3 == 2)
            {
                system("cls");
                int main();
            }

		}
	fclose(fo);
	fclose(fg);
	remove("urun.txt");
	rename("gecici.txt","urun.txt");
}

void urun_listeleme()
{
    int secim4;
	fo=fopen("urun.txt","r");

		while(!feof(fo)) // Bu ifade dosyan�n sonuna gelinip gelinmedi�ini kontrol eder. Geldi�inde durur.
		{
	    	fscanf(fo,"%d %s %s %f %f %d", &urun.kodu, urun.adi, urun.cinsi, &urun.alis, &urun.satis, &urun.durum);
	    	if(urun.durum!=0)
			{
				printf("\nListelenen Urunler\n");
                printf ("\n * * * * * * * * * * * * * * * *\n");
	    	    printf("\n KODU: %d ADI: %s CINSI: %s ALIS: %.2f SATIS: %.2f", urun.kodu, urun.adi, urun.cinsi, urun.alis, urun.satis);
			}
		}
	fclose(fo);
    printf ("\n * * * * * * * * * * * * * * * *\n");
    printf("\n\n Baska ne yapmak istersiniz?\n\n");
    printf("1-Ana Menu\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    scanf("%d", &secim4);
    if (secim4 == 1)
    {
        system("cls");
        int main();
    }

}


void urun_sorgulama()
{

    int kodu;
    int secim5;
    fo=fopen("urun.txt","r");

    printf("Sorgulanacak olan urunun kodunu girin:");
    scanf("%d",&kodu);

    while(fscanf(fo,"%d %s %s %f %f %d", &urun.kodu, &urun.adi, &urun.cinsi, &urun.alis, &urun.satis, &urun.durum)!=EOF)
    {
        if(urun.kodu==kodu && urun.durum==1)
        {
            printf("Urun basariyla eslesti.\n%s %s %.2f %.2f\n", urun.adi, urun.cinsi, urun.alis, urun.satis);
            break;
        }
        else
            printf("Urun bulunamadi.Bekleyiniz...\n\n");

    }
    printf("Sorgulama islemi sona erdi.\n");
    printf("\n\n Baska ne yapmak istersiniz?\n\n");
    printf("1-Ana Menu\n");
    printf("2-Yeniden Sorgulama\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    scanf("%d", &secim5);
    if (secim5 == 1)
    {
        system("cls");
        int main();
    }
    if (secim5 == 2)
    {
        system("cls");
        urun_sorgulama();
    }


}


void satis()
{
	int kodu;
	int adet;
	float tutar;
	char devam = 'E';


	while(devam!='H')
	{
		fo=fopen("urun.txt","r");

		printf("Urunun kodunu girin:");
		scanf("%d",&kodu);

			while(fscanf(fo,"%d %s %s %f %f %d", &urun.kodu, &urun.adi, &urun.cinsi, &urun.alis, &urun.satis, &urun.durum)!=EOF)
			{
				if(urun.kodu==kodu && urun.durum==1)
				{
					printf("Adet girin :");
					scanf("%d", &adet);
					tutar+=urun.satis*adet; //tutar hesaplamas�n�n tan�m�
					printf("Tutar = %.2f dir\n", tutar);
				}
				else
					printf("Urun bulunamadi.Bekleyiniz...\n");
			}
		printf("Devam etmek isiyor musunuz (E/H) :");
		scanf("%s", &devam);
		system("cls");

	}

	printf("Odemeniz gereken toplam tutar %.2f dir.", tutar);

}

void musteri_ekleme()
{
	int secim6;
    fp = fopen("musteri.txt","a"); // "a": Bir metin dosyas�n� ekleme yapmak i�in a�ar. Dosya yok ise olu�turulur.

	printf("Hesap No:");
	scanf("%d",&islem1.hesap);

	printf("Musteri Adi:");
	scanf("%s",&islem1.adi);

	printf("Musteri Soyadi:");
	scanf("%s",&islem1.soyadi);

	printf("Adresi:");
	scanf("%s",&islem1.adres);

	printf("Mail:");
	scanf("%s",&islem1.mail);

	printf("Telefon:");
	scanf("%11d",&islem1.telefon);

	fprintf(fp, "\n %d %s %s %s %s %11d 1", islem1.hesap, islem1.adi, islem1.soyadi, islem1.adres, islem1.mail, islem1.telefon);

	fclose(fp);

    system("cls");
    printf ("\n * * * * * * * * * * * * * * * *\n");
    printf("\n Kayit basariyla olusturuldu.\n Baska ne yapmak istersiniz?\n\n");
    printf("1-Yeni Kayit \n");
    printf("2-Ana Menu\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    scanf("%d", &secim6);
    if (secim6 == 1)
    {
        system("cls");
        musteri_ekleme();
    }
    if (secim6 == 2)
    {
        system("cls");
        int main();
    }

}

//Bu k�s�mda m��terilerimizin bakiyelerini de d�zenleyebildi�imiz bir yap� olu�turmak istedik. Ancak ald���m�z k���k bir hatay� ��zemedi�imiz i�in yorum sat�r� olarak b�rakmak istedik.

/*void musteri_guncelleme()
{
	int hesap;
	int kosul = 1;
	int musteri_varmi=0;
	float tutar;

	fp = fopen("musteri.txt","r");

	printf("Guncellenecek Musteri Hesap Numarasi Girin:");
	scanf("%d", &hesap);

	while(fscanf(fp, "%d %s %s %f %f %f %s %d", &islem1.hesap, &islem1.adi, &islem1.soyadi, &islem1.bakiye, &islem1.odeme, &islem1.guncel, &islem1.tarih, &islem1.durum) != EOF);
	{
		if(islem1.hesap=hesap && islem1.durum==1)
		{
			printf("Musteri kaydi basariyla bulundu.\n");
			musteri_varmi = 1;

		}
		else
		printf ("Musteri kaydi bulunamadi, lutfen bekleyin...\n");
	}
		printf ("Arama islemi sona erdi. \n");

	fclose(fp);
	fp = fopen("musteri.txt", "r");
	fp1 = fopen("gecici_musteri.txt", "a");

	if(musteri_varmi==1)
	{
	printf("Guncel borcunuz %.2f dir.\n", islem1.guncel);
	printf("Odeme tutarini giriniz:");
	scanf("%f",&tutar);
	islem1.guncel = islem1.guncel - tutar;
	printf("Kalan borcunuz %.2f dir\n", islem1.guncel);
	printf("Tarih (gg/aa/yyyy) :");
	scanf("%s",islem1.tarih);
	gec1.hesap = islem1.hesap;
	gec1.bakiye = islem1.bakiye;
	gec1.odeme = islem1.odeme;
	gec1.guncel = islem1.guncel;
	fprintf(fp1, "\n %d %s %s %f %f %f %s 1", gec1.hesap, islem1.adi, islem1.soyadi, gec1.bakiye, gec1.odeme, gec1.guncel, gec1.tarih);
	}
}*/

void musteri_sorgulama()
{
    int secim7;
	int hesap;
	fp = fopen("musteri.txt", "r");
	printf("Sorgulanacak Musterinin Hesap Numarasini Giriniz:");
	scanf("%d",&hesap);

	while(fscanf(fp, "%d %s %s %s %s %11d %d", &islem1.hesap, &islem1.adi, &islem1.soyadi, &islem1.adres, &islem1.mail, &islem1.telefon, &islem1.durum) != EOF);
	{
		if(islem1.hesap == hesap && islem1.durum == 1)
		{
			printf("Musteri Basariyla Eslesti\n%d %s %s %s %s %11d  ", islem1.hesap, islem1.adi, islem1.soyadi, islem1.adres, islem1.mail, islem1.telefon);

		}
		else
		printf("\nMusteri Bulunamadi\n");
	}
	printf("\nSorgulama islemi sona erdi.\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    printf("\n Baska ne yapmak istersiniz?\n\n");
    printf("1-Yeni Sorgulama \n");
    printf("2-Ana Menu\n");

    printf ("\n * * * * * * * * * * * * * * * *\n");
    scanf("%d", &secim7);
    if (secim7 == 1)
    {
        system("cls");
        musteri_sorgulama();
    }
    if (secim7 == 2)
    {
        system("cls");
        int main();
    }
}

void musteri_silme ()
{
	bool musteri = false;
    int hesap;
    int secim8;
	int yanit;
	fp = fopen("musteri.txt", "r");
	fp1 = fopen("gecici_musteri.txt", "w+"); //silme i�leminde arac� olmas� i�in.
	printf("Dikkat! Bu islem geri alinamaz! \n Ana menuye donmek icin icin -> 0 \n Isleme devam etmek icin -> 1 tuslayiniz:");
	scanf("%d", &yanit);
	system("cls");
	//if (yanit == 0) gerek var m�?

	if (yanit == 1)
	{
		printf("Silmek istediginiz m�sterinin hesap numarasini giriniz:");
		scanf("%d", &hesap);
		while(fscanf(fp, "%d %s %s %s %s %11d %d", &islem1.hesap, &islem1.adi, &islem1.soyadi, &islem1.adres, &islem1.mail, &islem1.telefon, &islem1.durum) != EOF);
		{
			if (hesap == islem1.hesap && islem1.durum == 1)
			{
				musteri = true;
				fprintf(fp, "\n %d %s %s %s %s %11d 0", islem1.hesap, islem1.adi, islem1.soyadi, islem1.adres, islem1.mail, islem1.telefon);
				printf("Musteri basariyla silindi.\n");
                printf("\n Baska ne yapmak istersiniz?\n\n");
                printf("1-Yeni Silme Islemi \n");
                printf("2-Ana Menu\n");

                printf ("\n * * * * * * * * * * * * * * * *\n");
                scanf("%d", &secim8);
                if (secim8 == 1)
                {
                    system("cls");
                    musteri_silme();
                }
                if (secim8 == 2)
                {
                    system("cls");
                    int main();
                }
			}
			else
			{
				fprintf(fp, "\n %d %s %s %s %s %11d %d", islem1.hesap, islem1.adi, islem1.soyadi, islem1.adres, islem1.mail, islem1.telefon, islem1.durum);
			}
		}
		if (musteri == false)
		{

		    printf("Boyle bir musteri kaydi bulunamadi.\n");
            printf("\n Baska ne yapmak istersiniz?\n\n");
            printf("1-Yeni Silme Islemi \n");
            printf("2-Ana Menu\n");

            printf ("\n * * * * * * * * * * * * * * * *\n");
            scanf("%d", &secim8);
            if (secim8 == 1)
            {
                system("cls");
                musteri_silme();
            }
            if (secim8 == 2)
            {
                system("cls");
                int main();
            }

		}


	}
	fclose(fp);
	fclose(fp1);
	remove("musteri.txt");
	rename("gecici_musteri.txt", "musteri.txt");
}


void musteri_listeleme()
{
	fp=fopen("musteri.txt","r");

		while(!feof(fo)) // bu dosyan�n sonuna gelinip gelinmedi�ini kontrol eder. geldi�inde durur.
		{
	    	fscanf(fo,"%d %s %s %s %s %11d %d", &islem1.hesap, islem1.adi, islem1.soyadi, &islem1.adres, &islem1.mail, &islem1.telefon, &islem1.durum);
	    	if(islem1.durum!=0)
			{
				printf("\n%d %s %s %s %s %11d", islem1.hesap, islem1.adi, islem1.soyadi, islem1.adres, islem1.mail, islem1.telefon);
			}
		}
	fclose(fp);
}








int main ()
{


int secim;
int i,n;
char ch;
 while (1)
 {
 	printf("\n\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2MARKET MUSTERI VE URUN TAKIP OTOMASYONUNA HOS GELDINIZ\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
 	printf ("\n * * * * * * * * * * * * * * * *");
 	printf ("\n Ana Menu\n");
 	printf ("1- Urun kaydi \n");
 	printf ("2- Urun guncelleme\n");
 	printf ("3- Urun silme\n");
 	printf ("4- Urun listesi alma\n");
 	printf ("5- Urun sorgulama\n");
 	printf("6- Satis islemleri\n");
 	printf("7- Musteri Odeme(Fatura) Kayitlari\n");
 	printf("8- Musteri Ekleme\n");
 	printf("9- Musteri Sorgulama\n");
 	printf("10- Musteri Silme\n");
 	printf("11-Musteri Listeleme\n");
 	printf ("0- Cikis\n");
 	printf (" * * * * * * * * * * * * * * * * \n");
 	printf ("Yapmak istediginiz islemi tuslayiniz:\n");
 	scanf("%d", &secim);

 
 	if (secim == 1)
 	{
 	urun_kayit();	
	}
 	
 	if (secim == 2)
 	{
 	urun_guncelleme();
	}
 	
 	if (secim == 3)
 	{
    urun_silme();	
	}
 	
 	if (secim == 4)
 	{
 	urun_listeleme();
	}
 	
 	if (secim == 5)
 	{
 	urun_sorgulama();
	}
 	
 	if (secim == 6)
 	{
 	satis();
	}
	
	if (secim==7)
	{
        system("cls");
	  printf("\n\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2MUSTERI ODEME TAKIP SISTEMI\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
	  printf("===============================\n");
	  printf("\n1:Yeni Musteri Hesabi ekleme\n");
	  printf("\n2:Musteri hesabi sorgulama \n");
	  printf("\n3:exit\n");
	  printf("\n================================\n");
	  do{
	       printf("\nYapmak istediginiz islemi seciniz?");
	       ch=getche(); // getche() Fonksiyonu klavyeden girilen tek bir karakteri okur
	  }while(ch<='0' || ch>'3');
	  switch(ch){
		case '1':

			printf("\nGirilecek hesap sayisi:");
			scanf("%d",&n);
			for(i=0;i<n;i++){
				input(); 										// �NPUT BURDA �A�RILMI�
				if(musteri.odeme>0)
					musteri.hesapdurumu=(musteri.odeme<musteri.toplamtutar)? 'B': 'D';// C Dilinde "?" operat�r�nden sonra gelen i�lemlerde e�er ko�ul do�ruysa soldakini do�ru de�ilse sa�daki i�lemi yapar
				else
					musteri.hesapdurumu=(musteri.kalantutar>0) ? 'B' : 'D';
				musteri.kalantutar=musteri.toplamtutar - musteri.odeme; //m��terilerin bor� durumunu hesaplayan k�s�m
				writefile();									// WR�TEF�LE BURDA �A�RILMI�
			}
			main();
		case '2':

			printf("Arama yontemi seciniz\n");
			printf("\n1 --- Musteri numarasi ile arama\n");
			printf("2 --- Musteri adi ile arama\n");
			search();											// SEARCH BURADA �A�RILMI�
			ch=getche();
			main();
			system("cls");
	  }

	}

		if(secim==8)
	{
		 musteri_ekleme();	
	}
	
	if (secim==9)
	{
		musteri_sorgulama();	
	}
	
		if (secim==10)
	{
		musteri_silme();	
	}
	
		if (secim==11)
	{
		musteri_listeleme();	
	}
 	
 	if (secim == 0)
 	break;
 	
 	}

return 0;

}

//Windows i�letim sistemi i�erisinde kullan�lan bir dosya uzant�s�d�r. �Data� yani �Veri� kelimesinin k�salt�lm���d�r ve i�erisinde genellikle yaz�l�mlara dair veri kodlar�n� i�erirler.
//Bir�ok program DAT dosyalar�n� olu�turur, a�ar ve referans al�r. Sadece uygulama taraf�ndan kullan�lmak �zere tasarlanm�� ve kullan�c� taraf�ndan manuel olarak a��lmaz.
	 void input()
	{
	  FILE *fp=fopen("dosya.dat","rb"); // Binary dosyalar�nda rb modu mevcut dosyay� hem okuma hem de yazma i�in a�ar. Dosya mevcut de�ilse geriye NULL de�eri d�nderir.
	  fseek (fp,0,SEEK_END); // fseek fonksiyonu dosyaya yazma ve dosyadan okuma i�leminden �nce istenilen kayda ula�mak i�in kullan�l�r. SEEK_END Ba�lang�� noktas�n�n dosyan�n sonu oldu�u anlam�na gelir.
	  tl=ftell(fp);
	  sl=sizeof(musteri); //unary operat�r t�r�d�r. �n�ne yazd�ld��� oprand�n bellekte kaplad��� alan�n byte cinsinden miktar�n� �retir.
	  ts=tl/sl;
	  fseek(fp,(ts-1)*sl,SEEK_SET); // Ba�lang�� noktas�n�n dosyan�n ba�� oldu�u anlam�na gelir.
	  fread(&musteri,sizeof(musteri),1,fp); 
//Her biri size parametre de�eri kadar bayt boyutunda olan count parametre de�eri kadar eleman� stream parametresi ile g�sterilen ak��tan okur ve bunlar� ptr parametresi ile g�sterilen belle�e y�kler.
//Ak���n konum g�stergesi, okunan toplam bayt miktar� kadar (size * count) ile ileri al�n�r.
	 
	  printf("\n                Musteri no:%d\n",++musteri.sayi);
	  fclose(fp);
	  printf("\n               Musteri adi:");
	  scanf("%s",musteri.ad);
	  printf("                        Sube:");
	  scanf("%s",musteri.subeAdi);
	  printf("              Odenecek tutar:");
	  scanf("%f",&musteri.toplamtutar);
	  printf("               Odeme Miktari:");
	  scanf("%f",&musteri.odeme);
	  printf("    Odeme Tarihi(mm/dd/yyyy):");
	  scanf("%d/%d/%d",&musteri.odemetarihi.ay,&musteri.odemetarihi.gun,&musteri.odemetarihi.yil);
	  return;
   }

   void writefile()
   {
	  FILE *fp;
	  fp=fopen("dosya.dat","ab");
	  fwrite(&musteri,sizeof(musteri),1,fp);   
	  fclose(fp);
	  return;
   }

   void search()
   {
	 char ch;
	 char nam[100];
	 int n,i,m=1;
	 FILE *fp;
	 fp=fopen("dosya.dat","rb");
	 do{
		printf("\nseciminizi giriniz:");
		ch=getche();
	 }while(ch!='1' && ch!='2');
	 switch(ch){
	      case '1':
		    fseek(fp,0 /* Ba�lang�� noktas�n�n dosyan�n ba�� oldu�u anlam�na gelir. */,SEEK_END); // SEEK_END Ba�lang�� noktas�n�n dosyan�n sonu oldu�u anlam�na gelir
		    tl=ftell(fp);
		    sl=sizeof(musteri);
		    ts=tl/sl;
		    do{
			printf("\nmusteri numarinizi giriniz:");
			scanf("%d",&n);
			if(n<=0 || n>ts)
			printf("\nyanlis musteri numarasi\n");
			else{
			    fseek(fp,(n-1)*sl,SEEK_SET);
			    fread(&musteri,sl,1,fp);
			    output();
			}
			printf("\n\nyeniden denemek ister misiniz?(e/h)");
			ch=getche();
		    }while(ch=='e');
		    fclose(fp);
		    break;
	      case '2':
		    fseek(fp,0,SEEK_END);
		    tl=ftell(fp);
		    sl=sizeof(musteri);
		    ts=tl/sl;
		    fseek(fp,(ts-1)*sl,SEEK_SET);
		    fread(&musteri,sizeof(musteri),1,fp);
		    n=musteri.sayi;

		  do{
			printf("\nMusteri adi giriniz:");
			scanf("%s",nam);
			fseek(fp,0,SEEK_SET);
			for(i=1;i<=n;i++)
			{
			     fread(&musteri,sizeof(musteri),1,fp);
			     if(strcmp(musteri.ad,nam)==0) ////strcmp: Str1 parametresi ile g�sterilen karakter dizisini str2 parametresi ile g�sterilen karakter dizisi ile kar��la�t�r�r. E�er her iki karakter dizisindeki t�m karakterler ayn� ise s�f�r de�eri, aksi takdirde s�f�rdan farkl� bir de�er geri d�nd�r�r.
//Fonksiyon str1 ve str2 parametreleri ile g�sterilen karakter dizilerini ilk karakterden itibaren kar��la�t�rmaya ba�lar. Birbirlerine e�itse, karakterler farkl� olana veya karakter dizisinin sonunu g�steren bo� bir karakterle kar��la�ana kadar kar��la�t�rma i�lemine devam eder.
//E�er str1 ve str2 parametreleri bo� karakter ile sonland�r�lm�� karakter dizilerini g�steren bir i�aret�i de�ilse, anlams�z bir sonu� elde edilir.
			     {
				output();
				m=0;
				break;
			     }
			}
			if(m!=0)
			printf("\n\nMusteri adi bulunamadi.\n");
			printf("\nYeniden denemek ister misiniz?(e/h)");
			ch=getche();
		    }while(ch=='e');
		    fclose(fp);
	      }
	      return;
	 }



   void output()
	 {
	   printf("\n\n    Musteri no:                            :%d\n",musteri.sayi);
	   printf("    Musteri Adi                            :%s\n",musteri.ad);
	   printf("    sube adi                               :%s\n",musteri.subeAdi);
	   printf("    Odenmesi gereken tutar                 :%.2f\n",musteri.toplamtutar);
	   printf("    Odeme Miktari                          :%.2f\n",musteri.odeme);
	   printf("    Kalan tutar                            :%.2f\n",musteri.kalantutar);
	   printf("    Odenen tarih                           :%d/%d/%d\n\n",musteri.odemetarihi.ay,musteri.odemetarihi.gun,musteri.odemetarihi.yil);
   	   switch(musteri.hesapdurumu)
	      {
	      case 'B':
		  printf("\t Hesap Durumu: BORCLU \n\n");
		  printf("\t Borc miktari: %.2f",musteri.kalantutar);
		 break;
	      case 'D':
		  printf("\t Hesap Durumu: BORC BULUNMAMAKTADIR \n\n");
		 break;
	      default:
		  printf("HATA\\n\n");
	      }
return;
	   }
