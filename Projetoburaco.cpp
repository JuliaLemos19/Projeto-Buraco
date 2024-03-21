#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

vector<string> inicializarBaralho() {
    vector<string> baralho;
    string naipes[4] = {"1", "2", "3", "4"};
    string numeros[13] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"};

    for (int b = 1; b <= 2; ++b) {
        for (int n = 0; n < 4; ++n) {
            for (int c = 0; c < 13; ++c) {
                baralho.push_back(naipes[n] + "-" + numeros[c] + "-" + to_string(b));
            }
        }
    }

    return baralho;
}

void embaralharBaralho(vector<string>& baralho) {
    srand(time(0));
    random_shuffle(baralho.begin(), baralho.end());
}

vector<vector<string>> distribuirCartas(const vector<string>& baralho) {
    vector<vector<string>> maos(4, vector<string>(11));

    for (int j = 0; j < 4; ++j) {
        for (int c = 0; c < 11; ++c) {
            maos[j][c] = baralho[j * 11 + c];
        }
    }

    return maos;
}

void apresentarMaos(const vector<vector<string>>& maos) {
    for (int j = 0; j < 4; ++j) {
        cout << "Mão do jogador " << j+1 << ":" << endl;
        for (int c = 0; c < 11; ++c) {
            cout << maos[j][c] << endl;
        }
        cout << endl;
    }
}

int main() {
    vector<string> baralho = inicializarBaralho();
    embaralharBaralho(baralho);
    vector<vector<string>> maos = distribuirCartas(baralho);
    apresentarMaos(maos);

    return 0;
}
