#include <iostream>
#include <vector>

using namespace std;

int main() {
  
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    if (a.size() != b.size()) {
        cout << "Vectors must be of same size." << endl;
        return 1;
    }

    vector<int> c(a.size());

    for (size_t i = 0; i < a.size(); ++i) {
        c[i] = a[i] + b[i];
    }

    cout << "Resultant vector: ";
    for (int val : c) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

