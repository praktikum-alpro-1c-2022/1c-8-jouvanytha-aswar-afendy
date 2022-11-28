#include <iostream>

using namespace std;

int main(){
  int i, j, m, n,r,p, matriks[10][10],matriks2 [10][10],C [10][10], transpose[10][10];
  cout<<"==============================="<<endl;
  cout<<"   Progam Menghitung Matriks"<<endl;
  cout<<"==============================="<<endl;
  cout<<"Nama  : Jouvanytha Aswar Afendy " << endl;
  cout<<"Kelas : 1C " << endl;
  cout<<"NPM   : 2210631170024 " << endl;
  cout<<"==============================="<<endl;
  cout<<"Masukkan Ordo Matriks"<<endl;
  cout<<" \n";
  cout<<"Banyaknya Baris : ";
  cin>>m;
  cout<<"Banyaknya Kolom : ";
  cin>>n;
  cout<<endl;

  cout << "============================\n";
  cout << "Masukkan elemen matriks A :\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    cout<<" elemen ["<<i+1<<","<<j+1<<"]: ";
      cin  >> matriks[i][j];
    }
  }

  cout << "============================\n";
  cout << "Masukkan elemen matriks B :\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    cout<<" elemen ["<<i+1<<","<<j+1<<"]: ";
      cin  >> matriks2[i][j];
    }
  }
cout << "==============================\n";
cout << "Matriks A : " << endl;
    for (i=0; i< m; i++){
        for (j=0; j< n; j++){
            cout << " " << matriks[i][j]<<"\t";
            if (j==n-1){
            cout << endl;
                }
            }
        }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

  cout << "HASIL TRANPOSE MATRIKS A: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << " " <<transpose[i][j] << "\t";
    }
    cout << endl;
  }
cout << "==============================\n";
cout << "Matriks B : " << endl;
    for (i=0; i< m; i++){
        for (j=0; j< n; j++){
            cout << " " << matriks2[i][j] <<"\t";
            if (j==n-1){
            cout << endl;
                }
            }
        }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks2[i][j];
    }
  }

  cout << "HASIL TRANPOSE MATRIKS B: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << " " <<transpose[i][j] << "\t";
    }
    cout << endl;
  }
   for (i=0;i<m;i++) for(j=0;j<n;j++)
   C[i][j]=matriks[i][j]+matriks2[i][j];
   cout << "\n" << "MATRIKS HASIL PENJUMLAHAN = "<<endl;
   for (i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   cout<< " " <<C[i][j]<<"\t";
   cout<<endl;
   }
   cout << "==============================\n";
   cout<<"MATRIKS : "<<endl;
   cout<<"\nMatriks A          Matriks B"<<endl;
   for (i=0;i<m;i++)
    {
      for (j=0;j<n;j++)
      {
        cout<<matriks[i][j]<<"    ";
      }
    if (i==0)
    {
       cout<<"x";
       cout<<"    ";
       for (j=0;j<m;j++)
       {
         cout<<matriks2[i][j]<<"    ";
       }
    }
    if (i>0)
    {
        cout<<"    ";
        for (j=0;j<m;j++)
        cout<<" "<<matriks2[i][j]<<"   ";
    }
    cout<<endl;
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
   cout<<endl<<"MATRIKS HASIL PERKALIAN = "<<endl;
   for (i=0;i<m;i++)
   {
     for (j=0;j<n;j++)
     {
       cout<<C[i+1][j+1]<<"     ";
     }
     cout<<endl;
   }


}
