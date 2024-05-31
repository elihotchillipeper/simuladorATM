# Documentação do Código: Simulador de Saque de ATM
#### Este programa é um simulador de caixa eletrônico (ATM) que calcula a menor quantidade possível de notas necessárias para sacar um determinado valor. As denominações de notas suportadas são 100, 50, 20, 10, 5 e 2.

## Estrutura do Código
### Bibliotecas Incluídas:
- #include iostream
- #include array
- #using namespace std;

### Função contaNotas
- Protótipo: array<int, 6> contaNotas(int saque)
- Descrição: Calcula a quantidade de notas necessárias para formar o valor do saque utilizando as menores notas possíveis.
- Parâmetros:
  - int saque: O valor a ser sacado.
- Retorno: Um array de inteiros contendo a quantidade de cada denominação de nota.

### Função main
- Descrição: Gerencia o fluxo principal do programa, incluindo a entrada do usuário, a chamada da função contaNotas e a exibição dos resultados.
- Fluxo:
  - Declaração de variáveis.
  - Leitura do valor a ser sacado.
  - Chamada da função contaNotas para calcular a quantidade de notas.
  - Exibição da quantidade de cada tipo de nota.
  - Término do programa.
 
### Funcionalidades
- Entrada do Usuário:
  - Solicita ao usuário que insira o valor a ser sacado.
  - Exemplo de entrada: Digite o valor a ser sacado: 287
- Separação das Notas:
  - A função contaNotas divide o valor do saque nas maiores notas possíveis, utilizando as seguintes denominações: 100, 50, 20, 10, 5 e 2.
- Cálculo da Quantidade de Notas:
  - Calcula a quantidade de notas de 100, 50, 20, 10, 5 e 2.
  - Exemplo de saída para o valor 287:
    - Qtd. Notas de 100: 2
    - Qtd. Notas de 50: 1
    - Qtd. Notas de 20: 1
    - Qtd. Notas de 10: 1
    - Qtd. Notas de 5: 1
    - Qtd. Notas de 2: 1
- Saída de Informações:
  - Exibe a quantidade de cada tipo de nota necessária para formar o valor inserido.

## Considerações Finais
Este programa é uma ferramenta simples e eficiente para simular a distribuição de notas em um saque de ATM. Ao garantir que o número total de notas seja minimizado, ele otimiza o uso dos recursos disponíveis e melhora a experiência do usuário.

