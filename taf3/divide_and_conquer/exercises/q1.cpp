#include <iostream>
#include <vector>

using namespace std;

struct Candidato
{
    string nome;
    string curso;
    int nota;
    int idade;
};

int partition(vector<Candidato> &arr, int left, int right)
{

    Candidato pivot = arr[right];

    int i = left - 1;

    for (int j = left; j < right; j++)
    {
        if (arr[j].nota >= pivot.nota)
        {
            i = i + 1;
            Candidato temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    Candidato temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}

void quicksort(vector<Candidato> &arr, int left, int right)
{
    if (left < right)
    {

        int pi = partition(arr, left, right);

        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numCandidatos;
    cin >> numCandidatos;

    vector<Candidato> arrCandidatosCC;
    vector<Candidato> arrCandidatosEC;
    vector<Candidato> arrCandidatosIA;

    for (int i = 0; i < numCandidatos; i++)
    {
        Candidato cand;
        cin >> cand.nome;
        cin >> cand.curso;
        cin >> cand.nota;
        cin >> cand.idade;

        if (cand.curso == "CC")
        {
            arrCandidatosCC.push_back(cand);
        }
        else if (cand.curso == "EC")
        {
            arrCandidatosEC.push_back(cand);
        }
        else if (cand.curso == "IA")
        {
            arrCandidatosIA.push_back(cand);
        }
    }

    quicksort(arrCandidatosCC, 0, arrCandidatosCC.size() - 1);
    quicksort(arrCandidatosEC, 0, arrCandidatosEC.size() - 1);
    quicksort(arrCandidatosIA, 0, arrCandidatosIA.size() - 1);

    cout << "Notas de CC: \n";

    for (int x = 0; x < arrCandidatosCC.size(); x++)
    {
        cout << arrCandidatosCC[x].nome << "\n";
    }

    cout << "Notas de EC: " << "\n";

    for (int x = 0; x < arrCandidatosEC.size(); x++)
    {
        cout << arrCandidatosEC[x].nome << "\n";
    }

    cout << "Notas de IA: " << "\n";

    for (int x = 0; x < arrCandidatosIA.size(); x++)
    {
        cout << arrCandidatosIA[x].nome << "\n";
    }

    return 0;
}