#include <iostream>
#include <string>
using namespace std;

int main() {
    string hari, waktu;
    int jam, menit;
    int konversi_waktu;

    
    cout << "Masukkan hari (contoh: Senin): "; cin >> hari;
    cout << "Masukkan waktu dalam format HH:MM (contoh: 12:30): "; cin >> waktu;

    
    jam = (waktu[0] - '0') * 10 + (waktu[1] - '0');
    menit = (waktu[3] - '0') * 10 + (waktu[4] - '0');
    konversi_waktu = jam * 60 + menit;

    
    if (hari == "Senin" or hari == "Rabu") 
    {
        if ((konversi_waktu >= (8*60) && konversi_waktu <= (12*60)) || (konversi_waktu >= (13*60) && konversi_waktu <= (17*60))) 
        {
            cout << "Kelas dapat dijadwalkan.\n";
        }else 
        {
            cout << "Jam tidak valid untuk penjadwalan kelas\n";
        }
    }else if (hari == "Selasa" or hari == "Kamis") 
    {
        if ((konversi_waktu >= (9*60) && konversi_waktu <= (11*60)) || (konversi_waktu >= (14*60) && konversi_waktu <= (16*60))) 
        {
            cout << "Kelas dapat dijadwalkan.\n";
        } else
        {
            cout << "Jam tidak valid untuk penjadwalan kelas\n";
        }
    } else if (hari == "Jumat") 
    {
        if (konversi_waktu >= (8*60) && konversi_waktu <= (10*60)) 
        {
            cout << "Kelas dapat dijadwalkan.\n";
        }else 
        {
            cout << "Jam tidak valid untuk penjadwalan kelas";
        }
    }else 
    {
        cout << "Hari tidak valid untuk penjadwalan kelas.\n";
    }

    return 0;
}
