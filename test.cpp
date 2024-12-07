#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengonversi jam dalam format "HH:MM" ke menit
int convertToMinutes(const string& time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    return hours * 60 + minutes;
}

int main() {
    string hari, waktu;
    cout << "Masukkan hari (contoh: Senin): ";
    cin >> hari;
    cout << "Masukkan waktu dalam format HH:MM: ";
    cin >> waktu;

    int jamMenit = convertToMinutes(waktu);

    if (hari == "Senin" || hari == "Rabu") {
        if ((jamMenit >= 480 && jamMenit <= 720) || (jamMenit >= 780 && jamMenit <= 1020)) {
            cout << "Kelas dapat dijadwalkan.\n";
        } else {
            cout << "Jam tidak valid untuk penjadwalan kelas.\n";
        }
    } else if (hari == "Selasa" || hari == "Kamis") {
        if ((jamMenit >= 540 && jamMenit <= 660) || (jamMenit >= 840 && jamMenit <= 960)) {
            cout << "Kelas dapat dijadwalkan.\n";
        } else {
            cout << "Jam tidak valid untuk penjadwalan kelas.\n";
        }
    } else if (hari == "Jumat") {
        if (jamMenit >= 480 && jamMenit <= 600) {
            cout << "Kelas dapat dijadwalkan.\n";
        } else {
            cout << "Jam tidak valid untuk penjadwalan kelas.\n";
        }
    } else {
        cout << "Hari tidak valid untuk penjadwalan kelas.\n";
    }

    return 0;
}