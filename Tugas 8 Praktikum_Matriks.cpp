#include <iostream>

using namespace std;

int main(){
  int i, j, m, n,r,p, matriks[10][10],matriks2 [10][10],C [10][10], transpose[10][10];
  cout << " =================================\n";
  cout << "    PROGRAM MENGHITUNG MATRIKS"<<endl;
  cout << " =================================\n";
  cout << " NAMA  : JOUVANYTHA ASWAR AFENDY " << endl;
  cout << " KELAS : 1C INFORMATIKA"<<endl;
  cout << " NPM   : 2210631170024"<<endl;
  cout << "==================================\n";
  cout << "      Masukkan Ordo Matriks"<<endl;
  cout << "----------------------------------\n";
  cout << "Masukkan jumlah baris matriks : ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks : ";
  cin >> n;

  cout << "--------------------------------\n";
  cout << "Masukkan elemen matriks A :\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    cout << " elemen ["<< i+1 <<"," << j+1 <<"]: ";
      cin >> matriks[i][j];
    }
  }for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  cout << " \n";
  cout << "HASIL TRANPOSE MATRIKS = \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "--------------------------------\n";
  cout << "Masukkan elemen matriks B :\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    cout << " elemen ["<< i+1 << "," << j+1 <<"]: ";
      cin >> matriks2[i][j];
    }
  }

  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks2[i][j];
    }
  }
  cout << " \n";
  cout << "HASIL TRANPOSE MATRIKS = \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
  {
cout<<"--------------------------------------------"<<endl;
cout<<" Pilih 1 = Penjumlahan \n Pilih 2 = Perkalian \n Pilihan Anda : ";cin>>p;
cout<<"--------------------------------------------"<<endl;
}
{


if(p==1)
   {
   for (i=0;i<m;i++) for(j=0;j<n;j++)
   C[i][j]=matriks[i][j]+matriks2[i][j];
   cout << "MATRIKS HASIL PENJUMLAHAN = \n";
   for (i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   cout << C[i][j] <<" ";
   cout << endl;
   }

}

if(p==2)
   {
   cout << "MATRIKS : \n";
   cout << "Matriks A        Matriks B" <<endl;
   for (i=0;i<m;i++)
    {
      for (j=0;j<n;j++)
      {
        cout << matriks[i][j] <<"    ";
      }
    if (i==0)
    {
       cout << "x";
       cout << "    ";
       for (j=0;j<m;j++)
       {
         cout << matriks2[i][j]<<"    ";
       }
    }
    if (i>0)
    {
        cout <<"    ";
        for (j=0;j<m;j++)
        cout <<" "<<matriks2[i][j] <<"   ";
    }
    cout << endl;
    }
   C[i+1][j+1]=0;
   for (i=0;i<m;i++)
   {
     for (j=0;j<n;j++)
     {
    C[i+1][j+1]=0;
    for (r=0;r<n;r++)
       {
       C[i+1][j+1]=C[i+1][j+1]+matriks[i][r]*matriks2[r][j];
       }
     }
   }
   cout << "\n" << "MATRIKS HASIL PERKALIAN = \n";
   for (i=0;i<m;i++)
   {
     for (j=0;j<n;j++)
     {
       cout << C[i+1][j+1] <<"     ";
     }
     cout << endl;
   }

   }

else
  {
   cout << "Salah !" <<endl;
   }
}
}
