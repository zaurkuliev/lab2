#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void writeFile(const string& filename) {
    ofstream fout(filename);
    if (!fout.is_open()) {
        cerr << "Ошибка открытия файла: " << filename << endl;
        return;
    }
    for (int i = 0; i < 10; ++i) {
        int x = rand() % 10 + 1;
        fout << x << " ";
    }
    fout.close();
    cout << "Файл " << filename << " создан." << endl;
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    writeFile("file1.txt");
    writeFile("file2.txt");
    writeFile("file3.txt");
    cout << "Все файлы успешно созданы (Заур Кулиев)." << endl;
    return 0;
}
