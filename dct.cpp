#include <iostream>
#include <vector>
#include <math>
using namespace std;

int main() {
    double sum = 0.0, au = 0, av = 0;
    vector<vector<double> > old = {
        {1, 2, 3, 4},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {7, 7, 7, 7}
    };

    vector<vector<double> > new = old;

    for (decltype(old.size()) u = 0; u < old.size(); u++) {
        for (decltype(old[i].size()) v = 0; v < old[i].size(); v++) {
            if (u == 0) {
                au = 0;
            } else {
                au = sqrt(2) / 2;
            }

            if (v == 0) {
                av = 0;
            } else {
                av = sqrt(2) / 2;
            }

            for (decltype(old.size()) i = 0; i < old.size(); i++) {
                for (decltype(old[i].size()) j = 0; j < old[i].size(); j++) {
                    sum = sum + au * av * old[i][j] * cos((2 * i + 1) * pi * u / 8) * cos ((2 * j + 1) * pi * v /8);
                }
            }

            new[u][v] = sum;
            cout << new[u][v] << " ";
        }
        cout << endl;
    }

    return 0;
}

