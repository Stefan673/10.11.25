#include <iostream>
using namespace std;

int main() {
    int A[20], B[20], C[40];
    int nA, nB, nC, i, j;
    bool gasit;

    cout << "Nr. elemente multimea A: ";
    cin >> nA;
    cout << "Dati elementele multimii A: ";
    for (i = 0; i < nA; i++)
        cin >> A[i];

    cout << "Nr. elemente multimea B: ";
    cin >> nB;
    cout << "Dati elementele multimii B: ";
    for (j = 0; j < nB; j++)
        cin >> B[j];

    nC = 0;
    for (i = 0; i < nA; i++) {
        gasit = false;
        for (j = 0; j < nB; j++)
            if (A[i] == B[j])
                gasit = true;
        if (gasit)
            C[nC++] = A[i];
    }

    cout << "Intersectie: ";
    for (i = 0; i < nC; i++)
        cout << C[i] << " ";
    cout << endl;

    nC = 0;

    for (i = 0; i < nA; i++)
        C[nC++] = A[i];

    for (j = 0; j < nB; j++) {
        gasit = false;
        for (i = 0; i < nA; i++)
            if (B[j] == A[i])
                gasit = true;
        if (!gasit)
            C[nC++] = B[j];
    }

    cout << "Reuniune: ";
    for (i = 0; i < nC; i++)
        cout << C[i] << " ";
    cout << endl;

    nC = 0;
    for (i = 0; i < nA; i++) {
        gasit = false;
        for (j = 0; j < nB; j++)
            if (A[i] == B[j])
                gasit = true;
        if (!gasit)
            C[nC++] = A[i];
    }

    cout << "Diferenta A \\ B: ";
    for (i = 0; i < nC; i++)
        cout << C[i] << " ";
    cout << endl;

    nC = 0;
    for (j = 0; j < nB; j++) {
        gasit = false;
        for (i = 0; i < nA; i++)
            if (B[j] == A[i])
                gasit = true;
        if (!gasit)
            C[nC++] = B[j];
    }

    cout << "Diferenta B \\ A: ";
    for (i = 0; i < nC; i++)
        cout << C[i] << " ";
    cout << endl;

    return 0;
}
