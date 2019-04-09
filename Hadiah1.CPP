 #include <iostream.h>
 #include <conio.h>
 main (){
 char nama [25], jur [20];
 int b,c,d,e,f,g,h,totalnt,totalt,nkehadiran,nmid,nquiz,nfinal,Na;

 cout<<"Hitung nilai akhir" <<endl;
 cout<<"masukkan nama mahasiswa : "; cin >> nama;
 cout<<"masukkan jurusan mahasiswa : "; cin >> jur;
 cout<<"nilai kehadiran : "; cin >> b;
 cout<<"nilai tugas 1 : "; cin >> c;
 cout<<"nilai tugas 2 : "; cin >> d;
 cout<<"nilai tugas 3 : "; cin >> e;
 cout<<"nilai mid : "; cin >> f;
 cout<<"nilai quiz : "; cin >> g;
 cout<<"nilai final : "; cin >> h;
 	totalnt = (c+d+e) / 3;
   totalt  = totalnt * 20/100;
   nkehadiran = b * 20/100;
 	nmid = f * 20/100;
   nquiz = g * 20/100;
   nfinal = h * 20/100;
   Na = totalt + nkehadiran + nmid + nquiz + nfinal;
   cout << "\n Nama Mahasiswa = " << nama ;
   cout << "\n jurusan mahasiswa = " << jur ;
   cout << "\n memperoleh nilai akhir = " << Na;
   getch ();
   }
