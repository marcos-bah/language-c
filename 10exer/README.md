**1)** (3 pontos) Dado a estrutura abaixo, faça um programa que realiza a leitura dos dados de 30 pessoas e os armazene em um vetor  
de dimensão 30. O usuário deve procurar uma pessoa através do CPF e calcular o seu IMC. Mostre na tela o valor do IMC e os dados    
da pessoa. Para calcular o IMC use: peso/altura 2.  
```
typedef struct{
    char nome[30], sexo[1];
    int cpf;
    float altura, peso;
}stDadosPessoa;
```
**2)** (3 pontos) Faça um programa que realiza o cadastro de 30 contas bancárias com as seguintes informações: número da conta,  
nome do cliente e saldo. O banco permitirá o cadastramento de apenas quinze contas e não poderá haver mais que uma conta com o  
mesmo número. Crie um menu contendo as opções: 1. cadastrar conta; 2. visualizar todas as contas de um determinado cliente; 3.  
excluir a conta com menor saldo (supondo que não exista conta com saldos iguais). Utilize a estrutura abaixo:  
```
typedef struct{
    char nome[30];
    int numConta;
    float saldo;
}stContaCliente;
```
**3)** (4 pontos) Um médico armazena informações sobre seus 20 pacientes (nome, idade, sexo, altura e peso). Faça um programa que  
realiza a leitura das informações de cada paciente pelo teclado e determina: o nome da pessoa mais pesada; o nome e a idade das  
pessoas que estejam acima do seu peso ideal; os nomes das pessoas que estejam abaixo do seu peso ideal, mostrando ainda o peso   
que essas pessoas deverão alcançar para atingir seu peso ideal. O cálculo para determinar o peso ideal é:    
Homens (72,7 * altura) – 58 e Mulheres (62,1 * altura) – 44,7.
```
typedef struct{
    char nome[30], sexo[2];
    int idade;
    float altura, peso;
}stPaciente;
```