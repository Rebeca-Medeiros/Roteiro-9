#include "Imovel.h"
#include <iostream>

using namespace std;

void Imovel::setEndereco(Endereco e){
    ed = e;
}

Endereco Imovel::getEndereco(){
    return ed;
}

void Imovel::setDescricao(string des){
  descricao = des;
}
