# Introdução às Técnicas de Programação - IMD1012

## 📖 Sobre o Repositório

Este repositório é dedicado ao armazenamento dos códigos, exercícios e projetos desenvolvidos durante a disciplina de **Introdução às Técnicas de Programação (IMD1012)**, ministrada no curso de Tecnologia da Informação - UFRN/IMD.

O objetivo principal da disciplina é capacitar o aluno a **resolver problemas algorítmicos** com diversas complexidades, utilizando como base a linguagem de programação C. Aqui, você encontrará implementações práticas dos conceitos teóricos vistos em sala de aula.

## 📚 Conteúdo Abordado

A disciplina cobre os seguintes tópicos fundamentais, que estruturam a organização deste repositório:

- [x] **1. Introdução ao Computador:** Conceitos básicos sobre hardware, software e a lógica de funcionamento de um computador.
- [x] **2. Ferramentas de Programação:** Configuração do ambiente de desenvolvimento, uso do compilador (GCC), editor de código e terminal.
- [x] **3. Variáveis e Operadores:** Tipos de dados primitivos, declaração de variáveis, operadores aritméticos, lógicos e relacionais.
- [x] **4. Estruturas de Controle:**
  - [x] Condicionais (`if`, `else`, `switch`).
  - [x] Laços de Repetição (`while`, `for`, `do-while`).
- [ ] **5. Funções:** Declaração, implementação, passagem de parâmetros (por valor e por referência) e escopo de variáveis.
- [ ] **6. Ponteiros:** Conceitos de memória, endereçamento, aritmética de ponteiros e sua aplicação em funções.
- [ ] **7. Arranjos, Matrizes e Strings:**
  - [ ] Vetores (arranjos unidimensionais).
  - [ ] Matrizes (arranjos bidimensionais).
  - [ ] Manipulação de strings (`char *`).
- [ ] **8. Registros, Enumerações e Uniões:**
  - [ ] Estruturas (`struct`).
  - [ ] Tipos enumerados (`enum`).
  - [ ] Uniões (`union`).

## ⚙️ Como Compilar e Executar

Todos os códigos foram escritos em linguagem C e podem ser compilados utilizando o **GCC** (GNU Compiler Collection), que é padrão em sistemas Linux e pode ser facilmente instalado em Windows (via MinGW ou WSL) e macOS.

Para compilar e executar um arquivo, siga os passos abaixo no seu terminal:

```bash
# 1. Navegue até a pasta onde o arquivo .c está localizado
cd 03-Variaveis-Operadores

# 2. Compile o programa usando o gcc. Isso gerará um arquivo executável.
# Formato: gcc <arquivo_fonte.c> -o <nome_do_executavel>
gcc exercicio_01.c -o exercicio_01

# 3. Execute o programa compilado
./exercicio_01
```
