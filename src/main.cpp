#include <iostream>
#include <stdlib.h>
#include "..\headers\AvlTree.hpp"

using namespace std;

int main()
{
  AvlTree<int> *tree = new AvlTree<int>(nullptr); 

  while (true) {
    system("cls");
    cout << "Digite o numero de uma opcao:" << endl;

    cout << "1) Inserir" << endl;
    cout << "2) Remover" << endl;
    cout << "3) Consultar" << endl;
    cout << "4) Ver a arvore" <<endl;
    cout << "5) Sair" << endl << endl;

    int option;
    cin >> option;

    switch (option) {
      case 1:
      {
        cout << "Digite o valor que deseja inserir: ";
        int insertedValue;
        cin >> insertedValue;
        cout << endl;
        tree->addInfo(insertedValue);
        cout << "Valor inserido com sucesso" << endl << endl;
        cout << *tree;
        break;
      }

      case 2:
      {
        cout << "Digite o valor que deseja remover: ";
        int deletedValue;
        cin >> deletedValue;
        cout << endl;
        if(tree->findInfo(deletedValue) == nullptr)
          cout << "Valor nao existe na arvore";
        else
        {
          tree->deleteInfo(deletedValue);
          cout << "Valor removido com sucesso";
        }
        cout << endl << endl;
        cout << *tree;

        break;
      }

      case 3:
      {
        cout << "Digite o valor que deseja consultar: ";
        
        int value;
        cin >> value;
        cout << endl;

        int* tree_value = tree->findInfo(value);
        if (tree_value != nullptr)
        {
          cout << "Valor encontrado na arvore";
        }
        else
          cout << "Valor nao encontrado na arvore";
        break;
      }

      case 4:
        cout << *tree;
        break;
      case 5:
        exit(0);
        break;
      default:
        cout << "Digite uma opcao valida";
    }
    cout << endl << endl;
    cout << "Pressione qualquer tecla para continuar...";
    cin.sync();
    cin.ignore();
  }
}
