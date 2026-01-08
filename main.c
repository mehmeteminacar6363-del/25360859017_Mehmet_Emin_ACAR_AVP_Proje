#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void temizleme(){
    int cache;
    while((cache=getchar())!='\n'&& cache!=EOF);
}
int guvenli_al(){
    int sayi,sonuc;
    sonuc=scanf("%d",&sayi);
    if(sonuc!=1){
        temizleme();
        return -99;
    }
    return sayi;

}


void Serbest_dusme_deneyi(double *g_ptr,char **isim_ptr){
    double t,h; // süre(t),yükseklik(h)
    int i;

    printf("\n--- Serbest dusme deneyi ---\n");
    printf("Cismin dusme suresini (saniye) giriniz: ");
    scanf("%lf",&t);

    // negatif değer kontrolü
    // ternary operatoru ile
    t=(t<0)? -t:t ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",t);
    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        h=0.5*g*t*t;

        // Çıktı (birimi metredir)
        printf("%-10s gezegeninde cismin dusme mesafesi: %.2f metre\n",isim,h);

    }

    printf("---------------------------------------------------\n");


}


void Yukari_atis_deneyi(double *g_ptr,char **isim_ptr){
    double v,h_max;
    int i;
    printf("\n--- Yukari atis deneyi ---\n");
    printf("Cismin firlatilma hizini (metre/saniye) giriniz: ");
    scanf("%lf",&v);

    // negatif değer kontrolü
    // ternary operatoru ile
    v=(v<0)? -v:v ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",v);
    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        h_max=(v*v)/(2*g);

        // Çıktı (birimi metredir)
        printf("%-10s gezegeninde cismin maksimum cikabilecegi mesafe: %.2f metre\n",isim,h_max);


}



}

void Agirlik_deneyi(double *g_ptr,char **isim_ptr){
    double m,G;
    int i;
    printf("\n--- agirlik deneyi ---\n");
    printf("Cismin kutlesini giriniz (kilogram) giriniz: ");
    scanf("%lf",&m);

    // negatif değer kontrolü
    // ternary operatoru ile
    m=(m<0)? -m:m ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",m);
    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        G=m*g;

        // Çıktı (birimi Newton)
        printf("%-10s gezegeninde cismin agirligi : %.2f Newton\n",isim,G);


}



}

void Kutlecekimsel_potansiyel_enerji_deneyi(double *g_ptr,char **isim_ptr){
    double m,h,E_p;//m:kutle, h:yükseklik, E_p:potansiyel enerji
    int i;
    printf("\n--- Kütleçekimsel Potansiyel Enerji Deneyi ---\n");
    printf("Cismin kutlesini (kilogram) giriniz: ");
    scanf("%lf",&m);

    // negatif değer kontrolü
    // ternary operatoru ile
     m=(m<0)? -m:m ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",m);

    printf("Cismin yuksekligini (metre) giriniz: ");
    scanf("%lf",&h);

    // negatif değer kontrolü
    // ternary operatoru ile

     h=(h<0)? -h:h ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",h);
    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        E_p=m*g*h;

        // Çıktı (birimi Joule)
        printf("%-10s gezegeninde cismin Kütleçekimsel Potansiyel Enerjisi: %.2f Joule\n",isim,E_p);

}

}


void Hidrostatik_basinc_deneyi(double *g_ptr,char **isim_ptr){
    double p,h,P; //p: birim hacimdeki kütlesi, h: derinlik, P: hidrostatik basınç
    int i;
    printf("\n--- hidrostatik basinc deneyi ---\n");
    printf("Cismin birim hacimdeki kutlesini giriniz (kilogram/metrekup) giriniz: ");
    scanf("%lf",&p);

    // negatif değer kontrolü
    // ternary operatoru ile
     p=(p<0)? -p:p ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",p);


    printf("Cismin yuksekligini (metre) giriniz: ");
    scanf("%lf",&h);

    // negatif değer kontrolü
    // ternary operatoru ile
     h=(h<0)? -h:h ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",h);
    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        P=p*g*h;

        // Çıktı (birimi Pascal)
        printf("%-10s gezegeninde cismin hidrostatik basinci: %.2f Pascal\n",isim,P);


}

}


void Arsimet_kaldirma_kuvveti_deneyi(double *g_ptr,char **isim_ptr){
    double p,v,F_k; //p: birim hacimdeki kütlesi, v:batan hacim , F_k: suyun cisme uyguladığı kaldırma kuvveti
    int i;
    printf("\n--- Arsimet kaldirma kuvveti deneyi ---\n");
    printf("Cismin birim hacimdeki kutlesini giriniz (kilogram/metrekup) giriniz: ");
    scanf("%lf",&p);

    // negatif değer kontrolü
    // ternary operatoru ile
     p=(p<0)? -p:p ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",p);


    printf("Cismin batan hacmini (metrekup) giriniz: ");
    scanf("%lf",&v);

    // negatif değer kontrolü
    // ternary operatoru ile
     v=(v<0)? -v:v ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",v);
    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        F_k=p*g*v;

        // Çıktı (birimi Newton)
        printf("%-10s gezegeninde cisme etki eden kaldirma kuvveti: %.2f Newton\n",isim,F_k);


}

}


void Basit_sarkac_periyodu_deneyi(double *g_ptr,char **isim_ptr){
    double l,T; //l:sarkaç uzunluğu, T:periyot
    int i;
    printf("\n--- Basit sarkac periyodu deneyi ---\n");
    printf("Cismin bagli oldugu sarkacin uzunlugunu (metre) giriniz: ");
    scanf("%lf",&l);

    // negatif değer kontrolü
    // ternary operatoru ile
     l=(l<0)? -l:l ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",l);

    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        T=2*M_PI*sqrt(l/g);

        // Çıktı (birimi saniye)
        printf("%-10s gezegeninde cismin periyot suresi %.2f saniye\n",isim,T);


}

}


void Sabit_ip_gerilmesi_deneyi(double *g_ptr,char **isim_ptr){
    double m,T; //m:kütle, T:gerilme kuvveti
    int i;
    printf("\n--- Sabit ip gerilmesi deneyi ---\n");
    printf("Cismin kutlesini giriniz (kilogram) giriniz: ");
    scanf("%lf",&m);

    // negatif değer kontrolü
    // ternary operatoru ile
     m=(m<0)? -m:m ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",m);

    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülümüz
        T=m*g;

        // Çıktı (birimi Newton)
        printf("%-10s gezegeninde cismin asili oldugu ipteki gerilme kuvveti: %.2f Newton\n",isim,T);


}

}


void Asansor_deneyi(double *g_ptr,char **isim_ptr){
    double m,a,N=0.0; //m:kütle, a:ivme, N:etkin ağırlık
    int i;
    int durum; //asansörün hareket durumu seçimi
    printf("\n--- Asansor deneyi ---\n");
    printf("Cismin kutlesini (kilogram) giriniz: ");
    scanf("%lf",&m);

    // negatif değer kontrolü
    // ternary operatoru ile
     m=(m<0)? -m:m ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",m);


    printf("Asansorun ivmesini (metre/saniyekare) giriniz: ");
    scanf("%lf",&a);

    // negatif değer kontrolü
    // ternary operatoru ile
     a=(a<0)? -a:a ;
    printf("Girdiginiz deger %lf olarak alinmistir\n",a);

    //3. durum asansörün durumunu seçmek ona göre formüller değişecek
    printf("\nAsansorun hareket durumunu seciniz:\n");
    printf("1. Yukari yonlu hizlanma veya asagi yonlu yavaslama (agirlik artar)\n");
    printf("2. asagi yonlu hizlanma veya yukari yonlu yavaslama (agirlik azalir)\n");

    printf("seciminiz:");
    scanf("%d",&durum);
    getchar();



    printf("Sonuclar:\n");
    printf("-------------------------------------\n");

    // tüm gezegenler için hesaplama döngüsü
    for(i=0;i<8;i++){
        // kural:dizi elemanlarına pointer aritmetiği ile ulaşmak zorundayız
        double g=*(g_ptr+i);

        // Gezegen isimlerine erişecek pointerin pointerı
        char *isim=*(isim_ptr+i);

        //formülüm seçme seçilen duruma göre hangi formülün kullanılacağını ayarlayacağız
        if(durum==1){
            N=m*(g+a);
        }
        else if(durum==2){
            N=m*(g-a);
        }


        // Çıktı (birimi Newtondur)
        printf("%-10s gezegeninde hissedilen agirlik: %.2f Newton\n",isim,N);


}
    printf("---------------------------------------------\n");

}





int main(){
    char bilim_insaninin_ismi[101];//burda bilim insaninin ismini en fazla 100 harfli şekilde kısıtladim
    double g=9.81;
    int secim;
    double yercekimi[8]={3.7,
    8.87,
    9.80,
    3.71,
    24.79,
    10.44,
    8.69,
    11.15};

    char *gezegen_isimleri[8]={
        "Merkur",
        "Venus",
        "Dunya",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptun"
    };

    printf("Uzay simulasyon programina hos geldiniz\n");
    printf("Lutfen isminizi giriniz: ");

    //bilim insanının ismini bir karakter dizisi yardımıyla aldım
    fgets(bilim_insaninin_ismi,101,stdin);
    bilim_insaninin_ismi[strcspn(bilim_insaninin_ismi,"\n")]=0;

    printf("sayin %s sisteme hos geldiniz.\n",bilim_insaninin_ismi);



    do{
        printf("\n\n\n");
        printf("Lutfen yapmak istediginiz deneyi seciniz:\n");
        printf("---------------------------------------------\n");
        printf("1. Serbest dusme deneyi\n");
        printf("2. Yukari atis deneyi\n");
        printf("3. Agirlik deneyi\n");
        printf("4. Kutlecekimsel potansiyel enerji deneyi\n");
        printf("5. hidrostatik basinc deneyi\n");
        printf("6. Arsimet kaldirma kuvveti deneyi\n");
        printf("7. Basit sarkac periyodu deneyi\n");
        printf("8. Sabit ip gerilmesi deneyi\n");
        printf("9. Asansor deneyi\n");
        printf("----------------------------------------------\n");
        printf("-1. Cikis\n");
        printf("----------------------------------------------\n");
        printf("Seciminiz: ");

        secim = guvenli_al();




        // kullanıcının seçimine gore yapılacak işlemler
        switch(secim){
            case 1:
                printf("\n---- Serbest dusme deneyi baslatiliyor---\n");
                Serbest_dusme_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 2:
                printf("\n---Yukari atis deneyi baslatiliyor---\n");
                Yukari_atis_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 3:
                printf("\n---Agirlik deneyi baslatiliyor---\n");
                Agirlik_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 4:
                printf("\n---Kutlecekimsel potansiyel enerji deneyi baslatiliyor---\n");
                Kutlecekimsel_potansiyel_enerji_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 5:
                printf("\n---hidrostatik basinc deneyi baslatiliyor---\n");
                Hidrostatik_basinc_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 6:
                printf("\n---Arsimet kaldirma kuvveti deneyi baslatiliyor---\n");
                Arsimet_kaldirma_kuvveti_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 7:
                printf("\n---Basit sarkac periyodu deneyi baslatiliyor---\n");
                Basit_sarkac_periyodu_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 8:
                printf("\n---Sabit ip gerilmesi deneyi baslatiliyor---\n");
                Sabit_ip_gerilmesi_deneyi(yercekimi,gezegen_isimleri);

                break;
            case 9:
                printf("\n---Asansor deneyi baslatiliyor---\n");
                Asansor_deneyi(yercekimi,gezegen_isimleri);

                break;
            case -1:
                printf("\n---similasyondan cikis yapiliyor ---\n");


                break;
            case -99:
                printf("Hatalı tuslama lutfen sayi giriniz\n");

                break;

            default:
                printf("\n Hatali tuslama lutfen menudeki numaralardan birini seciniz\n");

         }


      }

    while(secim!=-1); //-1 girilmediği sürece döngü devam eder



    return 0;
                 }
