# 🌟 Super Trunfo Simplificado em C 🌟
## Comparação de Cartas com Múltiplos Atributos

[![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Status](https://img.shields.io/badge/Status-Concluído-brightgreen)](README.md)

## 📖 Descrição do Projeto

Este projeto implementa uma versão simplificada e interativa do clássico jogo de cartas **Super Trunfo** (ou Top Trumps) utilizando a linguagem C.

O programa permite a comparação de duas cartas de países (`Brasil` e `Japão` no exemplo) com base em **dois atributos distintos** escolhidos pelo jogador. O objetivo principal é determinar o vencedor de cada atributo individualmente, considerando regras especiais, e em seguida, calcular o **vencedor final** com base na soma dos valores dos atributos comparados.

A aplicação é executada via linha de comando, oferecendo um menu interativo para a seleção dos atributos e um resultado detalhado da disputa.

---

## 🚀 Funcionalidades Chave

* **Estrutura de Dados:** Utilização de uma `struct` (`Carta`) para modelar e armazenar as informações de cada país (nome e cinco atributos numéricos).
* **Menu Interativo:** Exibição de um menu dinâmico que permite ao jogador escolher **dois atributos distintos** para a comparação.
* **Regra de Vantagem Especial:** Tratamento especial para o atributo *Densidade Demográfica*, onde o **menor valor vence**, em contraste com os demais atributos (onde o maior valor vence).
* **Comparação de Cartas:** Execução da lógica de comparação entre as duas cartas fixas (`Brasil` e `Japão`).
* **Cálculo de Vitória Final:** O vencedor final é determinado pela **soma dos valores** dos dois atributos escolhidos. O país com a maior soma vence, ou o resultado é empate.
* **Saída Detalhada:** Exibição clara e formatada dos resultados parciais (vencedor de cada atributo) e do resultado final.

---

## 🏷️ Atributos Disponíveis para Comparação

Os jogadores podem escolher entre os seguintes atributos:

1.  **População**
2.  **Área**
3.  **PIB** (Produto Interno Bruto)
4.  **PIB per Capita**
5.  **Densidade Demográfica**

---

## 📊 Regras de Comparação

### 1. Vitória por Atributo

| Atributo | Regra de Vitória | Observações |
| :--- | :--- | :--- |
| População, Área, PIB, PIB per Capita | **Maior** valor | Regra padrão (Super Trunfo). |
| Densidade Demográfica | **Menor** valor | Regra especial (menor é melhor). |

### 2. Vitória Final

* Os valores dos **dois atributos** escolhidos são **somados** para cada país.
* O país que obtiver a **maior soma total** é o vencedor final.
* Em caso de somas iguais, o resultado é **Empate**.

---

## 🔧 Requisitos e Instalação

### Requisitos

* Compilador C (Recomendado: **GCC** ou **Clang**).
* Sistema operacional compatível com C padrão (Linux, Windows, macOS).

### Como Compilar e Executar

1.  **Salve o Código:** Salve o código-fonte fornecido em um arquivo chamado `supertrunfo.c`.

2.  **Abra o Terminal:** Navegue até o diretório onde o arquivo `supertrunfo.c` foi salvo.

3.  **Compile o Código:** Use o GCC (ou seu compilador C preferido) para gerar o executável.

    ```bash
    gcc CartasSuperTrunfo.c -o CartasSuperTrunfoMestre
    ```

4.  **Execute o Programa:** Inicie o jogo e siga as instruções na tela.

    ```bash
    ./CartasSuperTrunfoMestre
    ```

---

## 🖥️ Exemplo de Fluxo (Saída no Console)

Comparando cartas de Brasil e Japão!

Escolha um atributo: 1 - População 2 - Área 3 - PIB 4 - PIB per Capita 5 - Densidade Demográfica Escolha: 3

Escolha um atributo: 1 - População 2 - Área 4 - PIB per Capita 5 - Densidade Demográfica Escolha: 5

===== RESULTADO ===== Comparação entre Brasil e Japão

Atributo 1: PIB Brasil: 1847000000000.00 | Japão: 4937000000000.00 --> Vencedor: Japão

Atributo 2: Densidade Demográfica Brasil: 25.10 | Japão: 330.80 --> Vencedor: Brasil

Somas: Brasil: 1847000000025.10 Japão: 4937000000330.80

Resultado Final: Japão venceu!
