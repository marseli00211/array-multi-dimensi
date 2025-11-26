#include <iostream>
using namespace std;

int main()
{
   int angka[2][3][4];
   
   int i,j,k;
    cout<<"contoh array multi dimensi"<<endl;
    cout<<"massukkan elemen-elemen array angka"<<endl;
        for(i=0;i<2;i++){
            for (j=0;j<3;j++){
                for (k=0;k<4;k++){
                    cout << "angka indeks ke["<<i<<"]["<<j<<"]["<<k<<"]"<<"=";
                cin>>angka [i][j][k];
                }
            }
        }
        
        cout<<"tampil nilai elemen array"<<endl;
        for(i=0;i<2;i++){
            for (j=0;j<3;j++){
                for (k=0;k<4;k++){
                    cout<<"angka indeks ke["<<i<<"]["<<j<<"]["<<k<<"]"<<"="<<angka[i][j][k]<<endl;
                    
                }
            }
        }
        
        
        return 0;
}