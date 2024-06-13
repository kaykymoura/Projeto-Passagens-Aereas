//nome dos integrantes Kayky e Laura

#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;
string Nome, Origem, Destino, dataViagem;

void desenhaBoasVindas()
{   
    system("cls");
    cout << " --------------------------- \n";
    cout << "|                           |\n";
    cout << "|   Bem vindo ao programa   |\n";
    cout << "|            de             |\n";
    cout << "|     Passagens Aereas      |\n";
    cout << "|                           |\n";
    cout << " --------------------------- \n";
}
void menu()
{
    cout << " -------------MENU------------- \n";
    cout << "|                               |\n";
    cout << "|   Escolha uma opcao:          |\n";
    cout << "|     1) Cadastrar Passagem     |\n";
    cout << "|     2) Listar passagens       |\n";
    cout << "|     0) Sair                   |\n";
    cout << "|                               |\n";
    cout << " -------------MENU------------- \n";
    cout << "Opcao: ";
}

void limpaBufferDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

}

void cadastrarPassagem()
{
    limpaBufferDoCin();
    cout << "Digite o nome do passageiro: ";
    getline(cin, Nome);
    cout << "\n";
    cout << "Digite a sua origem: ";
    getline(cin, Origem);
    cout << "\n";
    cout << "Digite o seu destino: ";
    getline(cin, Destino);
    cout << "\n";
    cout << "Digite a data da sua viagem: ";
    getline(cin, dataViagem);
    cout << "\n";

    passageiros.push_back(Nome);
    origens.push_back(Origem);
    destinos.push_back(Destino);
    datas.push_back(dataViagem);

}

void listarPassagem()
{
    cout << " ------------------------------- \n";
    cout << "|                               |\n";
    cout << "|    Bem vindo ao programa      |\n";
    cout << "|              de               |\n";
    cout << "|     Lista de Passageiros      |\n";
    cout << "|                               |\n";
    cout << " ------------------------------- \n";
    cout << "\n";
    cout << "\n";

    for (int i = 0; i < passageiros.size();  i++){
        cout << "Quantidade de passagens: " << passageiros.size() << endl << endl;
        cout << "Passageiro: " << passageiros[i]<< endl; 
        cout << "Origem: " << origens[i] << endl;
        cout << "Destino: " << destinos[i] << endl;
        cout << "Data: " << datas[i] << endl;

        
    }
    
}
int main()
{   
    int  opcao = -1;
    string continua = "";
    desenhaBoasVindas();
    
    do
    {
        menu();
        cin >> opcao;
        cout << endl;

    switch (opcao)
    {
    case 0:
        cout << "Voce escolheu a opcao Sair do Programa \n";
        break;
    case 1:
        cout << "Voce escolheu a opcao Cadastrar Passagem \n";
        cadastrarPassagem();
        break;
    case 2:
        cout << "Voce escolheu a opcao Listar Passagem \n"; 
        listarPassagem(); 
        break;  
    default:
        cout << "Opcao Invalida \n";
        
    }
    } while (opcao != 0);


    

    return 0;
}
